#include <stdio.h>
#include <string.h>
int main() {
    char str[500];
    scanf("%s", str);
    int len = strlen(str), i, change = 1;
    for(i = 0; i < len/2; i++) {
        if(str[i] != str[len-1-i]) {
            change = 0;
            break;
        }
    }
    if(change) printf("Palindrome\n");
    else printf("Not Palindrome\n");
    return 0;
}

