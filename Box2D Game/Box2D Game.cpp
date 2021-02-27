//God
#include "Init.h"

int main(int argc, char** argv)
{
	Init init;

	init.Load();

	while (init.IsRunning())
	{
		init.Events();
		init.Update();
		init.Draw();
	}

	init.Clean();

	return 0;
}
