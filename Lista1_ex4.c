/**
    Programa que l� a idade de uma crian�a e diz quais s�o os pesos provaveis para
    cada idade, considerando as idades de 1 ano, 2 anos e 3 ano.
**/

#include <stdio.h>
#include <locale.h>

main(){
        int IDADE; /// Variavel que recebera a idade da crian�a.
        setlocale(LC_ALL,"Portuguese");

        printf("\n Programa que l� a idade de uma crian�a e diz quais s�o os pesos provaveis \n para cada idade, considerando as idades de 1 ano, 2 anos e 3 ano. \n\n");

        printf(" Pesos prov�veis para crian�as de acordo com as idades\n\n");
        printf(" Considere as seguintes idades\n\n");
        printf(" Bebes de 1 ano - 2 anos - 3 anos\n\n");
        printf(" vamos l� \n\n");
        printf(" a idade do bebe �: (1) ano - (2) anos - (3) anos: "); /// solicitando a digita��o da idade da crian�a
        scanf("%d",&IDADE); /// atribuindo o valor recebido para a variavel IDADE


        printf("\n");
        switch(IDADE){ /// lendo o valor da variavel. Usamos o switch para verificar qual foi a idade digitada para depois passar as informa��es corretas para cada idade.
        case 1: /// caso o valor verificado seja 1, o que est� no case 1 ser� impresso
                printf(" \"PESOS PROV�VEIS:\" \n\n  MENINOS - DE 8.5 KG A 12.5 KG. \n  MENINAS - DE 7.5 KG A 11.5 KG.\n");
        break; /// informando que mais nenhuma verifica��o precisa ser processada
        case 2: /// caso o valor verificado seja 2, o que est� no case 2 ser� impresso
                printf(" \"PESOS PROV�VEIS:\" \n\n  MENINOS - DE 10.1 KG A 15.2 KG. \n  MENINAS - DE 9.8 KG A 14.5 KG.\n");
        break;  /// informando que mais nenhuma verifica��o precisa ser processada
        case 3: /// caso o valor verificado seja 3, o que est� no case 3 ser� impresso
                printf(" \"PESOS PROV�VEIS:\" \n\n  MENINOS - DE 11.7 KG A 18 KG. \n  MENINAS - DE 11.4 KG A 17.9 KG.\n");
        break; /// informando que mais nenhuma verifica��o precisa ser processada
        default: /// condi��o de padr�o caso o valor digitado seja uma op��o invalida
            system("cls");
            printf("\n \"IDADE INVALIDA!\" \n\n");
            main(); /// retornando ao menu principal
        break; /// finalizando o switch
        }
}
