
# include <stdio.h>
int main()
{
    int N, i, j;
    scanf("%d", &N);
    int a[N];
    for(i=0; i<N; i++)
        scanf("%d", &a[i]);
    for(i=0; i<N-1; i++)
        for(j=i+1; j<N; j++)
            if(a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
    for(i=0; i<N; i++)
        printf("%d ", a[i]);
    return 0;
}

