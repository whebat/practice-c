#include <stdio.h>

/*!
**  -Wall -Werror -Wextra -pedantic -pedantic-errors -std=iso9899:1999
**  -Wshadow -Wconversion -Wstrict-prototypes
*/

int ex3_1(void)
{
	int mm, dd, yyyy;

	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &mm, &dd, &yyyy);
	printf("You entered the date %d%02d%02d\n\n", yyyy, mm, dd);
	return 0;
}

int ex3_2(void)
{
	int num;
	float price;
	int mm, dd, yyyy;

	printf("Enter item number: ");
	scanf("%d", &num);
	printf("Enter unit price: ");
	scanf("%f", &price);
	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &mm, &dd, &yyyy);

	/* Allow dollar amounts up to S9999.99 */
	printf("Item\tUnit Price\tPurchase Date\n");
	printf("%-d\t$ %7.2f\t%02d/%02d/%04d\n", num, price, mm, dd, yyyy);

	/* To demonstrate alignment. */
	printf("%-d\t$ %7.2f\t%02d/%02d/%04d\n\n", 232, 23.32, 2, 3, 1923);
	return 0;
}

int ex3_3(void)
{
	int gs1, grp, pub, item, digit;

	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &gs1, &grp, &pub, &item, &digit);

	printf("GS1 prefix: %d\n", gs1);
	printf("Group identifier: %d\n", grp);
	printf("Publisher code: %d\n", pub);
	printf("Item number: %d\n", item);
	printf("Check digit: %d\n\n", digit);
	return 0;
}

int ex3_4(void)
{
	int country, one, two;
	printf("Enter phone number [(xxx) xxx-xxxx]: ");
	scanf("(%d) %d-%d", &country, &one, &two);

	printf("You entered %d.%d.%d\n\n", country, one, two);
	return 0;
}

int ex3_5(void)
{
	int n0, n1, n2, n3, n4, n5, n6, n7, n8, n9, nA, nB, nC, nD, nE, nF;
	printf("Enter the numbers from 1 to 16 in any order:\n");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
	       &n0, &n1, &n2, &n3, &n4, &n5, &n6, &n7,
	       &n8, &n9, &nA, &nB, &nC, &nD, &nE, &nF);

	printf("%02d %02d %02d %02d\n",   n0, n1, n2, n3);
	printf("%02d %02d %02d %02d\n",   n4, n5, n6, n7);
	printf("%02d %02d %02d %02d\n",   n8, n9, nA, nB);
	printf("%02d %02d %02d %02d\n\n", nC, nD, nE, nF);
	return 0;
}

int ex3_6(void)
{
	int num1, denom1, num2, denom2, result_num, result_denom;
	printf("Enter two fractions separated by a plus sign: ");
	scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);

	result_num = num1 * denom2 + num2 * denom1;
	result_denom = denom1 * denom2;
	printf("The sum is %d/%d\n", result_num, result_denom);
	return 0;
}

int main(void)
{
	/*  Ctrl+C for exercise 1, 3, 4, 5, 6:
	 *  2/17/2011
	 *  978-0-393-97950-3
	 *  (404) 817-6900
	 *  16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1
	 *  5/6+3/4
	 */

	ex3_1();
	ex3_2();
	ex3_3();
	ex3_4();
	ex3_5();
	ex3_6();
	return 0;
}
