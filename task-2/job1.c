#include <stdio.h>
#include <stdbool.h>

int main()
{
    int N = 0;
    int a = 1;
    scanf("%d", &N);
    int array[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            array[i][j] = a;
            a++;
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d\t ", array[i][j]);
        }
        printf("\n\v");
    }
}