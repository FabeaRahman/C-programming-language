#include<stdio.h>
#include<stdbool.h>
int main ()
{
int x = 10;
int y = 9;
bool a = false, b = false;
printf("%d %d %d %d %d %d\n", x > y, x >= y, 13>=13, a==b, a>=b, a<=b );///1 1 1 1 1 1
printf("%d %d %d %d\n", 10 != 10, 10 == 15, x != y, x <= y);///0 0 1 0
return 0;
}
///! = not equal
