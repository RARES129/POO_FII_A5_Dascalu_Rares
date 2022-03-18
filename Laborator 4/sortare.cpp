#define _CRT_SECURE_NO_WARNINGS
#include "sortare.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdarg.h>
#include <string.h>

int  Sort::GetElementsCount()
{
	return this->elemente;
}

int  Sort::GetElementFromIndex(int index)
{
	return this->vector[index];
}

void sortare(int* v, int st, int dr)
{
	if (st < dr)
	{
		//pivotul este inițial v[st]
		int m = (st + dr) / 2;
		int aux = v[st];
		v[st] = v[m];
		v[m] = aux;
		int i = st, j = dr, d = 0;
		while (i < j)
		{
			if (v[i] > v[j])
			{
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
				d = 1 - d;
			}
			i += d;
			j -= 1 - d;
		}
		sortare(v, st, i - 1);
		sortare(v, i + 1, dr);
	}
}
void Sort::InsertSort(bool ok)
{
	if (ok == true)
	{
		for (int i = 1; i < this->elemente; i++)
		{
			int x = this->vector[i];
			int p = i - 1;
			while (p >= 0 && this->vector[p] > x)
				this->vector[p + 1] = this->vector[p], p--;
			this->vector[p + 1] = x;
		}
	}
	else
	{
		for (int i = 1; i < this->elemente; i++)
		{
			int x = this->vector[i];
			int p = i - 1;
			while (p >= 0 && this->vector[p] < x)
				this->vector[p + 1] = this->vector[p], p--;
			this->vector[p + 1] = x;
		}
	}
}

void Sort::BubbleSort()
{
	bool sortat=false;
	do
	{
		sortat = true;
		for (int i = 0; i < this->elemente - 1; i++)
			if (this->vector[i] > this->vector[i + 1])
			{
				int aux = this->vector[i];
				this->vector[i] = this->vector[i + 1];
				this->vector[i + 1] = aux;
				sortat = false;
			}
	} while (!sortat);
}

void Sort::QuickSort()
{
	sortare(this->vector, 0, this->elemente - 1);
}

void Sort::Print()
{
	for (int i = 0; i < this->elemente; i++)
		printf("%d ", this->vector[i]);
	printf("\n");
}


Sort::Sort(int n, int min, int max)
{
	this->elemente = n;
	this->vector= (int*)(malloc(this->elemente * sizeof(int)));

	srand(time(NULL));

	for (int i = 0; i < this->elemente; i++)
	{
		this->vector[i] = min + rand() % (min - max + 1);
	}
}

Sort::Sort() : vector(new int[6]{ 1, 15, 3, 9, 2, 6 }) {
	this->elemente = 6;
}

Sort::Sort(int* a, int n)
{
	this->elemente = n;
	this->vector = a;
}

Sort::Sort(int count, ...)
{
	this->elemente = count;
	this->vector = (int*)(malloc(this->elemente * sizeof(int)));
	va_list vl;
	va_start(vl, count);
	for (int i = 0; i < count; i++)
	{
		this->vector[i] = va_arg(vl, int);
	}
	va_end(vl);
}

Sort::Sort(char* c)
{
	this->vector = (int*)(malloc(1 * sizeof(int)));
	int elem=0, k=0;
	char* p;
	p = strtok(c, ",");
	while (p)
	{
		elem++;
		vector = (int*)(realloc(vector, elem * sizeof(int)));

		int numar = 0, cnt=1;
		for (int i = 0; i < strlen(p);i++)
		{
			int cifra = p[i] - '0';
			numar = numar * cnt + cifra;
			cnt *= 10;
		}
		this->vector[k] = numar;
		k++;
		p = strtok(NULL, ",");
	}
	this->elemente = elem;
}
