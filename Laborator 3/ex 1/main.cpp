#include "class1.h"
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	clasa ob1;
	printf("suma: %d\n", ob1.Add(2, 5));
	printf("suma: %d\n", ob1.Add(3, 4, 5));
	printf("suma: %d\n", ob1.Add(4.4, 3.3));
	printf("suma: %d\n", ob1.Add(2.3, 7.3, 10.6));
	printf("produs: %d\n", ob1.Mul(2, 5));
	printf("produs: %d\n", ob1.Mul(3, 4, 5));
	printf("produs: %d\n", ob1.Mul(4.4, 3.3));
	printf("produs: %d\n", ob1.Mul(2.3, 7.3, 10.6));
	printf("suma va_list: %d\n", ob1.Add(6, 2, 15, 11, 23, 13));
	printf("concatenare: %s", ob1.Add("Dorelin", "Marcel"));
	return 0;
}
