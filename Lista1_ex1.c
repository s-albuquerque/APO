/**
    Fa�a um programa que conte de 1 at� 100 e a cada numero par
    (divis�vel por 2) imprima o resultado "� par" junto com o numero par.
**/

#include <stdio.h>
#include <locale.h>

main(){
        int CONT; /// declarando a variavel CONT
        setlocale(LC_ALL,"Portuguese");

        printf("\n Programa que conta de 1 at� 100 e a cada n�mero par (divis�vel por 2) \n imprime o resultado \"� par\" junto com o n�mero par.\n\n");

        CONT = 1; /// valor inicial da variavel

        while(CONT <= 100){ /// iniciando o la�o, verificando se a variavel CONT � menor ou igual a 100
            if (CONT % 2 == 0){ /// verificando os n�meros pares
                    printf(" \"� par\" -"); /// imprimindo quais s�o os numeros paress
            }
            printf("  %d", CONT); /// imprimindo quais s�o os numeros pares
            printf("\n\n");
            CONT++; /// incremento do la�o wile para verificar at� que CONT seja igual a 100
        }
}
