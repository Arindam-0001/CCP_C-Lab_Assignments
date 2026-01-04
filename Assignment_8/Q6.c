// Count number of words
#include <stdio.h>

int main() {
    char s[200];
    int i = 0, count = 1;

    printf("Enter a line: ");
    gets(s);

    while (s[i] != '\0') {
        if (s[i] == ' ' && s[i+1] != ' ')
            count++;
        i++;
    }

    printf("Total words = %d", count);
    return 0;
}
