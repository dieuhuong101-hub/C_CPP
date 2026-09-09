#include <stdio.h>
int main(){

    float vnd,usd;
    printf ("Nhập số tiền VND:");
    scanf("%f",&vnd);

    //đổi tiền
    usd=vnd/26100;

    printf("Số tiền USD đổi được:%.2f",usd);

    return 0;
}