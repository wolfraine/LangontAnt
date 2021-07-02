#ifndef ENGINE_H
#define ENGINE_H

#include "cell.h"

class engine
{
private:
	//zmiana stanu
	void change_state(int x, int y);
protected:
	//ustawienie mr�wki na �rodku tablicy
	void init(int x, int y);
	// w i k do poprawy kompilacja od wersji 2011
	//posX i Y �rodek planszy
	int posX = 0;
	int posY = 0;
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
	//rysowanie tabelki
	void draw_tab();
	//virtual void view() = 0;
};
#endif

