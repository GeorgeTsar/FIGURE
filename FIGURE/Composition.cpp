#include "Composition.h"
#include "Figure.h"
#include <iostream>
using namespace std;

Composition::Composition()
{
	count = 0;
	obj = nullptr;
}

void Composition::create_composition(int ct)
{
	count = ct;
	obj = new Figure[count];
	if (!obj) exit(0);

	int temp_cr, temp_ct;
	for (int i = 0; i < count; i++)
	{
		cout << "Set x\n";
		cin >> temp_cr;
		cout << "Set y\n";
		cin >> temp_ct;
		obj[i].create_figure(temp_cr, temp_ct);
	}
}

void Composition::show_composition()
{
	cout << "----------------------------\n\n";
	for (int i = 0; i < count; i++)
	{
		obj[i].show_figure();
	}
}

Composition::~Composition()
{
	if (obj != nullptr) delete[]obj;
}
