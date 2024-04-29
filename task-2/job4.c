#include <stdio.h>
#include <stdbool.h>

int main()
{
    int N = 0;
    scanf("%d", &N);
    int array[N][N];
    int check = 1;
    int counter = 1;
    for (int i = 0; i < N; i++)
    {
        array[0][i] = counter;
        counter++;
    }
    for (int i = 1; i < N; i++)
    {
        if (!(i % 2 == 0))
        {
            for (int j = check; j < N - check; j++)
            {
                array[j][N - check] = counter;
                counter++;
            }
            for (int j = N - check; j >= check - 1; j--)
            {
                array[N - check][j] = counter;
                counter++;
            }
        }
        else
        {
            for (int j = N - check - 1; j > check; j--)
            {
                array[j][check - 1] = counter;
                counter++;
            }
            for (int j = check; j <= N - check; j++)
            {
                array[check][j - 1] = counter;
                counter++;
            }
            check++;
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