#include <stdio.h>
#include <stdbool.h>

int main()
{
    int N = 0;
    printf("Введите количество элементов: ");
    scanf("%d", &N);
    int array[N];
    for (int i = 0; i < N; i++)
    {
        int a;
        printf("Элемент %d: ", i + 1);
        scanf("%d", &a);
        array[i] = a;
    }

    for (int i = N - 1; i >= 0; i--)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}