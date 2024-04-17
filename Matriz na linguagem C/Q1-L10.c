/*1. Crie um programa que solicita e armazena nove valores inteiros em uma
matriz 3 x 3. Em seguida, exiba os elementos da matriz na ordem inversa.*/

#include<stdio.h>
#include<locale.h>

int main () {
    setlocale("LC_ALL", "Portuguese");

    int i, j, x = 1 , met [3] [3];

    for ( i = 0 ; i < 3 ; i ++ ) {
        for ( j = 0 ; j < 3 ; j ++ ) {
            printf("Digite o %iº valor inteiro:  ", x++);
            scanf("%i", &met [i] [j]);
        }
    }

    printf ("\n Matriz \n");
    for ( i = 2 ; i >= 0 ; i --) {
        for ( j = 2 ; j >= 0 ; j --) {
            printf("%i       ", met [i] [j]);
        }
        printf("\n");
    }
    return (0);
}