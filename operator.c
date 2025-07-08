#include<stdio.h>
int main()
{
    int a= 5&8;///and
    int b= 6|8;///or
    int c= ~a;///not
    int d= 5^9;///exor
    int e= 5<9 && 7<8;///and and
    int f= 5<9 || 7<8;/// or or
    int g= 8<<3;///left shift
    int r= 8>>3;///right shift
    printf("%d %d %d %d %d %d %d %d\n",a,b,c,d,e,f,g,r);
    return 0;
}
