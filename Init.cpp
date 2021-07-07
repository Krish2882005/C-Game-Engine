// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

//This Is A Beast Engine File Which Has The License Apache 2.0

#include "Init.h"
#include <iostream>
#include "TextureManager.h"
#include "RenderText.h"
#include "InputHandling.h"
#include "Logger.h"
#include "Vector2.h"

constexpr int ScreenWidth = 1080;
constexpr int ScreenHeight = 720;

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
		if (TextureManager::Init() != 0)
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

	logger->LogMessage("Info", "Beast Engine Has Successfully Initialized And Other Tasks Are Completed");
}

void Init::Load()
{
	logger->LogMessage("Info", "Loading Files And Other Tasks");

	RenderText::Load();

	logger->LogMessage("Info", "Loading GUI");

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
}

void Init::Update()
{
	
}

void Init::Draw()
{
	SDL_RenderClear(Renderer);
	
	SDL_RenderPresent(Renderer);
}

void Init::Clean()
{
	RenderText::Clean();
	SDL_DestroyWindow(Window);
	SDL_DestroyRenderer(Renderer);

	logger->LogMessage("Info", "Beast Engine Is Clean");

	delete logger;
}
