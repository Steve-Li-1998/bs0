#include <stdio.h>
#include <stdlib.h>

int fak(int n) {
	if (n<0)
	{
		return NULL;
	}
	if (0==n)
	{
		return 1;
	}
	return fak(n - 1)*n;
}

int main(int argc, char **argv) {
	if (1 == argc)
	{
		printf("Fehler: Keine Obergrenze angegeben\n");
		return 1;
	}
	if (argc > 2)
	{
		printf("Warnung: Dieses Kommando akzeptiert nur einen Parameter, weitere Parametern werden weggeworfen\n");
	}
	for (size_t i = 0; argv[1][i] != '\0'; i++)
	{
		if ((argv[1][i] < '0' || argv[1][i] > '9') && argv[1][i] != '+' && argv[1][i] != '-')
		{
			printf("Fehler: Die Obergrenze sind nur als Ziffern eingegeben zulässig\n");
			return 1;
		}
	}
	int upperLimit = atoi(argv[1]);
	if (upperLimit < 0)
	{
		printf("Fehler: Negative Zahl als Obergrenze angegeben\n");
		return 1;
	}
	int result = fak(upperLimit);
	printf("Die Fakultät von %d lautet: %d\n", upperLimit, result);
	return 0;
}