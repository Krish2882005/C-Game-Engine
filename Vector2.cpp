//This Is A Beast Engine File Which Has The License Apache 2.0

#include "Vector2.h"
#include <math.h>

void Vector2::Normalize()
{
	M = (float) sqrt(X * X + Y * Y);

	if (M <= T)
	{
		M = 1;
	}

	X /= M;
	Y /= M;

	if (fabs(X) < T)
	{
		X = 0.0f;
	}

	if (fabs(Y) < T)
	{
		Y = 0.0f;
	}
}

float Vector2::Magnitude()
{
	return (float) sqrt(X * X + Y * Y);
}

void Vector2::Reverse()
{
	X = -X;
	Y = -Y;
}

Vector2& Vector2::operator+=(Vector2 vector2)
{
	X += vector2.X;
	Y += vector2.Y;

	return *this;
}

Vector2& Vector2::operator-=(Vector2 vector2)
{
	X -= vector2.X;
	Y -= vector2.Y;

	return *this;
}

Vector2& Vector2::operator*=(float Number)
{
	X *= Number;
	Y *= Number;

	return *this;
}

Vector2& Vector2::operator/=(float Number)
{
	X /= Number;
	Y /= Number;
	
	return *this;
}
