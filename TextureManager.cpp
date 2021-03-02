#include "TextureManager.h"
#include <iostream>

<<<<<<< HEAD
/*SDL_Surface* Surface = nullptr;
=======
SDL_Surface* Surface = nullptr;
>>>>>>> d9c465160a0f43c605aa49c8ccb142c92d9f896c
SDL_Texture* Texture = nullptr;

SDL_Texture* TextureManager::Load(const char* File)
{
	Surface = IMG_Load(File);
	if (Surface == nullptr)
	{
		std::cout << "Surface Is A Nullptr Error: " << SDL_GetError() << std::endl;
		return nullptr;
	}
<<<<<<< HEAD
	Texture = SDL_CreateTextureFromSurface(Init::renderer, Surface);
=======
	Texture = SDL_CreateTextureFromSurface(Init::Renderer, Surface);
>>>>>>> d9c465160a0f43c605aa49c8ccb142c92d9f896c
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
<<<<<<< HEAD
	SDL_RenderCopyEx(Init::renderer, Texture, SrcRect, DstRect, 0, nullptr, Flip);
}
*/
=======
	SDL_RenderCopyEx(Init::Renderer, Texture, SrcRect, DstRect, 0, nullptr, Flip);
}
>>>>>>> d9c465160a0f43c605aa49c8ccb142c92d9f896c
