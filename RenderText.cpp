#include <iostream>
#include <string>
#include "RenderText.h"
#include "Init.h"


void RenderText::Init()
{

}

void RenderText::Draw()
{

}

void RenderText::Clean()
{

}














































/*
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
*/
