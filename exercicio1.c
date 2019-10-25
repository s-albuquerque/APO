/**
    O programa que recebe do teclado o nome e as 3 notas de um
    aluno. Calcular a média aritmética do aluno exibir. Atribuir o resultado de
    acordo com a tabela abaixo.
        Média Resultado:
        0 a 2,9 Reprovado
        3 a 5,9 Recuperação
        6 a 10,0 Aprovado
**/

#include <stdio.h>
#include <locale.h>

main(){
    char NOME[20];
    float N1, N2, N3, M;
    setlocale(LC_ALL,"Portuguese");

    printf("\n O programa que recebe do teclado o nome e as 3 notas de um aluno. Calcular \n a média aritmética do aluno exibir. Atribuir o resultado de acordo com a \n tabela abaixo. \n\n");
    printf(" Média Resultado: \n \"0 a 2,9 Reprovado\" \n \"3 a 5,9 Recuperação\" \n \"6 a 10,0 Aprovado\"\n\n");

    printf(" Digite o seu nome: ");
    scanf("%s", &NOME);
    printf("\n");

    printf(" Digite sua 1° nota: ");
    scanf("%f", &N1);
    printf("\n");

    printf(" Digite sua 2° nota: ");
    scanf("%f", &N2);
    printf("\n");

    printf(" Digite sua 3° nota: ");
    scanf("%f", &N3);
    printf("\n");

    M = (N1 + N2 + N3) / 3;

    if (M <= 2.9){
     printf(" Aluno Reprovado \n\n");
    }else if (M >=3 && (M <= 5.9)){
     printf(" Aluno em Recuperacão \n\n");
    } else if (M >= 6){
     printf(" Aluno Aprovado \n\n");
    }

}
