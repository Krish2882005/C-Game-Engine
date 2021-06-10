#pragma once
#include <SDL.h>
#include <SDL_ttf.h>

class RenderText
{
	public:
		static int Init();
		static void Load();
		static SDL_Texture* CreateNewTexture(const char* Text, SDL_Rect TextRect);
		static void Draw(SDL_Texture* Texture, SDL_Rect TextRect);
		static void Clean();
	private:
		
};
