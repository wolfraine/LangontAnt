#ifndef CELL_H
#define CELL_H

class cell
{
private:
    bool state;

public:
    cell();
    cell(const cell& cel);   //nie skompiluje si� poni�ej standartu 2011 (umie�ci� w dokumentacji)
    cell& operator=(const cell& cell1);
    virtual ~cell();

    friend class engine;
};
#endif

