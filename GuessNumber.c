#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_RANGE 10

int main(int argc, const char** argv)
{
	srand(time(NULL));

	int guessedNumber;
	int hiddenNumber = rand()%MAX_RANGE + 1;

	fprintf(stdout, "Enter a number between 1 to %d: ", MAX_RANGE);
	fscanf(stdin, "%d", &guessedNumber);

	if(guessedNumber == hiddenNumber)
	{
		fprintf(stdout, "You guess is correct.\n");
	}
	else
	{
		fprintf(stdout, "Better luck next time.\n");
	}

	return 0;
}
