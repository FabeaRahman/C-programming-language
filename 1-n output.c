///for loop
#include <stdio.h>
int main(){
int  i,a;
scanf("%d",&a);
for(i=1;i<=a;i++){

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
i=1;
while(i <= n)
{
printf("%d\n", i);
i++;
}
return 0;
}

/// do while loop
#include<stdio.h>
int main(){
int n,i;
printf("Enter n : ");
scanf("%d", &n);
i = 1;
do{
printf("%d\n", i);
i++;
}
while(i <= n);
return 0;
}
