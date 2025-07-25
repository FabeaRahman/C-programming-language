
#include <stdio.h>
int main() {
    int N, i, max, min;
    scanf("%d", &N);
    int a[N];
    for(i = 0; i < N; i++)
        scanf("%d", &a[i]);
    max = min = a[0];
    for(i = 1; i < N; i++) {
        if(a[i] > max) max = a[i];
        if(a[i] < min) min = a[i];
    }
    printf("%d %d\n", max, min);
    return 0;
}
