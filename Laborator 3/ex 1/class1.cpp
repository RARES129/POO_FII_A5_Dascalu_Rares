#include "class1.h"
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

int clasa::Add(int a, int b)
{
	return (int)(a+b);
}

int clasa::Add(int a, int b, int c)
{
	return (int)(a+b+c);
}

int clasa::Add(double a, double b)
{
	return (int)(a+b);
}

int clasa::Add(double a, double b, double c)
{
	return (int)(a+b+c);
}

int clasa::Mul(int a, int b)
{
	return (int)(a*b);
}

int clasa::Mul(int a, int b, int c)
{
	return (int)(a*b*c);
}

int clasa::Mul(double a,double b)
{
	return (int)(a*b);
}

int clasa::Mul(double a, double b, double c)
{
	return (int)(a*b*c);
}

int clasa::Add(int count, ...)
{
	int Suma=0,valoare;
	va_list lista;
	va_start(lista, count);
	for (int i=0;i<count;i++)
	{
		valoare=va_arg(lista, int);
		Suma+=valoare;
	}
	va_end(lista);
	return Suma;
}

char* clasa::Add(const char* sir1, const char* sir2)
{
	if (sir1==nullptr or sir2==nullptr)
		return nullptr;
	char* nume;
	int sizetoalloc=strlen(sir1)+strlen(sir2)+1;
	nume=(char*)malloc(sizetoalloc);
	memset(nume,0,sizetoalloc);
	memcpy(nume,sir1,strlen(sir1));
	memcpy(nume+strlen(sir1),sir2,strlen(sir2));
	return nume;
}
