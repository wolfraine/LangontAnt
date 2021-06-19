#include "game.h"*
#include <iostream>
#include "windows.h" 


game::game() :engine()
{
}

game::game(int ww, int hh) : engine(ww, hh)
{
}

game::game(const game& gamee)
{
}

game::~game()
{
}

void game::play()
{
	init(posX, posY);
	//pêtla automatyczna
	//while (true)
	//{
	//	draw_tab();
	//	analyze(posX, posY);
	//	Sleep(800);
	//}

	//krok z enterem
	char sign ;
	sign = getchar();
	while (sign == '\n')
	{
		draw_tab();
		analyze(posX, posY);
		sign = getchar();
	}
}

void game::view()
{

}
