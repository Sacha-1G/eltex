#include <stdio.h>

int main()
{
    int integer;
    scanf("%d", &integer);
    for (int i = sizeof(integer) * 8; i > 0; i--)
    {
        printf("%d", integer >> (i - 1) & 1);
    }
    printf("\n");

    if (integer > 0)
    {
        int integer2 = 0;
        __uint8_t a = 0;
        printf("Введите число, для замены 3 байта: ");
        scanf("%hhd", &a);
        for (int i = sizeof(integer) * 8 - 16; i > 8; i--)
        {
            integer &= ~(1 << i);
        }
        for (int i = sizeof(integer) * 8 - 16; i > 8; i--)
        {
            integer2 = (a << (i - 25));
        }
        integer |= integer2;
        for (int i = sizeof(integer) * 8; i > 0; i--)
        {

            printf("%d", integer >> (i - 1) & 1);
        }
    }
    printf("\n");
}