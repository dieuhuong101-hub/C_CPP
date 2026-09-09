#include <stdio.h>
int main()
{
int a=1;
int b=2;

// hoán vị
int c=a;
a=b;
b=c;

printf("a=%d,b=%d", a,b);

    return 0;
}