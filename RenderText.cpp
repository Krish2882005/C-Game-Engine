#include <iostream>
#include <string>
#include "RenderText.h"
#include "Init.h"
#include "Logger.h"


TTF_Font* CalibriFont = nullptr;
SDL_Colour TextColour;
SDL_Surface* TextSurface = nullptr;
SDL_Texture* TextTexture = nullptr;

int RenderText::Init()
{
	if (TTF_Init() != 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void RenderText::Load()
{
	CalibriFont = TTF_OpenFont("Fonts/Calibri.ttf", 82);
	TextColour.r = 255;
	TextColour.g = 255;
	TextColour.b = 255;
	TextColour.a = 255;
}

SDL_Texture* RenderText::LoadText(const char* Text, SDL_Rect TextRect)
{
	TextSurface = TTF_RenderText_Blended(CalibriFont, Text, TextColour);
	TextTexture = SDL_CreateTextureFromSurface(Init::Renderer, TextSurface);
	SDL_QueryTexture(TextTexture, nullptr, nullptr, &TextRect.w, &TextRect.h);
	SDL_FreeSurface(TextSurface);

	return TextTexture;
}

void RenderText::Draw(SDL_Texture* Texture, SDL_Rect TextRect)
{
	SDL_RenderCopy(Init::Renderer, Texture, 0, &TextRect);
}

void RenderText::Clean()
{
	TTF_CloseFont(CalibriFont);
	SDL_DestroyTexture(TextTexture);
	TTF_Quit();
}

