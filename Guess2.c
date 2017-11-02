#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_RANGE 10

int main(int argc, const char** argv)
{
	srand(time(NULL));

	int guessedNumber;
	int hiddenNumber = rand()%MAX_RANGE + 1;
	int counter = 3;

	while(counter > 0)
	{
		fprintf(stdout, "Enter a number between 1 to %d: ", MAX_RANGE);
		fscanf(stdin, "%d", &guessedNumber);

		if(guessedNumber == hiddenNumber)
		{
			fprintf(stdout, "You guess is correct.\n");
			counter = 0;
		}
		else if(guessedNumber > hiddenNumber)
		{
			fprintf(stdout, "Your guess is too high.\n");
			counter--;
		}
		else if(guessedNumber < hiddenNumber)
		{
			fprintf(stdout, "Your guess is too low.\n");
			counter--;
		}
		else
		{
			fprintf(stdout, "Your guess is not correct.\n");
			counter--;
		}
	}
	return 0;
}
