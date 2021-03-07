#include <iostream>
#include "RenderText.h"
#include "Init.h"

void RenderText::Init()
{
	if (TTF_Init() != 0)
	{
		std::cout << "Error: SDL_ttf Cannot Init" << std::endl;
		return;
	}
}

void RenderText::Load()
{
	CalibriFont = TTF_OpenFont("Fonts/Calibri.ttf", 20);
	TextColor = { 255, 255, 255 };
	TextSurface = TTF_RenderText_Solid(CalibriFont, "Hi", TextColor);
	TextTexture = SDL_CreateTextureFromSurface(Init::Renderer, TextSurface);
	SDL_FreeSurface(TextSurface);
}

void RenderText::Update()
{

}

void RenderText::Draw()
{
	SDL_RenderCopy(Init::Renderer, TextTexture, 0, 0);
}

void RenderText::ChangeText()
{

}

void RenderText::Clean()
{
	SDL_DestroyTexture(TextTexture);
}
