/**
    Programa que lê a idade de uma criança e diz quais são os pesos provaveis para
    cada idade, considerando as idades de 1 ano, 2 anos e 3 ano.
**/

#include <stdio.h>
#include <locale.h>

main(){
        int IDADE; /// Variavel que recebera a idade da criança.
        setlocale(LC_ALL,"Portuguese");

        printf("\n Programa que lê a idade de uma criança e diz quais são os pesos provaveis \n para cada idade, considerando as idades de 1 ano, 2 anos e 3 ano. \n\n");

        printf(" Pesos prováveis para crianças de acordo com as idades\n\n");
        printf(" Considere as seguintes idades\n\n");
        printf(" Bebes de 1 ano - 2 anos - 3 anos\n\n");
        printf(" vamos lá \n\n");
        printf(" a idade do bebe é: (1) ano - (2) anos - (3) anos: "); /// solicitando a digitação da idade da criança
        scanf("%d",&IDADE); /// atribuindo o valor recebido para a variavel IDADE


        printf("\n");
        switch(IDADE){ /// lendo o valor da variavel. Usamos o switch para verificar qual foi a idade digitada para depois passar as informações corretas para cada idade.
        case 1: /// caso o valor verificado seja 1, o que está no case 1 será impresso
                printf(" \"PESOS PROVÁVEIS:\" \n\n  MENINOS - DE 8.5 KG A 12.5 KG. \n  MENINAS - DE 7.5 KG A 11.5 KG.\n");
        break; /// informando que mais nenhuma verificação precisa ser processada
        case 2: /// caso o valor verificado seja 2, o que está no case 2 será impresso
                printf(" \"PESOS PROVÁVEIS:\" \n\n  MENINOS - DE 10.1 KG A 15.2 KG. \n  MENINAS - DE 9.8 KG A 14.5 KG.\n");
        break;  /// informando que mais nenhuma verificação precisa ser processada
        case 3: /// caso o valor verificado seja 3, o que está no case 3 será impresso
                printf(" \"PESOS PROVÁVEIS:\" \n\n  MENINOS - DE 11.7 KG A 18 KG. \n  MENINAS - DE 11.4 KG A 17.9 KG.\n");
        break; /// informando que mais nenhuma verificação precisa ser processada
        default: /// condição de padrão caso o valor digitado seja uma opção invalida
            system("cls");
            printf("\n \"IDADE INVALIDA!\" \n\n");
            main(); /// retornando ao menu principal
        break; /// finalizando o switch
        }
}
