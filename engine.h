#ifndef ENGINE_H
#define ENGINE_H

#include "cell.h"

class engine
{
private:
	//funkcja sprawdza czy jest s�siad
	//void moveAnt(int posX, int posY);
protected:
	// w i k do poprawy kompilacja od wersji 2011
	//posX i Y �rodek planszy
	int posX = 10;
	int posY = 10;
	//kierunek  1->prawo 2->lewo 3->g�ra 4->d�
	int direction = 1;
	//liczba kolumn
	int height = 22;
	//liczba wierszy
	int width = 22;
	//tablica glowna
	cell** main_tab;

public:
	// w i k inicializowane z pami�ci
	engine();
	//podanie nowych w i k
	engine(int ww, int hh);
	//konstruktor kopiuj�cy
	engine(const engine& eng);
	const engine& operator=(const engine& engin);
	//zwolnienie z pami�ci
	virtual ~engine();
	//analiza stanu
	void analyze(int x, int y);
	//ustawienie mr�wki na �rodku tablicy
	void init(int posX, int posY);
	//rysowanie tabelki
	void draw_tab();
	//virtual void view() = 0;
	void change_state(int x, int y);
};
#endif

