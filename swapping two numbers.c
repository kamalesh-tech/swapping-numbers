# swapping-numbers
developed by kamalesh.s
#include<stdio.h>
int main()
{
int a=20,b=10;
printf("before swap a=%d b=%d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("after swap a=%d b=%d",a,b);
return 0;
}
