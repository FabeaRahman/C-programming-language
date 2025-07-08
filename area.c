
#include <stdio.h>
#include<math.h>
int main()
{
    float a,r,h,b,s,c,area1,area2,area3,area4,area5,area6,area7,area8;
    scanf("%f%f%f%f%f%f",&a,&r,&h,&b,&s,&c);
    float pie=3.14159;

    area1 =pie*r*r;/// pie*pow(r,2),circle
    area2 =1.0/2*b*h;///1/2.0*b*h, triangle
    area3 =a*a;/// square
    area4 =2*pie*r*(r+h);/// cylinder
    area5 =4*pie*r*r;///4*pie*pow(r,2) sphere
    area6 =sqrt(3)/4*a*a;///Equilateral triangle.
    area7 =b/4*sqrt(4*a*a-b*b);///sosceles triangle
    s=(a+b+c)/2;
    area8 =sqrt(s*(s-a)*(s-b)*(s-c));///sosceles triangle
   /* printf("The area is %f%f%f%f%f%f%f%f\n",area1,area2,area3,area4,area5,area6,area7,area8);*/

    printf("The area is %f\n",area1);
    printf("The area is %f\n",area2);
    printf("The area is %f\n",area3);
    printf("The area is %f\n",area4);
    printf("The area is %f\n",area5);
    printf("The area is %f\n",area6);
    printf("The area is %f\n",area7);
    printf("The area is %f\n",area8);
    return 0;
}
