#include <stdio.h>

int main()
{
    char ten[50];
    int soluong;
    float dongia, tien, vat, tongtien;

    printf("Nhap ten san pham: ");
    scanf_s("%s", ten);

    printf("Nhap so luong: ");
    scanf_s("%d", &soluong);

    printf("Nhap don gia: ");
    scanf("%f", &dongia);

    tien = soluong * dongia;
    vat = tien * 10 / 100;
    tongtien = tien + vat;

    printf("Tien = %.2f\n", tien);
    printf("VAT = %.2f\n", vat);
    printf("Tong tien = %.2f", tongtien);

    return 0;
}
