#pragma once
class Sort
{
    int* vector;
    int elemente;
public:
    void InsertSort(bool ok);
    void QuickSort();
    void BubbleSort();
    void Print();
    int  GetElementsCount();
    int  GetElementFromIndex(int index);
    Sort(int n, int min, int max);
    Sort();
    Sort(int* a, int n);
    Sort(int count, ...);
    Sort(char* c);
};

