#define _CRT_SECURE_NO_WARNINGS
#include "sortare.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	bool ok = false;
	Sort ob1(15, 23, 32);
	ob1.QuickSort();
	ob1.Print();
	Sort ob2;
	ob2.QuickSort();
	ob2.Print();
	int* a;
	a = (int*)(malloc(5 * sizeof(int)));
	for (int i = 4; i >= 0; i--)
		a[i] = i;
	Sort ob3(a,5);
	ob3.BubbleSort();
	ob3.Print();
	Sort ob4(4,2,3,5,9,8,4,1,6);
	ob4.QuickSort();
	ob4.Print();
	char c[] = "13,24,34,12";
	Sort ob5(c);
	ob5.InsertSort(ok);
	ob5.Print();
	return 0;
}
