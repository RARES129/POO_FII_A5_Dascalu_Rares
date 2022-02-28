#include "FirstClass.h"
#include <string.h>
#include <stdio.h>

void FirstClass::Init()
{
	count = 0;
}

bool FirstClass::Add(int x)
{
	if (count < 10)
	{
		numbers[count] = x;
		count++;
		return true;
	}
	else return false;
}

void FirstClass::Sort()
{
	bool ok = 0;
	while (ok == 0)
	{
		ok = 1;
		for (int i = 0; i < count-1; i++)
		{
			if (numbers[i] > numbers[i + 1])
			{
				int aux;
				aux = numbers[i+1];
				numbers[i + 1] = numbers[i];
				numbers[i] = aux;
				ok = 0;
			}
		}
	}
}

void FirstClass::Print()
{
	for (int i = 0; i < count; i++)
		printf("Vector: %d\n", numbers[i]);
}