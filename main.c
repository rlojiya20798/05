#include <stdio.h>

int main(void) 
{
    int count = 0;
    char c;

    printf("Enter a character: ");

    while ((c = getchar()) != '\n')
    {
        if (c >= '0' && c <= '9')
        {
            count++;
        }
    }

    printf("There are %i digits!\n", count);

    return 0;
}