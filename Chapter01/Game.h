// ----------------------------------------------------------------
// From Game Programming in C++ by Sanjay Madhav
// Copyright (C) 2017 Sanjay Madhav. All rights reserved.
// 
// Released under the BSD License
// See LICENSE in root directory for full details.
// ----------------------------------------------------------------

#pragma once
#include "SDL/SDL.h"

// Vector2 struct just stores x/y coordinates
// (for now)
struct Vector2
{
	float x;
	float y;
};

// Game class
class Game
{
//#	メンバー関数
public:	
	Game();
	// Initialize the game	
	bool Initialize();	//#	ゲームの初期化
	// Runs the game loop until the game is over	
	void RunLoop();		//#	ゲームオーバーまでゲームループを実行する
	// Shutdown the game	
	void Shutdown();	//#	ゲームをシャットダウンする	
private:
	// Helper functions for the game loop	
	void ProcessInput();	
	void UpdateGame();
	void GenerateOutput();

//#	メンバー変数
	// Window created by SDL
	SDL_Window* mWindow;
	// Renderer for 2D drawing
	SDL_Renderer* mRenderer;
	// Number of ticks since start of game
	Uint32 mTicksCount;
	// Game should continue to run
	bool mIsRunning;
	
	// Pong specific
	// Direction of paddle
	int mPaddleDir;
	// Position of paddle
	Vector2 mPaddlePos;
	// Position of ball
	Vector2 mBallPos;
	// Velocity of ball
	Vector2 mBallVel;
};
