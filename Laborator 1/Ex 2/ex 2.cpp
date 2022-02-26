#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
	int numar=0, suma=0;
	FILE* fp;
	if (fopen_s(&fp, "in.txt", "r") != 0)
	{
		printf("Eroare. Nu am putut deschide fisierul\n");
	}
	else
	{
		printf("Am deschis fisierul cu success!\n");
		char myString[200];
		while (fgets(myString, 20, fp))
		{
			numar = 0;
			myString[strlen(myString) - 1] = '\0';
			for (int i = 0; i < strlen(myString) ; i++)
			{
				numar = numar * 10 + (myString[i] - '0');
			}
			suma = suma + numar;

		}
	}
	printf("suma este: %d \n",suma);
	return 0;
}
