/**
    O algoritmo deve ler dois n�meros e um dos s�mbolos das
    opera��es: +, -, * e /. Imprimir o resultado da opera��o efetuada sobre os
    n�meros lidos.
**/

#include <stdio.h>
#include <locale.h>

main(){
    int N1, N2, R;
    char OP;
    setlocale(LC_ALL,"Portuguese");

    printf("\n O algoritmo deve ler dois n�meros e um dos s�mbolos das opera��es: \n \"+, -, * e /\". Imprimir o resultado da opera��o efetuada sobre os \n n�meros lidos.\n\n");

    printf(" Digite o 1� numero: ");
    scanf("%d", &N1);
    printf("\n");

    printf(" Digite o 2� numero: ");
    scanf("%d", &N2);
    printf("\n");
    fflush(stdin);

    printf(" Op��es de opera��o: \n");
    printf(" \"Soma = +\" \n \"Subtra��o = -\" \n \"Multiplica��o = *\" \n \"Divis�o = /\" \n\n");
    printf(" Digite a opera��o desejada: ");
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
                printf("\n \"Op��o inv�lida!!!\" \n\n");
                main();
        break;
     }

     printf("\n A \"\%c\", dos dois numeros �: %d \n\n", OP, R);
}
