#include "class1.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

clasa::clasa(int width, int height)
{
	this->n = height;
	this->m = width;
	this->matrix = (char**)(malloc(n * sizeof(char*)));
	for (int i = 0; i < this->n; i++)
		matrix[i] = (char*)(malloc(this->m * sizeof(char)));
}

void clasa::DrawCircle(int x, int y, int r, char ch)
{
	for (int i = 0; i < this->n; i++)
		for (int j = 0; j < this->m; j++)
			if (((i - x) * (i - x) + (j - y) * (j - y) >= r * (r - 1)) && ((i - x) * (i - x) + (j - y) * (j - y) <= r * (r + 1)))
				this->matrix[i][j] = ch;
			else
				this->matrix[i][j] = ' ';
}

void clasa::FillCircle(int x, int y, int r, char ch)
{
	for (int i = 0; i < this->n; i++)
		for (int j = 0; j < this->m; j++)
			if ((i - x) * (i - x) + (j - y) * (j - y) <= r * r)
				this->matrix[i][j] = ch;
			else
				this->matrix[i][j] = ' ';
}

void clasa::DrawRect(int left, int top, int right, int bottom, char ch)
{
	for (int i = top; i <= bottom; i++)
		for (int j = left; j <= right; j++)
			if (j == left || i == top || j == right || i == bottom)
				this->matrix[i][j] = ch;
}

void clasa::FillRect(int left, int top, int right, int bottom, char ch)
{
	for (int i = top; i <= bottom; i++)
		for (int j = left; j <= right; j++)
			this->matrix[i][j] = ch;
}


void clasa::SetPoint(int x, int y, char ch)
{
	this->matrix[x][y] = ch;
}

void clasa::DrawLine(int x0, int y0, int x1, int y1, char ch)
{
	int dx, dy, D, y, error, sx ,e2, sy;
	dx = abs(x1 - x0);
	sx = x0 < x1 ? 1 : -1;
	dy = -abs(y1 - y0);
	sy = y0 < y1 ? 1 : -1;
	error = dx + dy;
	while (true)
	{
		this->matrix[x0][y0] = ch;
		if (x0 == x1 && y0 == y1)
			break;
		e2 = 2 * error;
		if (e2 >= dy)
		{
			if (x0 == x1)
				break;
			error += dy;
			x0 += sx;
		}
		if (e2 <= dx)
		{
			if (y0 == y1)
				break;
			error += dx;
			y0 += sy;
		}

	}
}

void clasa::Print()
{
	for (int i = 0; i < this->n; i++)
	{
		for (int j = 0; j < this->m; j++)
			printf("%c", matrix[i][j]);

		printf("\n");
	}
}

void clasa::Clear()
{
	for (int i = 0; i < this->n; i++)
		for (int j = 0; j < this->m; j++)
			this->matrix[i][j] = ' ';
}
