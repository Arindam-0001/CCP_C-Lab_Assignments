/**
 * C program to all natural numbers in reverse from n to 1
 */

#include <stdio.h>

int main()
{
    int i, start;

    /* Input start range from user */
    printf("Enter starting value: ");
    scanf("%d", &start);

    /*
     * Run loop from 'start' to 1 and
     * decrement 1 in each iteration
     */ 
    // for(i=start; i>=1; i--)
    // {
    //     printf("%d ", i);
    // }

    while(i>=1){
        i=start;
        i--;
    }
     printf("%d ", i);

    return 0;
}