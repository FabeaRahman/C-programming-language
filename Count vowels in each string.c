
#include <stdio.h>
#include <string.h>

int main() {
    int n, i, j, count;
    char str[500];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%s", str);
        count = 0;

        for (j = 0; str[j]; j++) {
            if (str[j] == 'a' || str[j] == 'e' || str[j] == 'i' ||
                str[j] == 'o' || str[j] == 'u' ||
                str[j] == 'A' || str[j] == 'E' || str[j] == 'I' ||
                str[j] == 'O' || str[j] == 'U') {
                count++;
            }
        }

        printf("String %d: %d\n", i, count);
    }

    return 0;
}
