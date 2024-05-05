#include <stdio.h>
#include <string.h>
#define N 100

char *substring(char *strA, char *strB)
{
    char *subA = strA;
    for (int i = 0; strA[i]; i++)
    {
        char *substr = subA;
        char *subB = strB;
        while (*subB == *subA)
        {
            if (*subB == strB[strlen(strB) - 2])
            {
                return substr;
            }
            subB++;
            subA++;
        }
        subA++;
    }
    return NULL;
}

int main()
{
    char strA[N], strB[N / 2];
    printf("Введите строку: ");
    fgets(strA, sizeof(strA), stdin);
    printf("Введите подстроку для поиска: ");
    fgets(strB, sizeof(strB), stdin);

    char *substr = substring(strA, strB);
    printf("%ld\n", substr - strA + 1);
    return 0;
}