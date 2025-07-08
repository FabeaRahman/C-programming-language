/**#include<stdio.h>
int main(){
int age;
printf("how old are you?\n= ");
scanf("%d", &age);
if(age >= 18){
printf("You can vote\n");
}
else{
printf("You can't vote\n");
}*/
#include<stdio.h>
int main(){
int age;
scanf("%d", &age);
int age1=age >=18;
switch(age1)
{
case 0:
printf("You can't vote\n");
break;
case 1:
printf("You can vote\n");
break;
}
}//swithc
