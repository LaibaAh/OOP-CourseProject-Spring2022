#include "game.hpp"

bool game::init()
{
    // Initialization flag
    bool success = true;

    // Initialize SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        printf("SDL could not initialize! SDL Error: %s\n", SDL_GetError());
        success = false;
    }
    else
    {
        // Create window
        gWindow = SDL_CreateWindow("PandaRun", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
        if (gWindow == NULL)
        {
            printf("Window could not be created! SDL Error: %s\n", SDL_GetError());
            success = false;
        }
        else
        {
            // Initialize PNG loading
            int imgFlags = IMG_INIT_PNG;
            if (!(IMG_Init(imgFlags) & imgFlags))
            {
                printf("SDL_image could not initialize! SDL_image Error: %s\n", IMG_GetError());
                success = false;
            }
            else
            {
                // Get window surface
                gScreenSurface = SDL_GetWindowSurface(gWindow);
            }
        }
    }

    return success;
}

bool game::loadMedia()
{
    // Loading success flag
    bool success = true;

    // Load PNG surface
    gPNGSurface = loadSurface("Slide1.png");
    if (gPNGSurface == NULL)
    {
        printf("Failed to load PNG image!\n");
        success = false;
    }

    return success;
}

void game::close()
{
    // Free loaded image
    SDL_FreeSurface(gPNGSurface);
    gPNGSurface = NULL;

    // Destroy window
    SDL_DestroyWindow(gWindow);
    gWindow = NULL;

    // Quit SDL subsystems
    IMG_Quit();
    SDL_Quit();
}

SDL_Surface *game::loadSurface(std::string path)
{
    // The final optimized image
    SDL_Surface *optimizedSurface = NULL;

    // Load image at specified path
    SDL_Surface *loadedSurface = IMG_Load(path.c_str());
    if (loadedSurface == NULL)
    {
        printf("Unable to load image %s! SDL_image Error: %s\n", path.c_str(), IMG_GetError());
    }
    else
    {
        // Convert surface to screen format
        optimizedSurface = SDL_ConvertSurface(loadedSurface, gScreenSurface->format, 0);
        if (optimizedSurface == NULL)
        {
            printf("Unable to optimize image %s! SDL Error: %s\n", path.c_str(), SDL_GetError());
        }

        // Get rid of old loaded surface
        SDL_FreeSurface(loadedSurface);
    }

    return optimizedSurface;
}

<<<<<<< HEAD
/*void Game::run()
=======
void game::run()
>>>>>>> 888b81efeea12f5a89a37b6d3b5d0ae518628ad3
{
     bool quit;
     SDL_Event e;
     char direction = 's';
     Gamescreen Gamescreen(gRenderer, Slide2);
     // Pacman p1;
     while (!quit) // gameloop
     {
         // Handle events on queue
         while (SDL_PollEvent(&e) != 0)
         {
             // User requests quit
             if (e.type == SDL_QUIT)
             {
                 quit = true;
             }

             if (e.type == SDL_MOUSEBUTTONDOWN)
             {

                 int xMouse, yMouse;
                 SDL_GetMouseState(&xMouse, &yMouse);
                 Gamescreen.createObject(xMouse, yMouse);
                 if (e.type = SDL_KEYDOWN)
                 {
                     if (e.key.keysym.sym == SDLK_RIGHT)
                     {
                         direction = 'r';
                     }
                     else if (e.key.keysym.sym == SDLK_LEFT)
                     {
                         direction = 'l';
                     }
                     else if (e.key.keysym.sym == SDLK_UP)
                     {
                         direction = 'u';
                     }
                     else if (e.key.keysym.sym == SDLK_DOWN)
                     {
                         direction = 'd';
                     }
                 }
             }

             // SDL_RenderClear(gRenderer);                      // removes everything from renderer
             // SDL_RenderCopy(gRenderer, gTexture, NULL, NULL); // Draws background to renderer
             SDL_UpdateWindowSurface(game.gWindow); // Draws background to renderer
             SDL_UpdateWindowSurface(game.gWindow);

             //***********************draw the objects here********************
             if (blit_called == true)
             {

                 Gamescreen.drawPanda();
                 // spacmania.drawPacman();
                 switch (direction)
                 {
                 case 'r':
                     if (Gamescreen.can_move_right() == true)
                     {
                         Gamescreen.move_right();
                     }
                     break;
                 case 'l':
                     if (Gamescreen.can_move_left() == true)
                     {
                         Gamescreen.move_left();
                     }
                     break;
                 case 'u':
                     if (Gamescreen.can_move_up() == true)
                     {
                         Gamescreen.move_up();
                     }
                     break;
                 case 'd':
                     if (Gamescreen.can_move_down() == true)
                     {
                         Gamescreen.move_down();
                     }
                     break;
                 }
             }

             SDL_RenderPresent(gRenderer);

             //****************************************************************
             // displays the updated renderer

             SDL_Delay(500); // causes sdl engine to delay for specified miliseconds
         }
         .move_down();
         break;
     }
 }

 SDL_RenderPresent(gRenderer);

 //****************************************************************
 // displays the updated renderer

 SDL_Delay(500); // causes sdl engine to delay for specified miliseconds
}*/