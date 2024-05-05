#include <stdio.h>
#include <string.h>
#include <unistd.h>
#define N 100

struct abonent
{
    char name[10];
    char second_name[10];
    char tel[10];
};

void print_menu()
{
    printf("\033[0d\033[2J1) Добавить абонента\n");
    printf("2) Удалить абонента\n");
    printf("3) Поиск абонентов по имени\n");
    printf("4) Вывод всех записей\n");
    printf("5) Выход\n");
}

int main()
{
    struct abonent abonents[N];
    memset(abonents, 0, sizeof(abonents));
    int count_abonents = 0;
    while (1)
    {
        print_menu();
        int flag = 0;
        scanf("%d", &flag);
        switch (flag)
        {
        case 1:
            if (count_abonents < 100)
            {
                for (int i = 0; i < N; i++)
                {
                    if (!strlen(abonents[i].name))
                    {
                        printf("\033[0d\033[2JВведите имя абонента: ");
                        scanf("%s", abonents[i].name);
                        printf("Введите фамилию абонента: ");
                        scanf("%s", abonents[i].second_name);
                        printf("Введите номер телефона абонента: +7");
                        scanf("%s", abonents[i].tel);
                        printf("Абонент добавлен!\n");
                        sleep(2);
                        count_abonents++;
                        break;
                    }
                }
            }
            else
            {
                printf("Справичник переполнен!\n");
                sleep(2);
            }
            break;

        case 2:
            printf("\033[0d\033[2JВведите имя абонента, которого хотите удалить: ");
            int delete = 0;
            char delete_abonent[10];
            scanf("%s", delete_abonent);
            printf("\033[0d\033[2J");
            for (int i = 0; i < N; i++)
            {
                if (!strncmp(abonents[i].name, delete_abonent, strlen(delete_abonent)))
                {
                    delete ++;
                    printf("%d) %s %s %s\n", i, abonents[i].name, abonents[i].second_name, abonents[i].tel);
                }
            }
            if (delete > 0)
            {
                printf("Ввведите номер абонента, которого нужно удалить: ");
                while (1)
                {
                    scanf("%d", &delete);
                    if (!strncmp(abonents[delete].name, delete_abonent, strlen(delete_abonent)))
                    {
                        memset(&abonents[delete], 0, sizeof(abonents[delete]));
                        printf("Абонент удален!\n");
                        sleep(2);
                        break;
                    }
                    else
                    {
                        printf("Вы вели неверный номер!\n");
                        sleep(2);
                    }
                }
                break;
            }
            else
            {
                printf("Такого пользователя не существвует!\n");
                sleep(2);
            }
            break;

        case 3:
            printf("\033[0d\033[2JВведите имя абонента: ");
            int names = 0;
            char abonent_name[10];
            scanf("%s", abonent_name);
            for (int i = 0; i < N; i++)
            {
                if (!strncmp(abonents[i].name, abonent_name, strlen(abonent_name)))
                {
                    names++;
                    printf("%d) %s %s %s\n", names, abonents[i].name, abonents[i].second_name, abonents[i].tel);
                }
            }
            printf("Нажмите клавишу, чтобы ввернуться назад\n");
            scanf("%s", abonent_name);
            break;

        case 4:
            printf("\033[0d\033[2JВсе абоненты: \n");
            for (int i = 0; i < N; i++)
            {
                if (strlen(abonents[i].name))
                {
                    printf("%d) %s %s %s\n", i, abonents[i].name, abonents[i].second_name, abonents[i].tel);
                }
            }
            printf("Нажмите клавишу, чтобы ввернуться назад\n");
            scanf("%s", abonent_name);
            break;

        case 5:
            return 0;

        default:
            break;
        }
    }
    return 0;
}