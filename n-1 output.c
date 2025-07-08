///for loop
#include <stdio.h>
int main(){
int  i,a;
scanf("%d",&a);
for(i=a;i>=1;i--){

printf("%d\n",i);
}
return 0;
}
///while loop
#include<stdio.h>
int main(){
int n,i;
printf("Enter n : ");
scanf("%d", &n);
/// print n to 0
printf("-----print n to 0-----\n");
i = n;
while( i >= 0)
{
printf("%d\n", i);
i--;
}
}
///do while loop
#include<stdio.h>
int main(){
int n,i;
printf("Enter n : ");
scanf("%d", &n);

printf("-----print n to 0-----\n");
i = n;
do{
printf("%d\n", i);
i--;
}while(i>=0);
}
