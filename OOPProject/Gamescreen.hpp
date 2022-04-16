#include <SDL.h>
#include <list>
using namespace std;
#include "panda.hpp"
#include "game.hpp"
#pragma once

class Gamescreen
{
protected:
    SDL_Renderer *gRenderer;
    SDL_Texture *Panda_0;
    SDL_Texture *Slide2;
    // list<Ghost*> ghosts;
    // Right now we're creating one pigeon,
    // In the solution you have to create vectors of pigeons, eggs, and nests
    Panda p;
    game p1;

public:
    Gamescreen(SDL_Renderer *, SDL_Texture *);
    void drawObjects();
    void createObject(int, int);
    void move_right();
    void move_left();
    SDL_Rect move_up();
    void move_down();
    void drawPacman();
    void drawGhosts();
    bool can_move_right();
    bool can_move_left();
    bool can_move_up();
    bool can_move_down();
    // SDL_Rect makeWall();
};