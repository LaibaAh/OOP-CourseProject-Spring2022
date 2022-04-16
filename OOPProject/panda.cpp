#include "panda.hpp"

void Panda::draw(SDL_Renderer *gRenderer, SDL_Texture *Panda_0)
{
    SDL_RenderCopy(gRenderer, Panda_0, &srcRect, &moverRect);
}

bool Panda::check_move_right()
{
}

bool Panda::check_move_left()
{
}

bool Panda::check_move_down()
{
}

bool Panda::check_move_up()
{
}

void Panda::animate()
{
}

void Panda::moveRight()
{
    srcRect = {69, 98, 21, 29};
    moverRect.x += 15;
}

void Panda::moveLeft()
{
    srcRect = {70, 131, 21, 29};
    moverRect.x -= 15;
}

SDL_Rect Panda::moveUp()
{
    srcRect = {2, 65, 28, 30};
    moverRect.y -= 15;
    return moverRect;
}

void Panda::moveDown()
{
    srcRect = {2, 1, 28, 30};
    moverRect.y += 15;
}

Panda::Panda()
{
    // src coorinates from assets.png file, they have been found using spritecow.com
    srcRect = {273, 949, 25, 25};

    // it will display pigeon on x = 30, y = 40 location, the size of pigeon is 50 width, 60 height
    moverRect = {50, 100, 25, 25};
}
