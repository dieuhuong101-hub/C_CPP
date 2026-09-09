// Viết chương trình nhập vào độ dài cạnh a của hình vuống
// in ra chu vi và diện tích hình vuông đó.

#include <stdio.h>

int main()
{
    int a,b;
    printf("Nhập kích thước hình chữ nhật:");
    scanf("%d %d", &a,&b);
    int cv = (a + b) * 2;
    int dt = a * b;
    printf("Chu vi= %d\n Diện tích= %d", cv, dt);
    return 0;
}