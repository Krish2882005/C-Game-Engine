#include "Maths.h"

Vector2 Maths::AddVector2(Vector2 A, Vector2 B)
{
    Vector2 C;
    C.X = A.X + B.X;
    C.Y = A.Y + B.Y;
    return C;
}

Vector2 Maths::SubtractVector2(Vector2 A, Vector2 B)
{
    Vector2 C;
    C.X = A.X - B.X;
    C.Y = A.Y - B.Y;
    return C;
}

Vector2 Maths::MultiplyVector2(Vector2 A, Vector2 B)
{
    Vector2 C;
    C.X = A.X * B.X;
    C.Y = A.Y * B.Y;
    return C;
}

Vector2 Maths::DivideVector2(Vector2 A, Vector2 B)
{
    Vector2 C;
    C.X = A.X / B.X;
    C.Y = A.Y / B.Y;
    return C;
}
