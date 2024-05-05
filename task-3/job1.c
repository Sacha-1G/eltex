#include <stdio.h>

int main()
{
    int integer;
    scanf("%d", &integer);
    int *ch = &integer;
    char *c = (char*)ch;

    for (int i = sizeof(integer) * 8; i > 0; i--)
    {
        if((i % 8) == 0) {
            printf(" ");
        }
        printf("%d", integer >> (i - 1) & 1);
    }
    printf("\n");

    printf("Введите число для замены 3 байта: ");
    int value;
    scanf("%d", &value);
    c[2] = (char)value;
    for (int i = sizeof(integer) * 8; i > 0; i--)
    {
        if((i % 8) == 0) {
            printf(" ");
        }
        printf("%d", integer >> (i - 1) & 1);
    }
    printf("\n");

    return 0;
}