// Viết chương trình nhập vào bán kính hình tròn, in ra chu vi và diện tích.
int main()
{

    float r, chuvi, dientich;

    printf("Nhập vào bán kính hình tròn: ");
    scanf("%f", &r);

    chuvi = 2 * 3.1416 * r;
    dientich = 3.1416 * r * r;
    
    printf("Chu vi hình tròn là: %.2f", chuvi);
    printf("\nDiện tích hình tròn là: %.2f", dientich);

    return 0;
}