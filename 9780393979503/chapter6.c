#include <stdio.h>
#include <float.h>

/*!
**  -Wall -Werror -Wextra -pedantic -pedantic-errors -std=iso9899:1999
**  -Wshadow -Wconversion -Wstrict-prototypes
*/

int ex6_1(void)
{
	double input, largest = 0;

	do {
		printf("Enter a number: ");
		scanf("%lf", &input);

		if (input > largest)
			largest = input;

	} while (input > 0);

	printf("The largest number entered was %lf\n\n", largest);
	return 0;
}

int ex6_2(void)
{
	int n, m, gcd, smaller;
	printf("This program finds the greatest common divisor.\n");
	printf("Enter a two integers: ");
	scanf("%d %d", &n, &m);
	smaller = n < m ? n : m;

	for (int i = 1; i <= smaller; i++)
		if (n % i == 0 && m % i == 0)
			gcd = i;

	printf("Greatest common divisor: %d\n\n", gcd);
	return 0;
}

int ex6_3(void)
{
	int num, denom, gcd, smaller;
	printf("This program simplifies a fraction to its lowest terms.\n");
	printf("Enter a fraction: ");
	scanf("%d/%d", &num, &denom);
	smaller = num < denom ? num : denom;

	for (int i = 1; i <= smaller; i++)
		if (num % i == 0 && denom % i == 0)
			gcd = i;

	num /= gcd;
	denom /= gcd;

	printf("In lowest terms: %d/%d\n\n", num, denom);
	return 0;
}

int ex6_4(void)
{
	float commission, value;

	do {
		printf("Enter value of trade: ");
		scanf("%f", &value);

		if (value < 2500.00f)
			commission = 30.00f + .017f * value;
		else if (value < 6250.00f)
			commission = 56.00f + .0066f * value;
		else if (value < 20000.00f)
			commission = 76.00f + .0034f * value;
		else if (value < 50000.00f)
			commission = 100.00f + .0022f * value;
		else if (value < 500000.00f)
			commission = 155.00f + .0011f * value;
		else
			commission = 255.00f + .0009f * value;

		if (commission < 39.00f)
			commission = 39.00f;

		printf("Commission: $%.2f\n", commission);

	} while (value > 0.00f);

	printf("\n");
	return 0;
}

int ex6_5(void)
{
	int num, dummy;
	int reverse = 0;
	int multiplier = 1;
	printf("This program reverses an integer.\n");
	printf("Enter an integer: ");
	scanf("%d", &num);
	dummy = num;

	for (; dummy != 0; dummy /= 10, multiplier *= 10);
	multiplier /= 10;

	do {
		reverse += num % 10 * multiplier;
		num /= 10;
		multiplier /= 10;

	} while (num != 0);
	/* num != 0 works with negative values, num < 0 doesn't. */

	printf("The reversal is:  %d\n\n", reverse);
	return 0;
}

int ex6_6(void)
{
	int num;
	printf("This program prints all even squares between 1 and n.\n");
	printf("Enter an integer for n: ");
	scanf("%d", &num);

	for (int i = 2; i * i <= num; i += 2)
		printf("%d\n", i * i);

	printf("\n");
	return 0;
}

int ex6_7(void)
{
	int n, odd, square;

	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);
	odd = 3;
	square = 1;

	for (int i = 1; i <= n; i++) {
		printf("%10d%10d\n", i, square);
		square += odd;
		odd += 2;
	}

	printf("\n");
	return 0;
}

int ex6_8(void)
{
	int days, start;
	printf("Enter number of days in month: ");
	scanf("%d", &days);
	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &start);

	for (int i = 1; i < start; i++)
		printf("%3c", ' ');

	for (int i = 1; i <= days; i++) {

		printf("%3d", i);
		start++;

		if (start > 7) {
			printf("\n");
			start = 1;
		}
	}

	printf("\n\n");
	return 0;
}

int ex6_9(void)
{
	double amount;
	double interest;
	double monthly;
	int payments;

	printf("Enter amount of loan: ");
	scanf("%lf", &amount);

	printf("Enter interest rate: ");
	scanf("%lf", &interest);
	interest /= 12 * 100;

	printf("Enter monthly payment: ");
	scanf("%lf", &monthly);

	printf("Enter the number of payments: ");
	scanf("%d", &payments);
	printf("\n");

	for (int i = 1; i <= payments; i++) {
		amount -= monthly - amount * interest;
		printf("Balance remaining after payment #%d: $%.2lf\n", i, amount);
	}

	printf("---------------------------------------------\n\n");
	return 0;
}

int ex6_10(void)
{
	int amm, add, ayy;
	int bmm, bdd, byy;
	int looping = 1;

	/* Prompts yyyy instead of yy for accuracy. */
	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &amm, &add, &ayy);
	if (amm == 0 && add == 0 && ayy == 0)
		looping--;

	while (looping) {
		printf("Enter a date (mm/dd/yyyy): ");
		scanf("%d/%d/%d", &bmm, &bdd, &byy);

		if (bmm == 0 && bdd == 0 && byy == 0)
			looping--;

		else if (byy <  ayy ||
		        (byy == ayy && (bmm <  amm ||
		                       (bmm == amm && bdd <= add))))
		{
			ayy = byy;
			amm = bmm;
			add = bdd;
		}
	}

	printf("%d/%d/%d is the earliest date\n\n", amm, add, ayy);
	return 0;
}

int ex6_11(void)
{
	int input;
	double value, factorial;
	printf("Enter a value for n: ");
	scanf("%d", &input);
	value = 1;

	for (int i = 1; i <= input; i++) {

		factorial = 1;
		for (float j = 1; j <= i; factorial *= j, j++);
		value += 1.0 / factorial;
	}

	printf("Approximated value of e: %lf\n\n", value);
	return 0;
}

int ex6_12(void)
{
	int count = 1;
	float value, factorial, input_float;
	printf("Enter a floating value: ");
	scanf("%f", &input_float);
	value = 1.0f;

	do {
		factorial = 1.0f;
		for (float tmp = 1; tmp <= count; factorial *= tmp, tmp++);
		value += 1.0f / factorial;
		count++;

	} while (value < input_float);

	printf("You entered: %f\n", input_float);
	printf("Closest value of e: %f\n\n", value);
	return 0;
}

int main(void)
{
	/*  Ctrl+C for exercises:
	 *  Exercise 11     - Any number from 1 to 10
	 *  Exercise 12     - Any floating number from 2 to 2.718282
	 *  Everything else - Refer to code and book.
	 */

	ex6_1();
	ex6_2();
	ex6_3();
	ex6_4();
	ex6_5();
	ex6_6();
	ex6_7();
	ex6_8();
	ex6_9();
	ex6_10();
	ex6_11();
	ex6_12();
	return 0;
}
