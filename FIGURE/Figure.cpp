#include "Figure.h"
#include <iostream>
using namespace std;

Figure::Figure()
{
	count = color = 0;
	obj = nullptr;
}

void Figure::create_figure(int cr, int ct)
{
	if (ct < 3) exit(0);
	count = ct;
	color = cr;
	obj = new Point[count];
	if (!obj) exit(0);

	int temp_x, temp_y;
	for (int i = 0; i < count; i++) 
	{
		cout << "Set x\n";
		cin >> temp_x;
		cout << "Set y\n";
		cin >> temp_y;
		obj[i].set_point(temp_x, temp_y);
	}
}

void Figure::show_figure()
{
	cout << "----------------------------\n\n";
	cout << "Color" << color << "\n\nPoints - " << count << "\n\n";
	for (int i = 0; i < count; i++) 
	{
		obj[i].show();
	}
}

Figure::~Figure()
{
	if (obj != nullptr) delete[]obj;
}
