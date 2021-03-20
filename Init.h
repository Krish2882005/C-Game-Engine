#pragma once
#include <SDL.h>
#include <SDL_image.h>

class Init
{
	public:
		Init();
		~Init();
		void Init_SDL2();
		void Load();
		void Events();
		void Update();
		void Draw();
		void Clean();
		inline bool IsRunning() { return m_IsRunning; }
		static SDL_Renderer* Renderer;
		static SDL_Event Event;
	private:
		bool m_IsRunning = false;
		SDL_Window* Window = nullptr;
};
