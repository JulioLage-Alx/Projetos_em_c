
#include <stdio.h>

int main()
{
    int comado, falso;
    int clase;
    int i;
    float lampadas, area;

    while (comado > 6 || comado <= 0 && area <= 0)
    {
        printf("Escolha o comado\n1)Quarto\n2)Sala de TV\n3)Sala Jantar\n4)Vranda\n5)escritorio\n6)Banheiro\n");
        scanf("%i", &comado);
        printf("Informe sua area\n");
        scanf("%f", &area);
        if (comado > 6 || comado <= 0)
            printf("opcao escolhida invalida ");
        if (area <= 0)
            printf("area nao definida");
    }

    if (comado == 1 || comado == 2 || comado == 4)
    {

        clase = 1;
        printf(" e a classe e %i", clase);
        lampadas = area / 3;
        if (lampadas < 1)
        {
            lampadas == 1;
            printf("O numero de lampadas e %i", (int)lampadas);
        }
        else
            printf("O numero de lampadas e %i", (int)lampadas);
        return 0;
    }
    if (comado == 3 || comado == 6)
    {
        clase = 4;
        printf(" e a classe e %i", clase);
        lampadas = area / 3;
        if (lampadas < 1)
        {
            lampadas == 1;
            printf("O numero de lampadas e %i", (int)lampadas);
        }
        else
            printf("O numero de lampadas e %i", (int)lampadas);
        return 0;
    }
    if (comado == 5)
    {
        clase = 3;
        printf(" e a classe e %i", clase);
        lampadas = area / 3;
        if (lampadas < 1)
        {
            lampadas == 1;
            printf("O numero de lampadas e %i", (int)lampadas);
        }
        else
            printf("O numero de lampadas e %i", (int)lampadas);
        return 0;
    }

    return 0;
}
