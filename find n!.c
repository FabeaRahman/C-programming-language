#include<stdio.h>
int main()/// for loop
{
    int i,n,sum=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum*i;
    }
    printf("%d\n",sum);
    return 0;
}
#include<stdio.h>
int main()/// do while loop
{
    int i,n,sum=1;
    scanf("%d",&n);
    i=1;
    do{
        sum=sum*i;
        i=i+1;
    }
    while(i<=n);
    printf("%d\n",sum);
    return 0;
}
