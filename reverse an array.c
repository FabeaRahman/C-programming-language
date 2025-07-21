# include <stdio.h>
int main ()
{
    int i,n;
    /// takes input size
    scanf("%d" ,&n);
    int ar [n];
    /// array input loop
    for (i=0;i<n;i++){
        scanf("%d ",&ar[i]);

    }
    /// print loop for print array
    for(i=n-1;i>=0;i--){
        printf("%d ",ar[i]);
    }
    return 0;
}
