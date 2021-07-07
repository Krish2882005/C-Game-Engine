#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <array>
#include <vector>

struct TileMapCore
{
	//Number Of Textures Should Be Equal To Number Of TextureNumbers
	std::vector<SDL_Texture*> Textures;
	std::vector<int> TextureNumber;

	//The Map
	std::vector<int> Level;

	//Distance Between Tiles And Tile Size
	int TextureSize;

	bool TileMapEnabled = true;
};

class TileMap
{
public:
	void Init();
	void Load();
	int AddTileMap(TileMapCore core);
	bool DeleteTileMap(int tileMapNumber);
	void Update();
	void Draw();
	void Clean();
private:
	std::vector<TileMapCore> TileMaps;
	
	int TileMapNumber = 0;
};

