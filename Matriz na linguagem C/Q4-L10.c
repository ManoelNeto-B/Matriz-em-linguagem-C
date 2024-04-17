/*4. Elabore programa que solicita e armazena oito números reais em uma matriz 4 × 2,
denominada de A. Construa outra matriz, denominada de B, do mesmo tipo e
tamanho de A, e com os mesmos elementos armazenados em A, porém de forma
invertida. Ou seja, o primeiro elemento de A passa a ser o último de B, o segundo
elemento de A passa a ser o penúltimo de B e assim por diante. Ao final, o
programa deve exibir o conteúdo de A e B.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float A[4][2], B[4][2];
    int x, y, i = 1;

    printf("Informe os valores referentes da matriz A: \n");

    for (x = 0; x < 4; x++)
    {
        for (y = 0; y < 2; y++)
        {
            printf("\ninforme o %iº valor :  ", i++);
            scanf("%f", &A[x][y]);
        }
    }

    for (x = 0; x < 4; x++)
    {
        for (y = 0; y < 2; y++)
        {
            B[x][y] = A[3 - x][1 - y];
        }
    }

    printf("\nMATRIZ A\n");

    for (x = 0; x < 4; x++)
    {
        for (y = 0; y < 2; y++)
        {

            printf("%.1f  ", A[x][y]);
        }
        printf("\n");
    }

    printf("\nMATRIZ B\n");

    for (x = 0; x < 4; x++)
    {
        for (y = 0; y < 2; y++)
        {

            printf("%.1f  ", B[x][y]);
        }
        printf("\n");
    }

    return (0);
}
