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
}