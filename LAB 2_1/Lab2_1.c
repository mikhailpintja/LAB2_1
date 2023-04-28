// Lab2_1.c: Обчислення арифметичних задач з форматованим виводом результату//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<locale.h>
#include <conio.h>
#include <math.h>

int a, b, rez1, rez2, rez3;

int main()
{
	setlocale(LC_CTYPE, "ukr");
	printf("\n Введiть два цiлих числа: \n");
	printf("\n \t введiть число a=");
	scanf("%d", &a);
	printf("\n \t Введiть вiдмiнне вiд 0 число b=");
	scanf("%d", &b);

	rez1 = a % b;
	rez2 = b - a;
	//rez3 = (a + b)*(a + b);
	rez3 = pow((a + b), 2);

	printf("\n \n ОРИМАНИЙ РЕЗУЛЬТАТ:");
	printf("\n \t Залишок вiд дiлення %d / %d = %d", a, b, rez1);
	printf("\n \t Рiзниця %d - %d = %d", b, a, rez2);
	printf("\n \t Сума чисел в квадратi (%d + %d)^2 = %d", a, b, rez3);
	int getch(); getch();

	return 0;
}
