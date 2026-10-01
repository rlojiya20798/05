#include <stdio.h>

int main(void) 
{
    int answer = 59;
    int input;
    int trials = 0;

    do
    {
        printf("Guess a number: ");
        scanf("%i", &input);
        
        if (input > answer)
            printf("high!\n");
        else if (input < answer)
            printf("low!\n");

        trials++;
    } while (input != answer);

    printf("Congratulations! trials: %i\n", trials);
    
    return 0;
}