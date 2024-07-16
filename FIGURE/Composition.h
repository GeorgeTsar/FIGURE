#pragma once
#include "Figure.h"

class Composition
{
	Figure* obj;
	int count;
public:
	Composition();
	//void set_figure(Figure f);
	void create_composition(int ct);
	void show_composition();
	~Composition();
};

