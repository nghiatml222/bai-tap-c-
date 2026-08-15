#include <stdio.h>

int main()
{
    int h, a, b, c, d;
    int S, P;

    printf("Nhap chieu cao h: ");
    scanf("%d", &h);

    printf("Nhap day a: ");
    scanf("%d", &a);

    printf("Nhap day b: ");
    scanf("%d", &b);

    printf("Nhap canh c: ");
    scanf("%d", &c);

    printf("Nhap canh d: ");
    scanf("%d", &d);

    S = (a + b) * h / 2;
    P = a + b + c + d;

    printf("Dien tich = %d\n", S);
    printf("Chu vi = %d", P);

    return 0;
}
