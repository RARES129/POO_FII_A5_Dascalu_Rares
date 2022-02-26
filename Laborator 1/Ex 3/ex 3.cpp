
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void sortare(char cuv[20][20], int nr)
{
	char aux[20];
	bool ok = 0;
	while (ok == 0)
	{
		ok = 1;
		for (int i=0; i < nr - 1; i++)
			if (strlen(cuv[i]) < strlen(cuv[i + 1]) )
			{
				strcpy_s(aux, cuv[i]);
				strcpy_s(cuv[i], cuv[i + 1]);
				strcpy_s(cuv[i + 1], aux);
				ok = 0;
			}
			else if (strcmp(cuv[i], cuv[i + 1]) > 0 && strlen(cuv[i]) == strlen(cuv[i + 1]))
			{
				strcpy_s(aux, cuv[i]);
				strcpy_s(cuv[i], cuv[i + 1]);
				strcpy_s(cuv[i + 1], aux);
				ok = 0;
			}
	}
}

int main()
{
	char cuvinte[20][20];
	printf("Introduceti numarul de cuvinte din propozitie: ");
	int numarCuvinte;
	scanf_s("%d", &numarCuvinte, 4);
	printf("Introduceti o propozitie: ");
	char cuvant[20];
	//scanf("%19s", cuvant);
	int counter = 0;

	while (scanf_s("%19s", cuvant, 19))
	{
		strcpy_s(cuvinte[counter], cuvant); 
		counter += 1;
		if (counter >= numarCuvinte)
			break;
	}
	sortare(cuvinte, counter);
	for (int i = 0; i < counter; i++)
		printf("Cuvant: %s \n", cuvinte[i]);
	return 0;
}