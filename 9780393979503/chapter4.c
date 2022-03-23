#include <stdio.h>

/*!
**  -Wall -Werror -Wextra -pedantic -pedantic-errors -std=iso9899:1999
**  -Wshadow -Wconversion -Wstrict-prototypes
*/

int ex4_1(void)
{
	int num, last;
	printf("Enter a two digit number: ");
	scanf("%d", &num);

	last = num % 10;
	num = num / 10 + last * 10;
	printf("The reversal is %d", num);
	return 0;
}

int ex4_2(void)
{
	int num, mid, last;
	printf("Enter a three digit number: ");
	scanf("%d", &num);

	last = num % 10;
	num /= 10;
	mid = num % 10;
	num = num / 10 + mid * 10 + last * 100;
	printf("The reversal is %d\n\n", num);
	return 0;
}

int ex4_3(void)
{
	int digitA, digitB, digitC;
	printf("Enter a three digit number: ");
	scanf("%1d%1d%1d", &digitA, &digitB, &digitC);
	/* Note to self: Use %1d to store each digit separately. */

	printf("The reversal is %d%d%d\n\n", digitC, digitB, digitA);
	return 0;
}

int ex4_4(void)
{
	int num, octal = 0;
	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &num);

	/*
	 * for (int i = 1; i <= 10000; i *= 10, num /= 8)
	 *	octal += num % 8 * i;
	 */

	octal += num % 8;
	num /= 8;
	octal += num % 8 * 10;
	num /= 8;
	octal += num % 8 * 100;
	num /= 8;
	octal += num % 8 * 1000;
	num /= 8;
	octal += num % 8 * 10000;
	printf("In octal, your number is: %05d\n\n", octal);
	return 0;
}

int ex4_5(void)
{
	int n0, n1, n2, n3, n4, n5, n6, n7, n8, n9, nA, sum1, sum2, check;
	printf("Enter the first 11 digits of a UPC: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
	      &n0, &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &nA);

	sum1 = n0 + n2 + n4 + n6 + n8 + nA;
	sum2 = n1 + n3 + n5 + n7 + n9;
	check = 9 - (sum2 + sum1 * 3 - 1) % 10;

	printf("Check digit: %d\n\n", check);
	return 0;
}

int ex4_6(void)
{
	int n0, n1, n2, n3, n4, n5, n6, n7, n8, n9, nA, nB, sum1, sum2, check;
	printf("Enter the first 12 digits of an EAN: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
	      &n0, &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &nA, &nB);

	/* Note: sum1 & sum2 is flipped, unlike ex4_5. */
	sum1 = n1 + n3 + n5 + n7 + n9 + nB;
	sum2 = n0 + n2 + n4 + n6 + n8 + nA;
	check = 9 - (sum2 + sum1 * 3 - 1) % 10;

	printf("Check digit: %d\n\n", check);
	return 0;
}

int main(void)
{
	/*  Ctrl+C for exercise 1, 4, 5, 6:
	 *  28
	 *  1953
	 *  01380015173
	 *  869148426000
	 */

	ex4_1();
	ex4_2();
	ex4_3();
	ex4_4();
	ex4_5();
	ex4_6();
	return 0;
}
