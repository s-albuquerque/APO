/**
    Fa�a um programa que calcule o fatorial de um numero.
**/

#include <stdio.h>
#include <locale.h>
main(){
        setlocale(LC_ALL,"Portuguese");
        int RESP,CONT, FAT, N; /// declara��o das variaveis usadas no desenvolvimento do algoritmo
        RESP = 1;  /// atribuindo um valor inicial a variavel
        CONT = 1;  /// atribuindo um valor inicial a variavel
        FAT = 1;  /// atribuindo um valor inicial a variavel

        printf("\n Programa que calcula o fatorial de um numero digitado. \n\n");

        while(RESP != 0){ /// implementa��o do la�o While, para que ele verifique se a RESP � � igual a 0, e se for o la�o ser� encerrado
            printf("\n Digite o um numero a partir de 1, para calcularmos o seu fatorial: "); /// solicitando o valor do numero para verificar o seu fatorial
            scanf("%d", &N); /// atribuindo o valor digitado para a variavel N
            while( N > 1){ /// verificando se a variavel N � maior que 1
             FAT = FAT * N; /// fazendo a conta para dar o resultado final do numero fatorial
             printf("\n %d! = %d \n", N, FAT); /// imprimindo os resultados do fatorial
             N--; /// decremento da variavel N para que a conta do fatorial seja finalizada
            }
            CONT++; /// incremento do primeiro la�o, caso o usuario deseje utilizar o programa para verificar mais de uma vez um numero fatorial
            printf("\n Digite 0 para sair ou 1 para continuar: "); /// perguntando se o  usuario deseja continuar verificando ou �
            scanf("%d", &RESP); /// atribuindo a resposta do usuario a variavel RESP
            printf("\n");
            while(RESP != 1 && RESP != 0){
                printf(" Alternativa invalida!!! Tente novamente");
                printf("\n Digite 0 para sair ou 1 para continuar: "); /// perguntando se o  usuario deseja continuar verificando ou �
                scanf("%d", &RESP); /// atribuindo a resposta do usuario a variavel RESP

            }

            FAT = 1;
        }
}

