#include "class1.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>


char* class1::SGnume(int x)
{
	if (x == 1)
	{
		scanf_s("%s", name,sizeof(name));
		return 0;
	}
	else
		return name;

}

int class1::SGengleza(int x)
{
	if (x == 1)
	{
		scanf_s("%d", &engleza);
		return 0;
	}
	else
		return engleza;
}

int class1::SGistorie(int x)
{
	if (x == 1)
	{
		scanf_s("%d", &istorie);
		return 0;
	}
	else
		return istorie;
}

int class1::SGmatematica(int x)
{
	if (x == 1)
	{
		scanf_s("%d", &matematica);
		return 0;
	}
	else
		return matematica;

}

double class1::Gmedie(int x)
{
	if (x == 1)
	{
		medie =(double) (SGmatematica(0) + SGengleza(0) + SGistorie(0)) / 3;
		return 0;
	}
	else
		return medie;
}
