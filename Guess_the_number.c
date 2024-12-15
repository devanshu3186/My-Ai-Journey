#include <stdio.h>
#include <stdlib.h> // For rand() and srand()
#include <time.h>   // For time()

int main()
{
    srand(time(0)); // Give the random number generator a new starting point(seed) using the current time.

    int randomNumber = rand() % 101; // Generate a random number between 0 and 100 (inclusive).

    int guessed, no_of_guesses = 0;

    do
    {
        printf("Guess the random number: ");
        scanf("%d", &guessed);
        no_of_guesses += 1;
        if (guessed > randomNumber)
        {
            printf("Lower number please!\n");
        }
        else if (guessed < randomNumber)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("Congratulations!!!\n");
            printf("The number of Guesses you used to arrive at %d are: %d\n", randomNumber, no_of_guesses);
        }

    } while (guessed != randomNumber);

    return 0;
}
