#include "TileMap.h"

void TileMap::Init()
{

}

void TileMap::Load()
{

}

int TileMap::AddTileMap(TileMapCore core)
{
	for (int i = 0; i < core.Textures.size(); i++)
	{
		if (core.Textures[i] == nullptr)
		{
			//Error
		}
	}

	if (core.Textures.size() != core.TextureNumber.size())
	{
		//Error
		return -1;
	}

	TileMaps.push_back(core);

	TileMapNumber++;

	return TileMapNumber - 1;
}

bool TileMap::DeleteTileMap(int TileMapNumber)
{
	TileMaps[TileMapNumber].TileMapEnabled = false;
	TileMaps[TileMapNumber].Level.clear();
	TileMaps[TileMapNumber].TextureNumber.clear();
	TileMaps[TileMapNumber].Textures.clear();
	TileMaps[TileMapNumber].TextureSize = 0;
}

void TileMap::Update()
{
	
}

void TileMap::Draw()
{

}

void TileMap::Clean()
{

}
