// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

//This Is A Beast Engine File Which Has The License Apache 2.0

#include "TextureManager.h"
#include <iostream>

SDL_Surface* Surface = nullptr;
SDL_Texture* Texture = nullptr;

int Renderer2D::Init()
{
	if (SDL_Init(IMG_INIT_PNG) != 0)
	{
		return 1;
	}

	return 0;
}

SDL_Texture* Renderer2D::Load(const char* File)
{
	Surface = IMG_Load(File);
	if (Surface == nullptr)
	{
		std::cout << "Surface Is A Nullptr Error: " << SDL_GetError() << std::endl;
		return nullptr;
	}
	Texture = SDL_CreateTextureFromSurface(Init::Renderer, Surface);
	if (Texture == nullptr)
	{
		std::cout << "Texture Is A Nullptr Error: " << SDL_GetError() << std::endl;
		return nullptr;
	}

	SDL_FreeSurface(Surface);

	return Texture;
}

void Renderer2D::Draw(SDL_Texture* Texture, SDL_Rect* SrcRect, SDL_Rect* DstRect, SDL_RendererFlip Flip)
{
	SDL_RenderCopyEx(Init::Renderer, Texture, SrcRect, DstRect, 0, nullptr, Flip);
}
