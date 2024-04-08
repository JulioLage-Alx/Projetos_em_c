#include <stdio.h>

int main(void)
{
    // typedef voce pode definir o nome de qual quer tipo nesse exemplo (ULINT) a uma declaração
    typedef unsigned long int ULINT;

    // a funçao E2 volta com a vigula 2 casas decimais e E-2 volta com a virgula duas casas decimais
    double raio = 12.345E-2;
    double raio2 = 0.12345;
    double raio3 = 12.345E2;

    printf("%lf %lf", raio2, raio);

    // UNSIGNED mostrara somente valores positivos de 0 a 65.535 para int e de 0 a 255 para char
    unsigned int numero_da_casa = 234;
    unsigned char nome_do_morador;

    // long espande ainda mais a capcidade de amazenamento na memoria
    long int casa;

    // unsigned long int pode armazenar variaveis de  0 a 4.292.967.265
    unsigned long int quantidade_de_casas;

    // register instrui o compilador a manter a variavel em um resgistrador sempre que for posivel

    register int contador;
    register unsigned sinalizador;

    // short pra manter um padrao de 16 bits

    short valor_pequeno;

    // tanto o short,long e UNSIGNED podemos omtir o int
}