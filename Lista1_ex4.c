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
                printf(" \"Pesos Prováveis:\" \n\n  Meninos - de 8.5 kg a 12.5 kg. \n  Meninas - de 7.5 kg a 11.5 kg.\n");
        break; /// informando que mais nenhuma verificação precisa ser processada
        case 2: /// caso o valor verificado seja 2, o que está no case 2 será impresso
                printf(" \"Pesos Prováveis:\" \n\n  Meninos - de 10.1 kg a 15.2 kg. \n  Meninas - de 9.8 kg a 14.5 kg.\n");
        break;  /// informando que mais nenhuma verificação precisa ser processada
        case 3: /// caso o valor verificado seja 3, o que está no case 3 será impresso
                printf(" \"Pesos Prováveis:\" \n\n  Meninos - de 11.7 kg a 18 kg. \n  Meninas - de 11.4 kg a 17.9 kg.\n");
        break; /// informando que mais nenhuma verificação precisa ser processada
        default: /// condição de padrão caso o valor digitado seja uma opção invalida
            system("cls");
            printf("\n \"Idade Inválida!\" \n\n");
            main(); /// retornando ao menu principal
        break; /// finalizando o switch
        }
}
