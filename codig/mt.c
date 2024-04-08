#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int **p;
    int **p1;
    int **p3;
    int i, j, k, T;
    int N;
    printf("Qual o tamnho desejado da matriz\n");
    scanf("%d", &N);
    p = (int **)malloc(N * sizeof(int *));
    for (i = 0; i < N; i++)
    {
        p[i] = (int *)malloc(N * sizeof(int));
        for (j = 0; j < N; j++)
        {
            printf("Insira as posicaoes da matriz um posica:%d %d\n", i, j);
            scanf("%d", &p[i][j]);
        }
    }

    printf("Qual o tamnho desejado da segunda matriz\n");
    scanf("%d", &T);
    p1 = (int **)malloc(T * sizeof(int *));
    for (i = 0; i < T; i++)
    {
        p1[i] = (int *)malloc(T * sizeof(int));

        for (j = 0; j < T; j++)
        {
            printf("Insira as posicaoes da matriz um posica:%d %d\n", i, j);
            scanf("%d", &p1[i][j]);
        }
    }

    printf("A Primeira matariz\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%d\t", p[i][j]);
        }
        printf("\n");
    }
    printf("A Segunda matariz\n");
    for (i = 0; i < T; i++)
    {
        for (j = 0; j < T; j++)
        {
            printf("%d\t", p1[i][j]);
        }
        printf("\n\n");
    }

    if (N==T)
    {
        printf("A Mutiplicacao das matrizes e:\n");
        p3 = (int **)calloc(N, sizeof(int *));
        for (i = 0; i < N; i++)
        {
            p3[i] = (int *)calloc(N, sizeof(int));

            for (j = 0; j < N; j++)
            {
                for (k = 0; k < N; k++)
                {
                    p3[i][j] = p3[i][j] + p[i][k] * p1[k][j];
                }
            }
        }
        for (i = 0; i < N; i++)
        {
            for (j = 0; j < N; j++)
            {
                printf("%d\t", p3[i][j]);
            }
            printf("\n");
        }
        for (i = 0; i < N; i++)
        {
            free(p3[i]);
        }
        free(p3);
    }

    for (i = 0; i < N; i++)
    {
        free(p[i]);
        free(p1[i]);
    }
    free(p);
    free(p1);
}
