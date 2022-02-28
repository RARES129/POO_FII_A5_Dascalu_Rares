#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "FirstClass.h"
using namespace std;

int main()
{
	FirstClass f1;
	f1.Init();
	f1.Add(2);
	f1.Add(11);
	f1.Add(24);
	f1.Add(1);
	f1.Add(5);
	f1.Add(9);
	f1.Add(0);
	f1.Add(14);
	f1.Add(14);
	f1.Add(29);
	f1.Sort();
	f1.Print();
	return 0;
}