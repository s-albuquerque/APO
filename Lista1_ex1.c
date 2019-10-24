/**
    Faça um programa que conte de 1 até 100 e a cada numero par
    (divisível por 2) imprima o resultado "é par" junto com o numero par.
**/

#include <stdio.h>
#include <locale.h>

main(){
        int CONT; /// declarando a variavel CONT
        setlocale(LC_ALL,"Portuguese");

        printf("\n Programa que conta de 1 até 100 e a cada número par (divisível por 2) \n imprime o resultado \"é par\" junto com o número par.\n\n");

        CONT = 1; /// valor inicial da variavel

        while(CONT <= 100){ /// iniciando o laço, verificando se a variavel CONT é menor ou igual a 100
            if (CONT % 2 == 0){ /// verificando os números pares
                    printf(" \"é par\" -"); /// imprimindo quais são os numeros paress
            }
            printf("  %d", CONT); /// imprimindo quais são os numeros pares
            printf("\n\n");
            CONT++; /// incremento do laço wile para verificar até que CONT seja igual a 100
        }
}
