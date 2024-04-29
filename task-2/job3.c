#include <stdio.h>
#include <stdbool.h>

int main()
{
    int N = 0;
    scanf("%d", &N);
    int array[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - i; j++)
        {
            array[i][j] = 1;
        }
        for (int f = 0; f <= i; f++)
        {
            array[i][N - f] = 0;
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}