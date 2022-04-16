#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#pragma once

// Coding Progress - Week 1:
// First screen displayed and linked to the main class
// A basic prototype of panda class has been implemented using Singleton Design Pattern

class game
{
public:
    // Screen dimension constants
    const int SCREEN_WIDTH = 1280;
    const int SCREEN_HEIGHT = 720;

    // Starts up SDL and creates window
    bool init();

    // Loads media
    bool loadMedia();

    // Frees media and shuts down SDL
    void close();

    // Main execution of the game
    // void run();

    // Loads individual image
    SDL_Surface *loadSurface(std::string path);

    // The window we'll be rendering to
    SDL_Window *gWindow = NULL;

    // The surface contained by the window
    SDL_Surface *gScreenSurface = NULL;

    // Current displayed PNG image
    SDL_Surface *gPNGSurface = NULL;
};
