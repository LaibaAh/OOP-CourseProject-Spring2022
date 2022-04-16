#include "game.hpp"
#include "panda.hpp"

#pragma once

<<<<<<< HEAD
// anda *Panda::instance = 0;
//  Initialize pointer to zero so that it can be initialized in first call to getInstance
=======
//Panda *Panda::instance = 0;
// Initialize pointer to zero so that it can be initialized in first call to getInstance
>>>>>>> 888b81efeea12f5a89a37b6d3b5d0ae518628ad3

int main(int argc, char *args[])
{
    // Start up SDL and create window
    game game;
    if (!game.init())
    {
        printf("Failed to initialize!\n");
    }

    if (!game.loadMedia())
    {
        printf("Failed to load media!\n");
        return 0;
    }
    // Main loop flag
    bool quit = false;

    // Event handler
    SDL_Event e;

    // While application is running
    while (!quit)
    {
        // Handle events on queue
        while (SDL_PollEvent(&e) != 0)
        {
            // User requests quit
            if (e.type == SDL_QUIT)
            {
                quit = true;
            }
        }

        // Apply the PNG image
        SDL_BlitSurface(game.gPNGSurface, NULL, game.gScreenSurface, NULL);

        // Update the surface
        SDL_UpdateWindowSurface(game.gWindow);
    }

    // Free resources and close SDL
    game.close();

    // Panda *s = s->getinstance(); // for prototyping we have created one instance
    // cout << s->getData() << endl;
    // s->setData(100); // the set data can be used to add apples for our case
    // cout << s->getData() << endl;

    return 0;
}
