
#include <stdio.h>

int main()
{
    int dai, rong;
    int S, P;

    printf("Nhap chieu dai: ");
    scanf("%d", &dai);

    printf("Nhap chieu rong: ");
    scanf("%d", &rong);

    S = dai * rong;
    P = (dai + rong) * 2;

    printf("Dien tich = %d\n", S);
    printf("Chu vi = %d", P);

    return 0;
}