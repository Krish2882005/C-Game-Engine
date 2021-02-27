#pragma once
#include <SDL.h>
#include <SDL_image.h>

class Init
{
	public:
		Init();
		~Init();
		void Load();
		void Events();
		void Update();
		void Draw();
		void Clean();
		inline bool IsRunning() { return m_IsRunning; }
		static SDL_Renderer* renderer;
		static SDL_Event event;
	private:
		bool m_IsRunning = false;
		SDL_Window* window = nullptr;
};
