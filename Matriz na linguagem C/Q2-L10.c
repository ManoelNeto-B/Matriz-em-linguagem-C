/*2. Faça um programa que solicita e armazena seis números inteiros em uma
matriz 2 x 3, denominada de A, e solicita e armazena seis números inteiros em outra
matriz 2 x 3, denominada de B. Em seguida, exiba a soma dessas matrizes.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int A[2][3], B[2][3];
    int x, y, i = 1;

    for (x = 0; x < 2; x++)
    {
        for (y = 0; y < 3; y++)
        {
            printf("\nInforme o %i° valor inteiro da Matriz A: ", i++);
            scanf("%i", &A[x][y]);
        }
    }

    for (x = 0; x < 2; x++)
    {
        for (y = 0; y < 3; y++)
        {

            printf("\nInforme o %iº valor inteiro da Matriz B: ", i++);
            scanf("%i", &B[x][y]);
        }
    }

    for (x = 0; x < 2; x++)
    {
        for (y = 0; y < 3; y++)
        {
            printf("%i\t", A[x][y] + B[x][y]);
        }
        printf("\n");
    }

    return (0);
}
