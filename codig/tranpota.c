#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // DECLARAÇÃO DE VARIAVEIS
    int **p, **l;
    int i, j, k, N;
    // DETERMINANDO O VALOR DA MATRIZ
    printf("entre com o valor da matriz quadratica\t");
    scanf("%d", &N);
    // DETERMINANDO O TAMANHO DA MATRIZ
    p = (int **)calloc(N, sizeof(int *));
    // INSERINDO DADOS NA MATRIZ
    for (i = 0; i < N; i++)
    {
        // DETERMINANDO O NUMERO DE COLUNAS
        p[i] = (int *)calloc(N, sizeof(int));
        for (j = 0; j < N; j++)
        {
            printf("Insira a posicao %d %d da matriz\n", i, j);
            scanf("%d", &p[i][j]);
        }
    }
    printf("\n");
    l = (int **)calloc(N, sizeof(int *));
    // TRANSPOTANDO A MATRIZ
    for (i = 0; i < N; i++)
    {
        l[i] = (int *)calloc(N, sizeof(int));
        for (k = 0; k < N; k++)
        {
            l[i][k] = p[k][i];
        }
    }
    // IMPRIMINDO A PRIMEIRA MATRIZ
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%d\t", p[i][j]);
        }
        printf("\n\n");
    }
    // IMPRIMINDO A MATRIZ TRANSPOTADA
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%d\t", l[i][j]);
        }
        printf("\n");
    }
    // LIBERANDO MEMORIA
    for (i = 0; i < N; i++)
    {

        free(p[i]);
        free(l[i]);
    }
    free(p);
    free(l);
}