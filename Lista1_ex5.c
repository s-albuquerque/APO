/**
    Programa que l� um determinado numero de idade de N pessoas, e depois
    diz de acordo com as idades digitadas,
    quantas pessoas s�o maiores de 50 anos e quantas s�o menores que 21.
**/

#include <stdio.h>
#include <locale.h>

main(){
        int CONT=0, IDADE=0, IDADE21=0, IDADE50=0;; /// declarando as vari�veis inicias, e atribuindo o valor 0 para elas
        char SAIR = 'O'; /// declarando a variavel SAIR e atribuindo o caracter 'O' a ela
        setlocale(LC_ALL,"Portuguese");

        printf("\n Programa que l� um determinado numero de idade de N pessoas, e depois \n diz de acordo com as idades digitadas, quantas pessoas s�o maiores de \n 50 anos e quantas s�o menores que 21. \n\n");

        printf(" Digite N para sair. \n\n"); /// informando para o usuario digitar 0 para sair do programa

        while(SAIR != 'N' && SAIR != 'n'){ /// iniciando o la�o com uma condi��o para verificar se ele � verdadeiro e n�o sendo ele inicia o la�o
                    printf(" Digite a %d idade: ", CONT+1);
                    scanf("%d", &IDADE);

                    if(IDADE < 21){ /// usando o IF para verificar qual idade maior e menor.
                            IDADE21 == IDADE21++; /// incrementa��o para guardar os dados na vari�vel IDADE20.
                    }else if(IDADE > 50){
                            IDADE50 == IDADE50++; /// incrementa��o para guardar os dados na vari�vel IDADE50.
                    }

            CONT++;   /// incrementa��o
            scanf("%c", &SAIR); ///lendo se SAIR � igual a "n/N"
         }

        printf("\n O total de pessoas que tem menos de 21 anos �: %d \n",IDADE21); /// imprimindo o resultado das verifica��es, no caso informando qual o menor
        printf("\n O total de pessoas que tem mais de 50 anos �: %d \n",IDADE50);  /// imprimindo o resultado das verifica��es, no caso informando qual o maior

}
