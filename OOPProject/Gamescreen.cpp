#include <iostream>
#include "Gamescreen.hpp"

/* void Gamescreen::drawObjects()
{
    p.draw(gRenderer, Slide1);
} */

void Gamescreen::drawPacman()
{
    p.draw(gRenderer, Panda_0);
}

/* void Gamescreen::drawGhosts()
{
    ghost.draw(gRenderer, assets);
    // for(int i =0;i<4;i++){
    //     Ghost* ghost = new Ghost();
    //     ghosts.push_back(ghost);
    // }
    // for(Ghost* ghost: ghosts){
    //     ghost->draw(gRenderer, assets);
    // }
} */

void Gamescreen::move_right()
{
    p.moveRight();
}
bool Gamescreen::can_move_right()
{
    p.check_move_right();
}
bool Gamescreen::can_move_left()
{
    p.check_move_left();
}
bool Gamescreen::can_move_up()
{
    p.check_move_up();
}
bool Gamescreen::can_move_down()
{
    p.check_move_down();
}
void Gamescreen::move_left()
{
    p.moveLeft();
}

SDL_Rect Gamescreen::move_up()
{
    SDL_Rect rect = p.moveUp();
    return rect;
}

void Gamescreen::move_down()
{
    p.moveDown();
}

void Gamescreen::createObject(int x, int y)
{
    /* if (x > 40 && x < 315 && y > 250 && y < 370)
    {
        p1.animate();
    }
    if (x > 675 && x < 950 && y > 250 && y < 370)
    {
        g.close();
    } */
}

Gamescreen::Gamescreen(SDL_Renderer *renderer, SDL_Texture *screen) : gRenderer(renderer), Slide2(screen) {}