#include<stdio.h>
int main(){
int n,i,sum;
scanf("%d",&n);
i=1;
level:
    sum=sum+i*i;
    i=i+1;
    if (i<=n){
    goto level;}
    printf("%d",sum);
    return 0;
}
