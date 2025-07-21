
#include <stdio.h>
int main()
{
    int i,n,s;
    ///take size of array1
    scanf("%d",&n);
    int a[n];
    ///take 1st arrays elements input
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    ///take size of array 2
    scanf("%d",&s);
    int f[s];
///take 1st arrays elements input

    for (i=0;i<s;i++){
        scanf("%d",&f[i]);
    }
    int b[n+s];

    for (i=0;i<n;i++){

            b[i]=a[i];}
    for (i=0;i<s;i++){

            b[i+n]=f[i];}
for (i=0;i<n+s;i++){

        printf("%d",b[i]);

    }
    return 0;

}
