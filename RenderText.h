#pragma once
#include <SDL_ttf.h>

class RenderText
{
	public:
		void Init();
		void Load();
		void Update();
		void Draw();
		void ChangeText();
		void Clean();
	private:
		TTF_Font* CalibriFont = nullptr;
		SDL_Color TextColor;
		SDL_Surface* TextSurface = nullptr;
		SDL_Texture* TextTexture = nullptr;
};
