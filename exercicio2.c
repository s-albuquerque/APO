/**
    O algoritmo deve ler dois números e um dos símbolos das
    operações: +, -, * e /. Imprimir o resultado da operação efetuada sobre os
    números lidos.
**/

#include <stdio.h>
#include <locale.h>

main(){
    int N1, N2, R;
    char OP;
    setlocale(LC_ALL,"Portuguese");

    printf("\n O algoritmo deve ler dois números e um dos símbolos das operações: \n \"+, -, * e /\". Imprimir o resultado da operação efetuada sobre os \n números lidos.\n\n");

    printf(" Digite o 1° numero: ");
    scanf("%d", &N1);
    printf("\n");

    printf(" Digite o 2° numero: ");
    scanf("%d", &N2);
    printf("\n");
    fflush(stdin);

    printf(" Opções de operação: \n");
    printf(" \"Soma = +\" \n \"Subtração = -\" \n \"Multiplicação = *\" \n \"Divisão = /\" \n\n");
    printf(" Digite a operação desejada: ");
    scanf("%c",&OP);

     switch (OP){
         case '+':
                R = N1 + N2;
         break;
         case '-':
                R = N1 - N2;
         break;
         case '*':
                R = N1 * N2;
         break;
         case '/':
                R = N1 / N2;
         break;
         default:
                system("cls");
                printf("\n \"Opção inválida!!!\" \n\n");
                main();
        break;
     }

     printf("\n A \"\%c\", dos dois numeros é: %d \n\n", OP, R);
}
