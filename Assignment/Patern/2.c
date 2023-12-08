#include<stdio.h>
int i, j;
    for (int i = 0; i <= 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c ", j + 97);
        }
        printf("\n");
    }
