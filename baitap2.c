// Viết chương trình nhập vào số giờ, phút, in ra số giây.
#include <stdio.h>
int main()
{

    int gio, phut, giay;

    printf("Nhập vào số giờ: ");
    scanf("%d", &gio);

    printf("Nhập vào số phút: ");
    scanf("%d", &phut);

    giay = gio * 3600 + phut * 60;
    printf("Số giây là: %d", giay);

    return 0;
}