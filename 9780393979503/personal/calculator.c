#include <stdio.h>

/*!
**  -Wall -Werror -Wextra -pedantic -pedantic-errors -std=iso9899:1999
**  -Wshadow -Wconversion -Wstrict-prototypes
*/

void calculate(char operator, double *value_pointer)
{
	double input;
	scanf("%lf", &input);

	switch (operator) {
	case '+':
		*value_pointer += input;
		break;
	case '-':
		*value_pointer -= input;
		break;
	case '*':
		*value_pointer *= input;
		break;
	case '/':
		*value_pointer /= input;
		break;
	default:
		printf("Invalid input received.\n");
	}
}

int main(void)
{
	double value = 0;
	double *p = &value;
	char oper;

	printf("This is a simple calculator.\n");
	printf("Usage Examples: Enter '+ 5' or '* 2.5' or '/ 2')\n");
	printf("Spaces are optional, '+5' or '+       5' is also valid.)\n");
	printf("-----------------------------------------------------\n\n");

	do {
		printf("Current Value: %lf\n", *p);

		/* Additional space in scanf is a buffer for newline. */
		scanf(" %1c", &oper);
		if (oper != '=')
			calculate(oper, p);

	} while (oper != '=');

	printf("Your final result is %lf\n", *p);
	return 0;
}


