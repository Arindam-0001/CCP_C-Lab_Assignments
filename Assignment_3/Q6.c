/**
 * C program to display all alphabets from a-z using ASCII value
 */

#include <stdio.h>

int main()
{ 
    printf("Alphabets from a - z are: \n");

    int i=97;
    
    while(i<122)
    {
    printf("%c ", i);
    i++; 
    }

    // printf("Alphabets from a - z are: \n");

    // /* ASCII value of a=97 */
    // for(i=97; i<=122; i++)
    // {
    //     /*
    //      * Integer i with %c will convert integer
    //      * to character before printing. %c will
    //      * take ascii from i and display its character
    //      * equivalent.
    //      */
    //     printf("%c ", i);
    // }

    return 0;
}