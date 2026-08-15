#include <stdio.h>

int main()
{
    char kitu;
    int ma;

    printf("Nhap ky tu: ");
    scanf_s("%c", &kitu);

    ma = kitu;

    printf("Ma ASCII = %d\n", ma);
    printf("Ky tu truoc = %c\n", ma - 1);
    printf("Ky tu sau = %c", ma + 1);

    return 0;
}
