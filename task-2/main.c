#include <stdio.h>
#include <stdbool.h>

void task_1()
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

void task_2()
{
    int N = 0;
    printf("Введите количествво элементов: ");
    scanf("%d", &N);
    int array[N];
    for (int i = 0; i < N; i++)
    {
        int a;
        scanf("%d", &a);
        array[i] = a;
    }

    for (int i = N - 1; i >= 0; i--)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void task_3()
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

void task_4()
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

int main()
{
    // task_1();
    // printf("\n");
    // task_2();
    // printf("\n");
    // task_3();
    // printf("\n");
    task_4();
    return 0;
}