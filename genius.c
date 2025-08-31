#include "genius.h"

void introduction(Genius *v)
{
    printf("========/Welcome to Genius/========\n");
    printf("What difficulty would you like to play?\n");
    printf("Press 1 for easy.\nPress 2 for medium.\nPress 3 for hard.\n");
    scanf("%d", &v->difficulty);
    while (getchar() != '\n')
        ; // limpa o buffer até o '\n'

    if (v->difficulty == 1)
    {
        v->time = 2000;
    }
    else if (v->difficulty == 2)
    {
        v->time = 1500;
    }
    else if (v->difficulty == 3)
    {
        v->time = 1000;
    }
    else
    {
        exit(1);
    }
}

void number_sequence(Genius *v)
{
    int i;
    for (i = 0; i < N; i++)
    {
        v->number_sequence[i] = (rand() % 4) + 1;
    }
}

void game(Genius *v)
{
    int i, j, k, n;

    system("cls");

    for (i = 0; i < N; i++)
    {
        printf("Phase %d:\n", i + 1);
        for (j = 0; j <= i; j++)
        {
            printf("%d", v->number_sequence[j]);
            Sleep(v->time);
            printf("\r");
            printf(" ");
            Sleep(500);
            printf("\r");
        }
        system("cls");

        printf("Your awnser:\n");

        fgets(v->awnser, sizeof(v->awnser), stdin);
        v->awnser[strcspn(v->awnser, "\n")] = '\0';

        int count = 0;
        char *ptr = v->awnser;

        while (sscanf(ptr, "%d", &n) == 1)
        {
            v->number_awnser[count++] = n;

            while (*ptr != ' ' && *ptr != '\0')
            {
                ptr++;
            }
            if (*ptr == ' ')
            {
                ptr++;
            }
        }

        for (k = 0; k <= i; k++)
        {
            if (v->number_awnser[k] != v->number_sequence[k])
            {
                printf("You Lose!");
                exit(1);
            }
        }
        printf("Nice!");
        Sleep(2000);
        system("cls");
        memset(v->number_awnser, 0, sizeof(v->number_awnser));

        memset(v->awnser, 0, sizeof(v->awnser));
    }
}