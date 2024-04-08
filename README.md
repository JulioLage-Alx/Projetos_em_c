# Projetos em C: Matrizes, Arrays, Funções e Ponteiros

Este repositório contém uma coleção de projetos desenvolvidos em linguagem C, concentrando-se em conceitos-chave como matrizes, arrays, funções e ponteiros. Os projetos estão organizados de forma a demonstrar habilidades práticas e compreensão dos fundamentos da linguagem C, bem como sua aplicação em diferentes contextos.

## Estrutura do Repositório

O repositório está estruturado da seguinte maneira:

- **Projeto 1**: Este código em C gera um vetor de 10 elementos contendo números aleatórios no intervalo entre -5.0 e 20.0, em seguida, ordena esses números em ordem crescente usando o algoritmo de ordenação conhecido como Bubble Sort.

Aqui está uma descrição passo a passo do que o código faz:

-Inclui as bibliotecas necessárias: <stdio.h>, <stdlib.h> e <time.h>.
-Declara a função main() como ponto de entrada do programa.
-Declara um vetor de ponto flutuante vetor com 10 elementos.
-Declara variáveis auxiliares aux, a, b, r e tamanho.
-Define os valores de a e b como -5.0 e 20.0, respectivamente.
-Obtém o tamanho do vetor vetor.
-Semente o gerador de números aleatórios usando a função srand() com o tempo atual como semente.
-Preenche o vetor vetor com números aleatórios no intervalo de a a b usando o algoritmo de normalização para obter valores entre 0 e 1 e, em -seguida, escalona esses valores para o intervalo desejado.
-Imprime o vetor vetor antes da ordenação.
-Ordena o vetor vetor em ordem crescente usando o algoritmo Bubble Sort.
-Imprime o vetor vetor após a ordenação.

- **Projeto 2**:  Controle de Iluminação Residencial em C

Este é um programa em C para controle de iluminação residencial. Ele solicita ao usuário que escolha um comando correspondente a uma divisão da casa e informe a área dessa divisão. Com base nesses inputs, o programa calcula o número adequado de lâmpadas necessárias para iluminar a área.

## Funcionamento

O programa segue os seguintes passos:

1. Solicita ao usuário que escolha um comando correspondente a uma divisão da casa e informe a área dessa divisão.
2. Verifica se o comando escolhido está dentro dos valores válidos (de 1 a 6) e se a área informada é maior que 0. Se não forem válidos, o programa imprime uma mensagem de erro.
3. Se o comando estiver dentro dos valores válidos e a área for maior que 0, o programa continua.
4. Com base no comando escolhido, determina a classe da divisão (1, 3 ou 4) e calcula o número de lâmpadas necessárias. O cálculo é feito considerando que uma lâmpada é necessária para cada 3 metros quadrados da área.
5. Imprime o número de lâmpadas necessárias para iluminar a área da divisão específica.

## Uso

Para usar o programa, compile-o usando um compilador C e execute-o no terminal. Siga as instruções fornecidas para escolher o comando e informar a área da divisão da casa.

## Melhorias Futuras

- Implementar uma interface gráfica para facilitar a interação com o usuário.
- Adicionar suporte para outras divisões da casa e tipos de lâmpadas.

## Contribuição

Contribuições são bem-vindas! Se você deseja propor melhorias, corrigir bugs ou adicionar novos recursos, sinta-se à vontade para abrir uma issue ou enviar um pull request.

## Licença

Este programa é distribuído sob a [Licença MIT](LICENSE).

---

**Autor:** Júlio Lage


- **Projeto 3**: # Multiplicação de Matrizes em C

Este é um programa em C para multiplicação de matrizes. Ele solicita ao usuário que insira duas matrizes, realiza a multiplicação dessas matrizes e imprime o resultado.

## Funcionamento

O programa segue os seguintes passos:

1. Solicita ao usuário o tamanho desejado para a primeira matriz e aloca espaço de memória para armazená-la.
2. Preenche a primeira matriz com os valores fornecidos pelo usuário.
3. Solicita ao usuário o tamanho desejado para a segunda matriz e aloca espaço de memória para armazená-la.
4. Preenche a segunda matriz com os valores fornecidos pelo usuário.
5. Imprime as duas matrizes fornecidas pelo usuário.
6. Verifica se as matrizes podem ser multiplicadas, ou seja, se o número de colunas da primeira matriz é igual ao número de linhas da segunda matriz.
7. Se as matrizes puderem ser multiplicadas, aloca espaço de memória para a matriz resultante.
8. Realiza a multiplicação das duas matrizes e armazena o resultado na matriz resultante.
9. Imprime a matriz resultante da multiplicação.
10. Libera a memória alocada para todas as matrizes.

## Uso

Para usar o programa, compile-o usando um compilador C e execute-o no terminal. Siga as instruções fornecidas para inserir os valores das matrizes.

## Contribuição

Contribuições são bem-vindas! Se você deseja propor melhorias, corrigir bugs ou adicionar novos recursos, sinta-se à vontade para abrir uma issue ou enviar um pull request.

## Licença

Este programa é distribuído sob a [Licença MIT](LICENSE).

---

**Autor:** Júlio Lage


- **Projeto 4**:# Transposição de Matriz em C

