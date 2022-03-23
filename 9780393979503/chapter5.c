#include <stdio.h>

/*!
**  -Wall -Werror -Wextra -pedantic -pedantic-errors -std=iso9899:1999
**  -Wshadow -Wconversion -Wstrict-prototypes
*/

int ex5_1(void)
{
	int num, digits, neg;
	printf("Enter a number: ");
	scanf("%d", &num);

	if (num < 0) {
		num *= -1;
		neg = 1;
	}

	if (num < 10)
		digits = 1;

	else if (num < 100)
		digits = 2;

	else if (num < 1000)
		digits = 3;

	else
		digits = 4;

	if (neg == 1)
		num *= -1;

	printf("The number %d has %d digits\n\n", num, digits);
	return 0;
}

int ex5_2(void)
{
	int min, sec;
	char c;
	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &min, &sec);

	if (min < 0 || min > 23 || sec < 0 || sec > 59)
		printf("Invalid number.");
	else {
		if (min < 12) {
			c = 'A';
			if (min == 0)
				min += 12;
		} else {
			c = 'P';
			if (min != 12)
				min -= 12;
		}
		printf("Equivalent 12-hour time: %02d:%02d %cM", min, sec, c);
	}
	printf("\n\n");
	return 0;
}

int ex5_3(void)
{
	int share;
	float commission, price, value, rival = 33.00f;

	printf("Enter the number of shares: ");
	scanf("%d", &share);
	printf("Enter the price per share: ");
	scanf("%f", &price);

	value = price * (float) share;

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

	/* Rival */
	if (share < 2000)
		rival += .03f * (float) share;
	else
		rival += .02f * (float) share;

	printf("Commission: $%.2f\n", commission);
	printf("Rival Commission: $%.2f\n\n", rival);
	return 0;
}

int ex5_4(void)
{
	int speed;
	printf("Enter speed (in knots): ");
	scanf("%d", &speed);

	if (speed < 1)
		printf("Wind force is: calm.");
	else if (speed <= 3)
		printf("Wind force is: light air.");
	else if (speed <= 27)
		printf("Wind force is: breeze.");
	else if (speed <= 46)
		printf("Wind force is: gale.");
	else if (speed <= 63)
		printf("Wind force is: storm.");
	else
		printf("Wind force is: hurricane.");

	printf("\n\n");
	return 0;
}

int ex5_5(void)
{
	float income, tax;
	printf("Enter the amount of taxable income: ");
	scanf("%f", &income);

	if (income < 750.00f)
		tax = income * .01f;
	else if (income <= 2250.00f)
		tax = 7.50f   + (income - 750.00f)  * .02f;
	else if (income <= 3750.00f)
		tax = 37.50f  + (income - 2250.00f) * .03f;
	else if (income <= 5250.00f)
		tax = 82.50f  + (income - 3750.00f) * .04f;
	else if (income <= 7000.00f)
		tax = 142.50f + (income - 5250.00f) * .05f;
	else
		tax = 230.00f + (income - 7000.00f) * .06f;

	printf("Tax: %.2f\n\n", tax);
	return 0;
}

int ex5_6(void)
{
	int n0, n1, n2, n3, n4, n5, n6, n7, n8, n9, nA;
	int nB, sum1, sum2, check;

	printf("Enter a 12 digit UPC: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
	      &n0, &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &nA, &nB);

	sum1 = n0 + n2 + n4 + n6 + n8 + nA;
	sum2 = n1 + n3 + n5 + n7 + n9;
	check = 9 - (sum2 + sum1 * 3 - 1) % 10;

	if (check == nB)
		printf("VALID\n\n");
	else
		printf("NOT VALID\n\n");
	return 0;
}

int ex5_7(void)
{
	int a1, a2, b1, b2, tmp;
	printf("Enter four integers: ");
	scanf("%d %d %d %d", &a1, &a2, &b1, &b2);

	if (a1 < a2) {
		tmp = a1;
		a1 = a2;
		a2 = tmp;
	}

	if (b1 < b2) {
		tmp = b1;
		b1 = b2;
		b2 = tmp;
	}

	/* Determine largest. */
	if (a1 < b1) {
		tmp = a1;
		a1 = b1;
		b1 = tmp;
	}

	/* Determine smallest. */
	if (a2 < b2) {
		tmp = a2;
		a2 = b2;
		b2 = tmp;
	}

	printf("Largest: %d\nSmallest: %d\n\n", a1, b2);
	return 0;
}

