#pragma once
#include <SDL.h>
#include <SDL_ttf.h>
#include <sstream>

class RenderText
{
	public:
		void Init();
		void LoadText(SDL_Rect f_TextRect, const char* f_ConstCharText, int f_IntText, bool ConstCharTextBool, bool IntTextBool);
		void Update();
		void Draw();
		void Clean();
	private:
		TTF_Font* CalibriFont = nullptr;
		SDL_Color TextColor;
		SDL_Surface* TextSurface = nullptr;
		SDL_Texture* TextTexture = nullptr;
		std::stringstream IntToStringStringStream;
		std::string ConvertedFromIntToString = " ";
		SDL_Rect TextRect;
};