Este é um programa em C para transposição de uma matriz quadrada. Ele solicita ao usuário que insira os elementos de uma matriz quadrada, realiza a transposição dessa matriz e imprime a matriz original e sua transposta.

## Funcionamento

O programa segue os seguintes passos:

1. Solicita ao usuário o valor da dimensão da matriz quadrada.
2. Aloca espaço de memória para armazenar a matriz original.
3. Preenche a matriz original com os valores fornecidos pelo usuário.
4. Aloca espaço de memória para armazenar a matriz transposta.
5. Realiza a transposição da matriz original e armazena o resultado na matriz transposta.
6. Imprime a matriz original e a matriz transposta.

## Uso

Para usar o programa, compile-o usando um compilador C e execute-o no terminal. Siga as instruções fornecidas para inserir os valores da matriz.

## Contribuição

Contribuições são bem-vindas! Se você deseja propor melhorias, corrigir bugs ou adicionar novos recursos, sinta-se à vontade para abrir uma issue ou enviar um pull request.

## Licença

Este programa é distribuído sob a [Licença MIT](LICENSE).

---

**Autor:** Júlio Lage


- **Projeto 5**:# Tipos de Dados em C

Este é um programa em C que ilustra o uso de diferentes tipos de dados e modificadores de tipo na linguagem C.

## Funcionamento

O programa demonstra o uso dos seguintes conceitos:

1. **typedef**: Define um nome alternativo para um tipo de dado existente. Neste exemplo, `ULINT` é definido como um alias para `unsigned long int`.

2. **Notação E**: A notação E é usada para representar números em notação científica. Por exemplo, `12.345E-2` é equivalente a `0.12345` e `12.345E2` é equivalente a `1234.5`.

3. **Tipos de Dados**: O programa utiliza diferentes tipos de dados, incluindo `double`, `unsigned int`, `unsigned char`, `long int` e `unsigned long int`.

4. **Modificadores de Tipo**: São usados modificadores como `unsigned`, `long`, `short` para modificar o comportamento e o armazenamento dos tipos de dados.

5. **register**: O modificador `register` instrui o compilador a manter a variável em um registrador sempre que possível, o que pode melhorar o desempenho em algumas situações.

## Uso

Para compilar e executar o programa, use um compilador C padrão. O programa imprime os valores das variáveis definidas no código.

## Contribuição

Contribuições são bem-vindas! Se você deseja propor melhorias, corrigir bugs ou adicionar novos recursos, sinta-se à vontade para abrir uma issue ou enviar um pull request.

## Licença

Este programa é distribuído sob a [Licença MIT](LICENSE).

---

**Autor:** Júlio Lage


- **Projeto 6**:# Geração e Ordenação de Números Aleatórios em C

Este é um programa em C que gera um vetor de números aleatórios dentro de um intervalo específico e, em seguida, ordena esses números em ordem crescente.

## Funcionamento

O programa segue os seguintes passos:

1. Inclui as bibliotecas `<stdio.h>`, `<stdlib.h>` e `<time.h>` para permitir a geração de números aleatórios.
2. Define um vetor de números em ponto flutuante `vetor` com 10 elementos.
3. Define variáveis auxiliares e limites `a` e `b` para representar o intervalo desejado para os números aleatórios.
4. Usa a função `srand()` para inicializar o gerador de números aleatórios com base no tempo atual.
5. Preenche o vetor `vetor` com números aleatórios dentro do intervalo especificado.
6. Imprime o vetor antes da ordenação.
7. Ordena o vetor usando o algoritmo de ordenação conhecido como Bubble Sort.
8. Imprime o vetor após a ordenação.

## Uso

Para compilar e executar o programa, use um compilador C padrão. O programa imprimirá o vetor antes e depois da ordenação.

## Contribuição

Contribuições são bem-vindas! Se você deseja propor melhorias, corrigir bugs ou adicionar novos recursos, sinta-se à vontade para abrir uma issue ou enviar um pull request.

## Licença

Este programa é distribuído sob a [Licença MIT](LICENSE).

---

**Autor:** Julio Lage



## Como Utilizar

Cada projeto está contido em seu próprio diretório e inclui um conjunto de arquivos fonte (`.c`) e, quando aplicável, arquivos de cabeçalho (`.h`). Para compilar e executar os projetos, siga estas etapas:

1. Clone este repositório para o seu ambiente local:

 

2. Navegue até o diretório do projeto desejado:

cd PROJETO_EM_C


3. Compile o código-fonte usando um compilador C, por exemplo, GCC:

gcc -o main main.c funcoes.c -lm


4. Execute o programa gerado:


Certifique-se de substituir `main` pelo nome do executável gerado e `funcoes.c` pelo nome do arquivo que contém as funções, se aplicável.

## Contribuições

Contribuições para este repositório são bem-vindas. Se você deseja propor melhorias em projetos existentes, adicionar novos projetos ou corrigir bugs, sinta-se à vontade para abrir um pull request.

Antes de enviar uma solicitação de pull, certifique-se de seguir estas diretrizes:

- Descreva claramente as mudanças propostas.
- Verifique se o código está devidamente comentado e segue as melhores práticas.
- Teste as alterações localmente para garantir que funcionem conforme o esperado.

## Licença

Este repositório está licenciado sob a [Licença MIT](https://opensource.org/licenses/MIT). Sinta-se à vontade para usar, modificar e distribuir o código conforme necessário.

