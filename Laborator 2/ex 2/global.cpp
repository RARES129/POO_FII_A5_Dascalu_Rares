#include "global.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
int comparareMatematica(class1* f1, class1* f2)
{
	if (f1->SGmatematica(0) < f2->SGmatematica(0))
		return -1;
	if (f1->SGmatematica(0) == f2->SGmatematica(0))
		return 0;
	if (f1->SGmatematica(0) > f2->SGmatematica(0))
		return 1;
}

int comparareEngleza(class1* f1, class1* f2)
{
	if (f1->SGengleza(0) < f2->SGengleza(0))
		return -1;
	if (f1->SGengleza(0) == f2->SGengleza(0))
		return 0;
	if (f1->SGengleza(0) > f2->SGengleza(0))
		return 1;
}

int comparareIstorie(class1* f1, class1* f2)
{
	if (f1->SGistorie(0) < f2->SGistorie(0))
		return -1;
	if (f1->SGistorie(0) == f2->SGistorie(0))
		return 0;
	if (f1->SGistorie(0) > f2->SGistorie(0))
		return 1;
}

int comparareMedie(class1* f1, class1* f2)
{
	if (f1->Gmedie(0) < f2->Gmedie(0))
		return -1;
	if (f1->Gmedie(0) == f2->Gmedie(0))
		return 0;
	if (f1->Gmedie(0) > f2->Gmedie(0))
		return 1;
}

int comparareNume(class1* f1, class1* f2)
{
	if (strcmp(f1->SGnume(0), f2->SGnume(0)) < 0)
		return -1;
	if (strcmp(f1->SGnume(0), f2->SGnume(0)) == 0)
		return 0;
	if (strcmp(f1->SGnume(0), f2->SGnume(0)) > 0)
		return 1;
}