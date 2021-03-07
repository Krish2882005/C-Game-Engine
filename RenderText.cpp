#include <iostream>
#include <string>
#include "RenderText.h"
#include "Init.h"

void RenderText::Init()
{
	if (TTF_Init() != 0)
	{
		std::cout << "Error: SDL_ttf Cannot Init" << std::endl;
		return;
	}
	else
	{
		CalibriFont = TTF_OpenFont("Fonts/Calibri.ttf", 20);
		TextColor = { 255, 255, 255 };
	}
}

void RenderText::LoadText(SDL_Rect f_TextRect, const char* f_ConstCharText, int f_IntText, bool ConstCharTextBool, bool IntTextBool)
{
	TextRect = f_TextRect;

	//SDL_QueryTexture(TextTexture, 0, 0, &TextRect.w, &TextRect.h);

	if (ConstCharTextBool)
	{
		TextSurface = TTF_RenderText_Solid(CalibriFont, f_ConstCharText, TextColor);
		TextTexture = SDL_CreateTextureFromSurface(Init::Renderer, TextSurface);
		SDL_FreeSurface(TextSurface);
	}
	else
	{
		IntToStringStringStream << f_IntText;
		//IntToStringStringStream >> ConvertedFromIntToString;

		ConvertedFromIntToString = std::to_string(f_IntText);

		TextSurface = TTF_RenderText_Solid(CalibriFont, ConvertedFromIntToString.c_str(), TextColor);
		TextTexture = SDL_CreateTextureFromSurface(Init::Renderer, TextSurface);
		SDL_FreeSurface(TextSurface);
	}
}

void RenderText::Update()
{

}

void RenderText::Draw()
{
	SDL_RenderCopy(Init::Renderer, TextTexture, 0, &TextRect);
}

void RenderText::Clean()
{
	SDL_DestroyTexture(TextTexture);
}
