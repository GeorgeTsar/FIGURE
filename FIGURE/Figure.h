#pragma once
#include "Point.h"

class Figure
{
	Point* obj;
	int count;
	int color;
public:
	Figure();
	void create_figure(int cr, int ct);
	void show_figure();
	~Figure();
};

