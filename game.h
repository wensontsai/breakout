#ifndef GAME_H
#define GAME_H

#include <glad/glad.h>
#include <GLFW/glfw3.h>

// current state of game
enum GameState {
    GAME_ACTIVE,
    GAME_MENU,
    GAME_WIN
};

// Game class holds all game-related state and functionality.
// all game-related data is here.
class Game {
    public:
        // game state
        GameState State;
        bool Keys[1024];
        unsigned int Width;
        unsigned int Height;

        // constructor
        Game(unsigned int width, unsigned int height);
        ~Game();

        // initialize game state (load all shaders/textures/levels)
        void Init();

        // game loop
        void ProcessInput(float dt);
        void Update(float dt);
        void Render();
};

#endif