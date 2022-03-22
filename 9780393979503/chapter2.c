#include <stdio.h>

/*!
**  -Wall -Werror -Wextra -pedantic -pedantic-errors -std=iso9899:1999
**  -Wshadow -Wconversion -Wstrict-prototypes
*/

int ex2_1(void)
{
	printf("%8c\n",    '*');
	printf("%7c\n",    '*');
	printf("%6c\n",    '*');
	printf("%1c%4c\n", '*', '*');
	printf("%2c%2c\n", '*', '*');
	printf("%3c\n\n",    '*');
	return 0;
}

float ex2_2(float radius)
{
	return 4.0f / 3.0f * 3.14159f * (radius * radius * radius);

	/*
	 *  4 / 3 * 3.14159f * (radius * radius * radius);
	 *  ex2_2(10) =  3141.590088 // This is wrong.
	 *
	 *  4.0f / 3.0f * 3.14159f * (radius * radius * radius);
	 *  ex2_2(10) =  4188.787109
	 */
}

float ex2_3(void)
{
	float radius;
	printf("Enter radius: ");
	scanf("%f", &radius);

	return 4.0f / 3.0f * 3.14159f * (radius * radius * radius);
}

int ex2_4(void)
{
	float amount;
	float amount_tax;
	printf("Enter amount: ");
	scanf("%f", &amount);

	amount_tax = amount/100 * 105;
	printf("With tax added: %.2f\n\n", amount_tax);
	return 0;
}

int ex2_5(void)
{
	double x;
	double polynomial;

	printf("Enter a value: ");
	scanf("%lf", &x);

	polynomial  = 3 * x*x*x*x*x;
	polynomial += 2 * x*x*x*x;
	polynomial -= 5 * x*x*x;
	polynomial -= 1 * x*x;
	polynomial -= 6;

	printf("Polynomial: %lf\n\n", polynomial);
	return 0;
}

int ex2_6(void)
{
	double x;
	double polynomial;

	printf("Enter a value: ");
	scanf("%lf", &x);

	polynomial = ((((3 * x + 2) * x - 5) * x - 1) * x + 7 ) * x - 6;

	printf("Polynomial: %lf\n\n", polynomial);
	return 0;
}

int ex2_7(void)
{
	int bill_20;
	int bill_10;
	int bill_5;
	int value;

	printf("Enter a dollar amount: ");
	scanf("%d", &value);
	printf("\n");

	bill_20 = value / 20;
	value -= bill_20 * 20;

	bill_10 = value / 10;
	value -= bill_10 * 10;

	bill_5 = value / 5;
	value -= bill_5 * 5;

	printf("$20 bills: %2d\n", bill_20);
	printf("$10 bills: %2d\n", bill_10);
	printf(" $5 bills: %2d\n", bill_5);
	printf(" $1 bills: %2d\n\n", value);
	return 0;
}

int ex2_8(void)
{
	/* Loan. */
	double amount;
	double interest;
	double monthly;
	double balance;

	printf("Enter amount of loan: ");
	scanf("%lf", &amount);
	printf("\nEnter interest rate: ");
	scanf("%lf", &interest);
	printf("\nEnter monthly payment: ");
	scanf("%lf", &monthly);

	/* Calculated as per exercise example. */
	balance = amount - monthly + (amount/100 * interest / 12);
	printf("Balance remaining after first payment : $%.2lf\n", balance);
	balance -= monthly + (balance/100 * interest / 12);
	printf("Balance remaining after second payment : $%.2lf\n", balance);
	balance -= monthly + (balance/100 * interest / 12);
	printf("Balance remaining after third payment : $%.2lf\n", balance);
	return 0;
}

int main(void)
{
	ex2_1();
	printf("%f\n\n", ex2_2(10.0f));
	printf("%f\n\n", ex2_3());
	ex2_4();

	/* Ex 2.5 & 2.6 produces different results, not sure why. */
	ex2_5();
	ex2_6();
	ex2_7();
	ex2_8();
	return 0;
}
