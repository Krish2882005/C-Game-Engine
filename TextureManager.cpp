// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

#include "TextureManager.h"
#include <iostream>

SDL_Surface* Surface = nullptr;
SDL_Texture* Texture = nullptr;

SDL_Texture* TextureManager::Load(const char* File)
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
		Surface = nullptr;
		std::cout << "Texture Is A Nullptr Error: " << SDL_GetError() << std::endl;
		return nullptr;
	}

	Surface = nullptr;

	return Texture;
}

void TextureManager::Draw(SDL_Texture* Texture, SDL_Rect* SrcRect, SDL_Rect* DstRect, SDL_RendererFlip Flip)
{
	SDL_RenderCopyEx(Init::Renderer, Texture, SrcRect, DstRect, 0, nullptr, Flip);
}
