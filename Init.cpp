// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

#include "Init.h"
#include <iostream>
#include "Player.h"
#include "Map.h"
#include "Gui.h"
#include "RenderText.h"
#include "InputHandling.h"
#include "Logger.h"

constexpr int ScreenWidth = 1080;
constexpr int ScreenHeight = 720;

InputHandling inputhandling;
//Player player;
//Map map;
Gui gui;
Logger* logger = new Logger();

SDL_Renderer* Init::Renderer = nullptr;

SDL_Event Init::Event;

void Init::Init_SDL2()
{
	logger->Init();

	logger->LogMessage("Info", "Starting Beast Engine");
	logger->LogMessage("Info", "Initializing Subsystems And Other Tasks");

	if (SDL_Init(SDL_INIT_EVERYTHING) == 0)
	{
		if (SDL_Init(IMG_INIT_PNG) != 0)
		{
			m_IsRunning = false;
			logger->LogMessage("Error", SDL_GetError());
			return;
		}

		if (RenderText::Init() != 0)
		{
			logger->LogMessage("Error", "Error: SDL_ttf Cannot Init");
			m_IsRunning = false;
			return;
		}

		Window = SDL_CreateWindow("Beast Engine", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, ScreenWidth, ScreenHeight, SDL_WINDOW_RESIZABLE | SDL_WINDOW_ALLOW_HIGHDPI);

		if (Window == nullptr)
		{
			m_IsRunning = false;
			logger->LogMessage("Error", SDL_GetError());
			return;
		}

		Renderer = SDL_CreateRenderer(Window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		if (Renderer == nullptr)
		{
			logger->LogMessage("Error", SDL_GetError());
			m_IsRunning = false;
			return;
		}

		m_IsRunning = true;
	}
	else
	{
		m_IsRunning = false;
		logger->LogMessage("Error", SDL_GetError());
		return;
	}

	//map.Init();
	//player.Init();

	logger->LogMessage("Info", "Beast Engine Has Successfully Initialized And Other Tasks Are Completed");
}

void Init::Load()
{
	logger->LogMessage("Info", "Loading Files And Other Tasks");

	//player.Load();
	//map.Load();
	RenderText::Load();

	logger->LogMessage("Info", "Loading GUI");

	Vector2 Position;
	Position.X = 100;
	Position.Y = 100;
	
	Vector2 Position2;
	Position2.X = 200;
	Position2.Y = 200;

	gui.SubGui("File Importer", Position);
	
	logger->LogMessage("Info", "Successfully Loaded GUI");

	logger->LogMessage("Info", "Beast Engine Has Loaded Files And Other Tasks Are Succesfully Completed");

	logger->LogMessage("Info", "Beast Engine Has Started");
}

void Init::Events()
{
	SDL_PollEvent(&Event);

	if (Event.type == SDL_QUIT)
	{
		m_IsRunning = false;
	}

	inputhandling.Update(Event);
	//player.Events();
	gui.Events();
}

void Init::Update()
{
	//player.Update();
	//rendertext.Update();
}

void Init::Draw()
{
	SDL_RenderClear(Renderer);
	//map.Draw();
	//player.Draw();
	//rendertext.Draw();

	gui.Draw();
	SDL_RenderPresent(Renderer);
}

void Init::Clean()
{
	//player.Clean();
	//map.Clean();
	//rendertext.Clean();
	RenderText::Clean();
	SDL_DestroyWindow(Window);
	SDL_DestroyRenderer(Renderer);

	logger->LogMessage("Info", "Beast Engine Is Clean");

	delete logger;
}