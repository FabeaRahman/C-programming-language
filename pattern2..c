#include<stdio.h>
int main ()
{
    int i,j,r,sp=0,k;
    scanf("%d",&r);
    for(i=1;i<=r;i++){
        for(j=1;j<=sp;j++){
            printf("  ");
        }
        sp++;
        for (k = 1; k <= (2 * (r - i) - 1); k++){
            printf("* ");

        }

        printf("\n");}
        return 0;
    }





