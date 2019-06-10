#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <locale.h>

bool isInArea(double, double);
double f(double);

int main()
{
	setlocale(LC_ALL, "RUS");

	int k;
	double x, y;

	while(true)
	{
		printf("1) Первое задание\n");
		printf("2) Второе задание\n");
		scanf("%d", &k);
		
		switch(k)
		{
			case 1:
			{
				printf("Введите координаты x и y:\n");
				scanf("%lf", &x);
				scanf("%lf", &y);
				printf("Результат: %o\n\n", isInArea(x, y));
				break;
			}
			case 2:
			{
				printf("Введите x: ");
				scanf("%lf", &x);
				printf("Результат: %f\n\n", f(x));
				break;
			}
			default:
				return 1;
		}
	}

	return 0;
}

bool isInArea(double x, double y)
{
	if (((x >= -1) && (x <= 0)) && ((y >= -1) && (y <= 1)))
		return true;
	else if ((pow(x, 2) + pow(y, 2)) <= 1)
		return true;

	return false;
}

double f(double x)
{
	if (x >= -3.5)
		return 4 * pow(x, 2) + 2 * x - 19;
	else
		return  -(2 * x) / (-4 * x + 1);
}
