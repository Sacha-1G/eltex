#include <stdio.h>

int main()
{
    int integer;
    scanf("%d", &integer);
    int ones = 0;
    for (int i = sizeof(integer) * 8; i > 0; i--)
    {
        if (integer > 0)
        {
            printf("%d", integer >> (i - 1) & 1);
            if ((integer >> (i - 1) & 1) == 1)
            {
                ones++;
            }
        }
        else
        {
            printf("%d", (~integer + 1) >> (i - 1) & 1);
        }
    }
    printf("\n");
    printf("количество единиц - %d\n", ones);
    if (integer > 0)
    {
        int integer2 = 0;
        __uint8_t a = 0;
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

    return 0;
}