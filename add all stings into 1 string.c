#include <stdio.h>

int main() {
    char str[10000];
    int i;
    fgets(str, sizeof(str), stdin);
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ') {
            printf("%c", str[i]);
        }
    }
    printf("\n");
    return 0;
}


