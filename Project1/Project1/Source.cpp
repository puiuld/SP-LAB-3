#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	/*setlocale(LC_ALL, "Russian_Russia.1251");
	double r;  //17.1
	double PI = 3.14;
	double S;
	printf("Enter r: ");
	scanf_s("%lf", &r);
	printf("S = %lf", S = 4 * PI * pow(r, 2));
	return 0;*/


	/*double number, sum;  //17.2
	char symbol;
	printf("Enter number: ");
	scanf_s("%lf", &number);
	printf("Enter symbol: ");
	scanf_s(" %c", &symbol);
	sum = (number + (unsigned int)symbol) / 2;
	printf("%f\n", sum);
	return 0;*/

	/*double PI = 3.14;  //1.1
	double r;
	double C;
	printf("Enter r: ");
	scanf_s("%lf", &r);
	printf("C = %lf", C = 2 * PI * r);
	return 0;*/

	/*int number;  //1.2
	char symbol;
	printf("Enter number: ");
	scanf_s("%d", &number);
	printf("Enter symbol: ");
	scanf_s(" %c", &symbol);
	int char_code = (unsigned int)symbol;
	int remainder = (unsigned)char_code % number;
	printf("Remainder at char_code: %d\n", remainder);*/

	/*double a, b, h, S;     //6.1
	printf("Enter first base: ");
	scanf_s("%lf", &a);
	printf("Enter first base: ");
	scanf_s("%lf", &b);
	printf("Enter height: ");
	scanf_s("%lf", &h);
	S = ((a + b) / 2) * h;
	printf("%1.lf\n", S);
	return 0;*/


	/*double number;  //6.2
	char symbol;
	printf("Enter number: ");
	scanf_s("%lf", &number);
	printf("Enter symbol: ");
	scanf_s(" %c", &symbol);
	int char_code = (int)symbol;
	int quot = (int)(char_code / number);
	if (quot % 2 != 0)
	{
		printf("Not even-number");
	}
	else
	{
		printf("Even-number");
	}*/
}