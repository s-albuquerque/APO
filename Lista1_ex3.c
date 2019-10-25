/**
    Este programa calcula a media ponderada de 2 provas e uma atividade
    e de acordo com a media seu resultado �:
    "Plenamente Satisfat�rio", "Satisfat�rio", "Recuper��o" ou "N�o
    Satisfat�rio"

**/

#include <stdio.h>
#include <locale.h>

main(){
        float P1, P2, ATIV; /// A variavel P1 significa Prova 1 - A variavel P2 significa Prova 2 e a variavel ATIV significa Atividade.
        float MEDIA; /// Declara��o da variavel MEDIA, para posteriormente  atribuir o valor final da m�dia ponderada
        /// o valor atribuido a variavel MEDIA ser� a soma das notas das 2 provas e da atividade, vamos ter uma media ponderada.
        setlocale(LC_ALL,"Portuguese");

        printf("\n Este programa calcula a media ponderada de 2 provas e uma atividade \n e de acordo com a media seu resultado �: \"Plenamente Satisfat�rio\", \n \"Satisfat�rio\", \"Recuper��o\" ou \"N�o Satisfat�rio\" \n\n");

        printf(" Digite a nota da 1� prova: ");
        scanf("%f", &P1);
        printf("\n");
        printf(" Digite a nota da 2� prova: ");
        scanf("%f", &P2);
        printf("\n");
        printf(" Digite a nota da atividade: ");
        scanf("%f", &ATIV);

        while((P1 >10 || P2 >10 || ATIV > 10) || (P1 <0 || P2 <0 || ATIV <0)){
            printf("\n Op��o inv�lida!!! Escolha novamente uma op��o valida.. \n\n");
            printf(" Digite a nota da 1� prova: ");
            scanf("%f", &P1);
            printf("\n");
            printf(" Digite a nota da 2� prova: ");
            scanf("%f", &P2);
            printf("\n");
            printf(" Digite a nota da atividade: ");
            scanf("%f", &ATIV);
        }

        MEDIA = (P1 * 4 + P2 * 4 + ATIV * 2) / 10; /// aqui estamos calculando a media das variaveis P1, P2 e ATIV e atribuindo para a variavel MEDIA o valor desta conta

        if (MEDIA >= 9){ /// com o if verificamos se as medias est�o ok, de acordo com os resultados permitidos, para depois imprimir os resultados
                printf("\n \"Plenamente Satisfat�rio\" ", MEDIA); /// no primeiro if verificamos se a MEDIA � igual ou maior que 9
        }
        else if (MEDIA >= 7 && MEDIA < 9){ /// caso o primeiro if seja falso, verificamos se a MEDIA � igual ou maior que 7 e tamb�m se a MEDIA � menor que 9
                printf("\n \"Satisfat�rio\" \n", MEDIA); /// imprimindo os resultados de acordo com a MEDIA final
        }
        else if (MEDIA >= 4 && MEDIA < 7){ ///caso o segundo if seja falso, verificamos se a MEDIA � igual ou maior que 4, e tambem se a MEDIA � menor que 7
                printf("\n \"Recupera��o\" \n");  /// imprimindo os resultados de acordo com a MEDIA final
        } else {
                printf("\n \"N�o Satisfat�rio\" \n"); /// imprimindo os resultados de acordo com a MEDIA final
        }

}
