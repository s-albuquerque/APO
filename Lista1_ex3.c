/**
    Este programa calcula a media ponderada de 2 provas e uma atividade
    e de acordo com a media seu resultado é:
    "Plenamente Satisfatório", "Satisfatório", "Recuperção" ou "Não
    Satisfatório"

**/

#include <stdio.h>
#include <locale.h>

main(){
        float P1, P2, ATIV; /// A variavel P1 significa Prova 1 - A variavel P2 significa Prova 2 e a variavel ATIV significa Atividade.
        float MEDIA; /// Declaração da variavel MEDIA, para posteriormente  atribuir o valor final da média ponderada
        /// o valor atribuido a variavel MEDIA será a soma das notas das 2 provas e da atividade, vamos ter uma media ponderada.
        setlocale(LC_ALL,"Portuguese");

        printf("\n Este programa calcula a media ponderada de 2 provas e uma atividade \n e de acordo com a media seu resultado é: \"Plenamente Satisfatório\", \n \"Satisfatório\", \"Recuperção\" ou \"Não Satisfatório\" \n\n");

        printf(" Digite a nota da 1º prova: ");
        scanf("%f", &P1);
        printf("\n");
        printf(" Digite a nota da 2º prova: ");
        scanf("%f", &P2);
        printf("\n");
        printf(" Digite a nota da atividade: ");
        scanf("%f", &ATIV);

        while((P1 >10 || P2 >10 || ATIV > 10) || (P1 <0 || P2 <0 || ATIV <0)){
            printf("\n Opção inválida!!! Escolha novamente uma opção valida.. \n\n");
            printf(" Digite a nota da 1º prova: ");
            scanf("%f", &P1);
            printf("\n");
            printf(" Digite a nota da 2º prova: ");
            scanf("%f", &P2);
            printf("\n");
            printf(" Digite a nota da atividade: ");
            scanf("%f", &ATIV);
        }

        MEDIA = (P1 * 4 + P2 * 4 + ATIV * 2) / 10; /// aqui estamos calculando a media das variaveis P1, P2 e ATIV e atribuindo para a variavel MEDIA o valor desta conta

        if (MEDIA >= 9){ /// com o if verificamos se as medias estão ok, de acordo com os resultados permitidos, para depois imprimir os resultados
                printf("\n \"Plenamente Satisfatório\" ", MEDIA); /// no primeiro if verificamos se a MEDIA é igual ou maior que 9
        }
        else if (MEDIA >= 7 && MEDIA < 9){ /// caso o primeiro if seja falso, verificamos se a MEDIA é igual ou maior que 7 e também se a MEDIA é menor que 9
                printf("\n \"Satisfatório\" \n", MEDIA); /// imprimindo os resultados de acordo com a MEDIA final
        }
        else if (MEDIA >= 4 && MEDIA < 7){ ///caso o segundo if seja falso, verificamos se a MEDIA é igual ou maior que 4, e tambem se a MEDIA é menor que 7
                printf("\n \"Recuperação\" \n");  /// imprimindo os resultados de acordo com a MEDIA final
        } else {
                printf("\n \"Não Satisfatório\" \n"); /// imprimindo os resultados de acordo com a MEDIA final
        }

}
