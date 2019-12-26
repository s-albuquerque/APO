/**
    Um sal�rio tem os seguintes componentes:
    - valor nominal
    - adicional devido a horas extras
    - valor descontado para o INSS (10% do valor a receber, limitado a 150
    reais).
     O valor adicional devido �s horas extras � calculado dividindo-se o
    valor nominal por 176 (22 dias de 8 horas), multiplicando-se pela
    quantidade de horas e ainda com um acr�scimo de 50%.

    Escrever um programa que l� os valores necess�rios, calcula e
    mostra na tela os componentes do sal�rio e o sal�rio l�quido resultante
    para o empregado. N�o � preciso prever arredondamentos, mas os
    valores devem ser mostrados na tela com duas casas decimais.
    Exemplos: para um sal�rio de R$ 1.000,00, com 30 horas extras, teremos
    R$ 255,68 de horas extras [(1.000/176)*30*1,5], R$ 125,57 de INSS e um
    sal�rio l�quido de R$ 1.130,11. Para um sal�rio de R$ 2.000,00 e 20
    horas extras, seriam R$ 340,91 de horas extras, R$ 150,00 de INSS (e
    n�o os 10%), com um sal�rio l�quido de R$ 2.190,91.

**/

#include <stdio.h>
#include <locale.h>

main(){
        float VN=0, HE=0, INSS=0, ADC=0, VHE=0, SL=0;
        setlocale(LC_ALL,"Portuguese");

        printf("Digite o valor nominal de seu salario: ");
        scanf("%f", &VN);

        printf("\n");
        printf("Digite o total de horas extras trabalhadas: ");
        scanf("%f", &HE);
        printf("\n");

        VHE = ((VN/176)*HE)* 1.5 ;

        ADC = VN + VHE;

        if (ADC < 1700 || ADC == 1700){
         INSS = (ADC/100)* 10;
        }else if(ADC > 1700){
         INSS = 150;
        }

        SL = ADC - INSS;

        printf("\n O seu sal�rio �: %.2f \n", VN);
        printf("\n O seu acr�scimo de 50%% �: %.2f \n", VHE);
        printf("\n O valor descontado do INSS �: %.2f \n", INSS);
        printf("\n O seu sal�rio l�quido �: %.2f \n\n", SL);


}
