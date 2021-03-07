// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

#include "Init.h"
#include <iostream>
#include "Player.h"
#include "Map.h"
#include "Gui.h"

constexpr int ScreenWidth = 1080;
constexpr int ScreenHeight = 720;

//Player player;
//Map map;
Gui gui;
Gui gui1;

SDL_Renderer* Init::Renderer = nullptr;

SDL_Event Init::Event;

void Init::Init_SDL2()
{
	if (SDL_Init(SDL_INIT_EVERYTHING) == 0)
	{
		if (SDL_Init(IMG_INIT_PNG) != 0)
		{
			m_IsRunning = false;
			std::cout << "SDL_image Cannot Init" << std::endl;
			return;
		}

		Window = SDL_CreateWindow("Box2D Game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, ScreenWidth, ScreenHeight, SDL_WINDOW_RESIZABLE);

		if (Window == nullptr)
		{
			std::cout << "window Is A Nullptr" << std::endl;
			m_IsRunning = false;
			return;
		}

		Renderer = SDL_CreateRenderer(Window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		if (Renderer == nullptr)
		{
			std::cout << "renderer Is A Nullptr" << std::endl;
			m_IsRunning = false;
			return;
		}

		m_IsRunning = true;
	}
	else
	{
		m_IsRunning = false;
		std::cout << "SDL2 Cannot Init" << std::endl;
		return;
	}

	//map.Init();
	//player.Init();
}

void Init::Load()
{
	//player.Load();
	//map.Load();
	gui.InitGui();
	gui.CreateGuiMenu("Menu", true, 200, 200, 100, 100, "TestGui");
	gui.CreateGuiOptions("Transform Component", "Hello", 100);
	gui1.InitGui();
	gui1.CreateGuiMenu("Menu", true, 200, 200, 200, 200, "TestGui");
	gui1.CreateGuiOptions("Transform Component", "Hello", 100);
}

void Init::Events()
{
	SDL_PollEvent(&Event);

	if(Event.type == SDL_QUIT)
	{
		m_IsRunning = false;
	}

	//player.Events();
}

void Init::Update()
{
	//player.Update();
	gui.Update();
	gui1.Update();
}

void Init::Draw()
{
	SDL_RenderClear(Renderer);
	//map.Draw();
	//player.Draw();
	gui.Draw();
	gui1.Draw();
	SDL_RenderPresent(Renderer);
}

void Init::Clean()
{
	//player.Clean();
	//map.Clean();
	SDL_DestroyWindow(Window);
	SDL_DestroyRenderer(Renderer);
}
