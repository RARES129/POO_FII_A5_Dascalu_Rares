#include "class1.h"
#include <stdio.h>

int main()
{
	clasa C(20, 20);

	C.Clear();
	C.DrawCircle(10, 10, 4, 'O');
	C.Print();

	C.Clear();
	C.FillCircle(10, 10, 4, 'O');
	C.Print();

	C.Clear();
	C.DrawRect(2, 2, 15, 8, 'O');
	C.Print();

	C.Clear();
	C.FillRect(2, 2, 15, 4, 'O');
	C.Print();

	C.Clear();
	C.SetPoint(2, 2, 'O');
	C.Print();

	C.Clear();
	C.DrawLine(2, 2, 12, 9, 'O');
	C.Print();
	return 0;
}
