#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <string.h>
#define N 101

typedef struct
{
    int difficulty;
    int time;
    int number_sequence[N];
    char awnser[N];
    int number_awnser[N];
} Genius;