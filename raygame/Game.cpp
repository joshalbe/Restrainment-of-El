#include "Game.h"
#include <raylib.h>



//Creates a Game and new Scene instance as its active Scene

Game::Game(int width, int height, char * title)
{
	windowsizeX = width;
	windowsizeY = height;
	InitWindow(width, height, title);
	SetTargetFPS(0);
}

Game::~Game()
{
}

void Game::run()
{
}
//Creates a Game and new Scene instance as its active Scene


//Run the game loop
void Run()
{
	InitAudioDevice();

	while (!WindowShouldClose())
	{

	}
}

//The Actor we are currently running
Actor Game::root()
{

}