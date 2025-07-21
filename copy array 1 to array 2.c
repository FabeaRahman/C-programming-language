#include <stdio.h>
int main()
{
    int i,n;
    ///input size
    scanf("%d",&n);
    int a[n],b[n];
    ///take 1st arrays elements input
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
///copy
    for (i=0;i<n;i++){
        b[i]=a[i];

    }
    ///print array b
    for (i=0;i<n;i++){

        printf("%d",b[i]);

    }
    return 0;

}
