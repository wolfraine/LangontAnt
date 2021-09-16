#include "engine.h"
#include <iostream>

engine::engine()
{
	main_tab = new cell * [height];
	for (int i = 0; i < height; i++)
	{
		main_tab[i] = new cell[width];
	}
}

engine::engine(int ww, int hh)
{
	if (hh == 0)
	{
		hh = ww;
	}
	height = hh;
	width = ww;
	main_tab = new cell * [height];
	for (int i = 0; i < height; i++)
	{
		main_tab[i] = new cell[width];
	}
}

void engine::draw_tab()
{
	system("cls");
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (i == posX && j == posY) {
				std::cout << " A ";
			}
			else if (main_tab[i][j].state == true)
				std::cout << " x ";
			else
				std::cout << " - ";
		}
		std::cout << std::endl;
	}
}

void engine::change_state(int x, int y)
{
	if (main_tab[x][y].state == false) {
		main_tab[x][y].state = true;
	}
	else {
		main_tab[x][y].state = false;
	}
}

engine::~engine()
{
	if (main_tab)
	{
		for (int i = 0; i < height; i++)
		{
			delete[] main_tab[i];
		}
		delete main_tab;
	}
}

void engine::analyze(int x, int y)
{
	if (main_tab[x][y].state == false) {
		if (direction == 1)
			direction = 4;
		
		else if (direction == 2)
			direction = 3;
		
		else if (direction == 3)
			direction = 1;
		
		else if (direction == 4)
			direction = 2;
	}
	else
	{
		
		if (direction == 1)
			direction = 3;
		
		else if (direction == 2)
			direction = 4;
		
		else if (direction == 3)
			direction = 2;
		
		else if (direction == 4)
			direction = 1;
	}
	change_state(x, y);
	
	if (direction == 1)
		posX = x - 1;
	
	if (direction == 2)
		posX = x + 1;
	
	if (direction == 3)
		posY = y + 1;
	
	if (direction == 4)
		posY = y - 1;

	if (posX == 0 || posY == 0 || posX == height || posY == width)
	{
	if (direction == 1)
	{
		posX += 2;
		direction = 2;
	}
	else if (direction == 2)
	{
		posX -= 2;
		direction = 1;
	}
	else if (direction == 3)
	{
		posY -= 2;
		direction = 4;
	}
	else if (direction == 4)
	{
		posY += 2;
		direction = 3;
	}
	}
}

void engine::init(int x, int y)
{
	posX = height / 2;
	posY = width / 2;
}


