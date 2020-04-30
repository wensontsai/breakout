#include "game.h"

Game::Game(unsigned int width, unsigned int height)
    : State(GAME_MENU), Keys(), Width(width), Height(height) {


    }

Game::~Game() { }

void Game::Init() { }

void Game::Update(float dt) { }

void Game::ProcessInput(float dt) { }

void Game::Render() { }