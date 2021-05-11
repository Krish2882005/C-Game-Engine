#pragma once

class Vector2
{
	public:
		int X = 0;
		int Y = 0;

		void Normalize();
		float Magnitude();
		void Reverse();

		Vector2& operator+=(Vector2 vector2);
		Vector2& operator-=(Vector2 vector2);
		Vector2& operator*=(float Number);
		Vector2& operator/=(float Number);
	private:
		float M = 0.0f;
		float const T = 0.0001f;
};