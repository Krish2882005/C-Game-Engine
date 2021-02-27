#include "Init.h"
#include <iostream>
#include "Player.h"
#include "Map.h"

constexpr int ScreenWidth = 1080;
constexpr int ScreenHeight = 720;

//Player player;
//Map map;

SDL_Renderer* Init::renderer = nullptr;

SDL_Event Init::event;

Init::Init()
{
	if (SDL_Init(SDL_INIT_EVERYTHING) == 0)
	{
		if (SDL_Init(IMG_INIT_PNG) != 0)
		{
			m_IsRunning = false;
			std::cout << "SDL_image Cannot Init" << std::endl;
			return;
		}
		
		window = SDL_CreateWindow("Box2D Game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, ScreenWidth, ScreenHeight, SDL_WINDOW_RESIZABLE);

		if (window == nullptr)
		{
			std::cout << "window Is A Nullptr" << std::endl;
			m_IsRunning = false;
			return;
		}

		renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED || SDL_RENDERER_PRESENTVSYNC);

		if (renderer == nullptr)
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

Init::~Init()
{

}

void Init::Load()
{
	//player.Load();
	//map.Load();
}

void Init::Events()
{
	SDL_PollEvent(&event);

	if(event.type == SDL_QUIT)
	{
		m_IsRunning = false;
	}

	//player.Events();
}

void Init::Update()
{
	//player.Update();
}

void Init::Draw()
{
	SDL_RenderClear(renderer);
	//map.Draw();
	//player.Draw();
	SDL_RenderPresent(renderer);
}

void Init::Clean()
{
	//player.Clean();
	//map.Clean();
	window = nullptr;
	renderer = nullptr;
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
}
