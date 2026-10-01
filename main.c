#include <stdio.h>

int main(void) 
{
    int num, sum = 0;

    printf("Input an integer: ");
    scanf("%i", &num);

    for (int i = 1; i <= num; i++)
    {
        sum += i;
    }

    printf("Sum result is %i\n", sum);

    return 0;
}