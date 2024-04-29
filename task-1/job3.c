#include <stdio.h>

int main()
{
    int integer;
    scanf("%d", &integer);
    int ones = 0;
    for (int i = sizeof(integer) * 8; i > 0; i--)
    {

        printf("%d", integer >> (i - 1) & 1);
        if ((integer >> (i - 1) & 1) == 1)
        {
            ones++;
        }
    }
    printf("\n");
    printf("количество единиц - %d\n", ones);
}