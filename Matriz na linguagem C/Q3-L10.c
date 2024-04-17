/*3. Elabore um programa que solicita e armazena o nome e três notas de cinco alunos
em uma matriz 5 x 3. Por fim, o programa deve exibir uma mensagem com o nome
e a média aritmética de cada aluno.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    float nota[5][3], m[5], soma = 0;
    char nome[5][30];
    int x, y, i = 1;

    for (x = 0; x < 5; x++)
    {
        printf("digite o nome do %iº aluno :  \n", i++);
        gets(nome[x]);
    }

    for (x = 0; x < 5; x++)
    {
        for (y = 0; y < 3; y++)
        {
            i = 1;
            printf("\ndigite %iª nota:  ", i++);
            scanf("%f", nota[x][y]);
        }
    }
    return (0);
}
