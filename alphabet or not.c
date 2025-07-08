#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if ch is an alphabet
    if (ch >= 'a' && ch <= 'z') {
        printf("'%c' is an alphabet.\n", ch);}
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("'%c' is an alphabet.\n", ch);
    }
    else {
        printf("'%c' is not an alphabet.\n", ch);
    }

    return 0;
}

