#include <stdio.h>
int main() {
    int n, i, j;
    scanf("%d", &n);
    int a[n][n];
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < n; i++) {
        if(i % 2 == 0)
            for(j = 0; j < n; j++)
                printf("%d ", a[i][j]);
        else
            for(j = n - 1; j >= 0; j--)
                printf("%d ", a[i][j]);
    }
    return 0;
}

