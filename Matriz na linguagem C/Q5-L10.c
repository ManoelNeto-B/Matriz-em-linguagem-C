/*5. Crie um programa que solicita e armazena n × m números inteiros em uma matriz n
× m, denominada de A, onde n e m também devem ser fornecidos pelo usuário.
Construa outra matriz, denominada de B, do mesmo tipo e tamanho de A, onde cada
elemento de B deve ser definido pela multiplicação do elemento correspondente de
A por 3, ou seja, B[i][j] deve ser igual a A[i][j] * 3, onde i e j correspondem aos
índices das matrizes. Dessa forma, se A = [
3 2 1
4 0 5
8 6 9
], teremos B = [
9 6 3
12 0 15
24 18 27
].
Ao final, o programa deve exibir o conteúdo de A e B.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int l, c;
    int x, y, i = 1;

    printf("digite a quantidade de linhas  da matriz A:\n");
    scanf("%i", &l);

    printf("\ndigite a quantidade de colunas da matriz A:\n");
    scanf("%i", &c);

    int A[l][c], B[l][c];

    printf("Informe os valores referentes a matriz A: \n");

    for (x = 0; x < l; x++)
    {
        for (y = 0; y < c; y++)
        {
            printf("informe o %iº\n", i++);
            scanf("%i", &A[x][y]);
        }
    }

    for (x = 0; x < l; x++)
    {
        for (y = 0; y < c; y++)
        {
            B[x][y] = A[x][y] * 3;
        }
    }

    printf("esses foram os valores armazenados na matriz A\n\n");

    for (x = 0; x < l; x++)
    {
        for (y = 0; y < c; y++)
        {
            printf(" %i\t", A[x][y]);
        }
        printf("\n");
    }

    printf("lembrando que a matriz B tera o triplo dos valores da matriz de A\n");
    printf("esses são os valores da matriz de B\n");

    for (x = 0; x < l; x++)
    {
        for (y = 0; y < c; y++)
        {
            printf(" %i\t", B[x][y]);
        }
        printf("\n");
    }

    return (0);
}