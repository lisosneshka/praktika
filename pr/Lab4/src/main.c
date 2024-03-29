﻿#include "stdio.h"
#include "math.h"


void f(const double* x, double* result)
{
	*result = 1 / sqrt(*x + 2);
}

void writeArray(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		*(arr + i) = pow(-1, i) * i;
	}
}

void readArray(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}

	printf("\n");
}

void sort(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (*(arr + j) > *(arr + j + 1))
			{
				int tmp = *(arr + j);
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = tmp;
			}
		}
	}
}

int main()
{
	int size = 5;
	int arr[5];
	double w, v;
	const double *x;
	double *result;
	
	//scanf("%lf", &v);
	x=&w;
	result=&v;

	f(x, result);
	//printf("%lf\n", v);
	printf("%d\n", size);

	writeArray(&arr, size);

	readArray(&arr, size);

	sort(&arr, size);
	readArray(&arr, size);
	system("pause");
	return 0;
}
