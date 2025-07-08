#include<stdio.h>
#define month 12
#define PI 3.1416
///global value
const int ar=15;
const float age=25.5;
const double d=123.345;
int main(){
///const int ar=5;
//ar = 6; // cannot to change
printf("constant variable ar : %d\n\n", ar);
///const float age=25.555;
//age = 6;//cannot to change
printf("constant variable age : %f\n\n", age);
//const double d;///0.000000
///const double d=55;hobe na karon akbar ee change kora jay
///scanf("%lf", &d);
printf("constant variable d : %lf\n\n", d);
//d =45;// cannot to change
printf("month : %d\n", month);
printf("value of pi : %f\n", PI);
return 0;
}
