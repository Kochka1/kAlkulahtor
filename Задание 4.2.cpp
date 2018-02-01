// Задание 4.2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>


int main()

{
	double a = -2, b = 2, c = -4, d = 4, h = 0.2;
	printf("%c\\%c", 'Y', 'X');
	for (double x = a; x <= b; x += h)
		printf("\t%8.2", x);
	printf("\n");
	for (double y = c; y <= d; y += h)
	{
		printf("%.2f", y);
		for (double x = a; x <= b; x += h)
		{
			double z = (x) * (y) * (x - y);
			printf("\%8.2f", z);
		}
		printf("\n");

	}
	printf("\n");
	getchar();


    return 0;
}

