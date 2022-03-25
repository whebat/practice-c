#include <stdio.h>
#include <limits.h>

int main(void)
{
	unsigned short typeUS;
	unsigned int typeUI;
	unsigned long typeUL;
	short typeS;
	int typeI;
	long typeL;

	printf("Unsigned Max\n");
	printf("----------------------------------------\n");
	typeUS = USHRT_MAX;
	typeUI = UINT_MAX;
	typeUL = ULONG_MAX;
	printf("short       = %u\n", typeUS);
	printf("short octal = %o\n", typeUS);
	printf("short hex   = %x\n", typeUS);
	printf("int         = %u\n", typeUI);
	printf("int octal   = %o\n", typeUI);
	printf("int hex     = %x\n", typeUI);
	printf("long        = %lu\n", typeUL);
	printf("long octal  = %lo\n", typeUL);
	printf("long hex    = %lx\n\n", typeUL);

	printf("Unsigned Max + 1\n");
	printf("----------------------------------------\n");
	typeUS++;
	typeUI++;
	typeUL++;
	printf("%u\n", typeUS);
	printf("%u\n", typeUI);
	printf("%lu\n\n", typeUL);

	printf("Unsigned Max + 1 + 1\n");
	printf("----------------------------------------\n");
	typeUS++;
	typeUI++;
	typeUL++;
	printf("%u\n", typeUS);
	printf("%u\n", typeUI);
	printf("%lu\n\n", typeUL);

	printf("Unsigned Zero (0 is assigned)\n");
	printf("----------------------------------------\n");
	typeUS = 0;
	typeUI = 0;
	typeUL = 0;
	printf("short       = %u\n", typeUS);
	printf("short octal = %o\n", typeUS);
	printf("short hex   = %x\n", typeUS);
	printf("int         = %u\n", typeUI);
	printf("int octal   = %o\n", typeUI);
	printf("int hex     = %x\n", typeUI);
	printf("long        = %lu\n", typeUL);
	printf("long octal  = %lo\n", typeUL);
	printf("long hex    = %lx\n\n", typeUL);

	printf("Unsigned Zero - 1 (This is also the max)\n");
	printf("----------------------------------------\n");
	typeUS--;
	typeUI--;
	typeUL--;
	printf("%u\n", typeUS);
	printf("%u\n", typeUI);
	printf("%lu\n\n", typeUL);

	printf("Signed Zero\n");
	printf("----------------------------------------\n");
	typeS = 0;
	typeI = 0;
	typeL = 0;
	printf("short = %d\n", typeS);
	printf("int   = %d\n", typeI);
	printf("long  = %ld\n\n", typeL);

	printf("Signed Zero - 1\n");
	printf("----------------------------------------\n");
	typeS--;
	typeI--;
	typeL--;
	printf("short = %d\n", typeS);
	printf("int   = %d\n", typeI);
	printf("long  = %ld\n\n", typeL);

	printf("Signed Min\n");
	printf("----------------------------------------\n");
	typeS = SHRT_MIN;
	typeI = INT_MIN;
	typeL = LONG_MIN;
	printf("short = %d\n", typeS);
	printf("int   = %d\n", typeI);
	printf("long  = %ld\n\n", typeL);

	printf("Signed Min (In octal and hex)\n");
	printf("----------------------------------------\n");
	printf("short octal = -%o\n", -typeS);
	printf("short hex   = -%x\n", -typeS);
	printf("int octal   = -%o\n", -typeI);
	printf("int hex     = -%x\n", -typeI);
	printf("long octal  = -%lo\n", -typeL);
	printf("long hex    = -%lx\n\n", -typeL);

	printf("Signed Min - 1 (This is also the max)\n");
	printf("----------------------------------------\n");
	typeS--;
	typeI--;
	typeL--;
	printf("short = %d\n", typeS);
	printf("int   = %d\n", typeI);
	printf("long  = %ld\n\n", typeL);

	printf("Signed Max (In octal and hex)\n");
	printf("----------------------------------------\n");
	printf("short octal = %o\n", typeS);
	printf("short hex   = %x\n", typeS);
	printf("int octal   = %o\n", typeI);
	printf("int hex     = %x\n", typeI);
	printf("long octal  = %lo\n", typeL);
	printf("long hex    = %lx\n\n", typeL);
	return 0;
}
