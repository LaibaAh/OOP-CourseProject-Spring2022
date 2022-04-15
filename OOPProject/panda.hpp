#include <iostream>
#include <SDL.h>

using namespace std;
// this is a prototype file for the implementation of panda (player) using Singleton Design Pattern

class Panda
{
    SDL_Rect srcRect, moverRect;
    Panda()
    {
    }

public:
    void draw(SDL_Renderer *, SDL_Texture *Panda_0);
    bool check_move_right();
    bool check_move_left();
    bool check_move_down();
    bool check_move_up();
    void animate();
    void moveRight();
    void moveLeft();
    SDL_Rect moveUp();
    void moveDown();
};
