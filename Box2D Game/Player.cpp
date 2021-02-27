#include "Player.h"
#include "InputHandling.h"
#include "TextureManager.h"
#include "Vector2.h"
#include "CollisionDetection.h"
#include <iostream>

/*constexpr const char* PlayerGoingUpFile = "C:/Users/ganat/source/repos/Box2D Game/Assets/Player/Player_Idle_Up.png";

InputHandling inputhandling;

void Player::Init()
{
	PlayerSrcRect.x = 0;
	PlayerSrcRect.y = 0;
	PlayerSrcRect.w = 14;
	PlayerSrcRect.h = 19;

	PlayerDstRect.x = 0;
	PlayerDstRect.y = 0;
	PlayerDstRect.w = 28;
	PlayerDstRect.h = 38;
}

void Player::Load()
{
	Player_GoingUpTexture = TextureManager::Load(PlayerGoingUpFile);
}

void Player::Events()
{
	inputhandling.Update();
}

void Player::Update()
{
	oldXPos = XPos;
	oldYPos = YPos;

	if (inputhandling.Up)
	{
		YPos -= PlayerSpeed;
	}
	else if (inputhandling.Down)
	{
		YPos += PlayerSpeed;
	}

	Vector2::SetPosition(XPos, YPos);

	if (CollisionDetection::DetectCollision())
	{
		YPos = oldYPos;
	}

	if (inputhandling.Right)
	{
		XPos += PlayerSpeed;
	}
	else if (inputhandling.Left)
	{
		XPos -= PlayerSpeed;
	}

	Vector2::SetPosition(XPos, YPos);

	if (CollisionDetection::DetectCollision())
	{
		XPos = oldXPos;
	}

	PlayerDstRect.x = XPos;
	PlayerDstRect.y = YPos;
}

void Player::Draw()
{
	TextureManager::Draw(Player_GoingUpTexture, &PlayerSrcRect, &PlayerDstRect, SDL_FLIP_NONE);
}

void Player::Clean()
{
	SDL_DestroyTexture(Player_GoingUpTexture);
}
*/