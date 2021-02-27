#include "CollisionDetection.h"
#include <iostream>

/*long double PlayerxPos = 0;
long double PlayeryPos = 0;

std::vector<long double> MapXPosition;
std::vector<long double> MapYPosition;

void CollisionDetection::GetMapPosition(std::vector<long double> MapXposition, std::vector<long double> MapYposition)
{
	MapXPosition = MapXposition;
	MapYPosition = MapYposition;
}

bool CollisionDetection::DetectCollision()
{
	PlayerxPos = Vector2::GetPlayerXPosition();
	PlayeryPos = Vector2::GetPlayerYPosition();

	if (MapXPosition.size() > MapYPosition.size())
	{
		for (int i = 0; i < MapXPosition.size(); i++)
		{
			if (PlayerxPos < MapXPosition[i] + 64 &&
				PlayerxPos + 28 > MapXPosition[i] &&
				PlayeryPos < MapYPosition[i] + 64 &&
				PlayeryPos + 38 > MapYPosition[i])
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	else if (MapXPosition.size() < MapYPosition.size())
	{
		for (int i = 0; i < MapYPosition.size(); i++)
		{
			if (PlayerxPos < MapXPosition[i] + 64 &&
				PlayerxPos + 28 > MapXPosition[i] &&
				PlayeryPos < MapYPosition[i] + 64 &&
				PlayeryPos + 38 > MapYPosition[i])
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}

	return false;
}
*/