int ex5_8(void)
{
	int hour, minute, converted;
	printf("Enter a 24-hour time (hh:mm) : ");
	scanf("%d:%d", &hour, &minute);

	converted = hour * 60 + minute;
	printf("Closest departure time is ");

	/* Refer to the book for corresponding time. */
	if (converted < 480)
		printf("8:00 a.m., arriving at 10:16 a.m.");
	else if (converted < 583)
		printf("9:43 a.m., arriving at 11:52 a.m.");
	else if (converted < 679)
		printf("11:19 a.m., arriving at 1:31 p.m.");
	else if (converted < 767)
		printf("12:47 p.m., arriving at 3:00 p.m.");
	else if (converted < 840)
		printf("2:00 p.m., arriving at 4:08 p.m.");
	else if (converted < 945)
		printf("3:45 p.m., arriving at 5:55 p.m.");
	else if (converted < 1140)
		printf("7:00 p.m., arriving at 9:20 p.m.");
	else
		printf("9:45 p.m., arriving at 11:55 p.m.");

	printf("\n\n");
	return 0;
}

int ex5_9(void)
{
	int amm, add, ayy, bmm, bdd, byy, first_is_earlier, same = 0;
	printf("Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%d", &amm, &add, &ayy);
	printf("Enter second date (mm/dd/yy): ");
	scanf("%d/%d/%d", &bmm, &bdd, &byy);

	/* Year */
	if (ayy == byy) {

		/* Month */
		if (amm == bmm) {

			/* Day */
			if (add == bdd)
				same = 1;
			else if (add < bdd)
				first_is_earlier = 1;
			else
				first_is_earlier = 0;

		} else if (amm < bmm)
			first_is_earlier = 1;
		else
			first_is_earlier = 0;

	} else if (ayy < byy)
		first_is_earlier = 1;
	else
		first_is_earlier = 0;

	/* Output */
	if (same)
		printf("Both dates are the same.\n\n");
	else {
		if (first_is_earlier)
			printf("%02d/%d/%04d is earlier than %02d/%d/%04d\n\n",
			       amm, add, ayy, bmm, bdd, byy);
		else
			printf("%02d/%d/%04d is earlier than %02d/%d/%04d\n\n",
			       bmm, bdd, byy, amm, add, ayy);
	}

	return 0;
}

int ex5_10(void)
{
	char grade;
	int num_grade;

	printf("Enter numerical grade: ");
	scanf("%d", &num_grade);
	num_grade /= 10;

	/* Any negative values will follow default. */
	switch (num_grade) {

	case 6:
		grade = 'D';
		break;
	case 7:
		grade = 'C';
		break;
	case 8:
		grade = 'B';
		break;
	default:
		grade = num_grade > 8 ? 'A' : 'F';
	}

	printf("Letter grade: %c\n\n", grade);
	return 0;
}

int ex5_11(void)
{
	int tens, ones;
	printf("Enter a two-digit number: ");
	scanf("%d", &tens);
	ones = tens % 10;
	tens /= 10;
	printf("You entered the number ");

	if (tens == 1)
		switch (ones) {
		case 1:
			printf("eleven.");
			break;
		case 2:
			printf("twelve.");
			break;
		case 3:
			printf("thirteen.");
			break;
		case 4:
			printf("fourteen.");
			break;
		case 5:
			printf("fifteen.");
			break;
		case 6:
			printf("sixteen.");
			break;
		case 7:
			printf("seventeen.");
			break;
		case 8:
			printf("eighteen.");
			break;
		case 9:
			printf("nineteen.");
			break;
		default:
			printf("INVALID.");
		}
	else {
		switch (tens) {
			case 2:
				printf("twenty-");
				break;
			case 3:
				printf("thirty-");
				break;
			case 4:
				printf("forty-");
				break;
			case 5:
				printf("fifty");
				break;
			case 6:
				printf("sixty-");
				break;
			case 7:
				printf("seventy-");
				break;
			case 8:
				printf("eighty-");
				break;
			case 9:
				printf("ninety-");
				break;
			default:
				printf("INVALID-");
		}

		switch (ones) {
			case 1:
				printf("one.");
				break;
			case 2:
				printf("two.");
				break;
			case 3:
				printf("three.");
				break;
			case 4:
				printf("four.");
				break;
			case 5:
				printf("five.");
				break;
			case 6:
				printf("six.");
				break;
			case 7:
				printf("seven.");
				break;
			case 8:
				printf("eight.");
				break;
			case 9:
				printf("nine.");
				break;
			default:
				printf("INVALID.");
		}
	}
	printf("\n\n");
	return 0;
}

int main(void)
{
	/*  Ctrl+C for exercise 2, 5, 6:
	 *  Exercise 1       - Any 4 digit number
	 *  Exercise 2       - 00:60 00:23 01:23 24:23 12:23 13:23
	 *  Exercise 6       - 013800151735 (Only VALID if the last digit is 5)
	 *  Exercise 7       - Any 4 numbers, preferably of different values
	 *  Exercise 10      - Preferably any number 0 - 100.
	 *
	 *  Refer to code (and book) for Exercises 3, 4, 5, 8, 9, 11.
	 */

	ex5_1();
	ex5_2();
	ex5_3(); /* Disparity (rival's) if share or price is skewed. */
	ex5_4();
	ex5_5();
	ex5_6();
	ex5_7();
	ex5_8();
	ex5_9();
	ex5_10();
	ex5_11();
	return 0;
}
