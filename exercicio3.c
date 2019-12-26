/**
    Um salário tem os seguintes componentes:
    - valor nominal
    - adicional devido a horas extras
    - valor descontado para o INSS (10% do valor a receber, limitado a 150
    reais).
     O valor adicional devido às horas extras é calculado dividindo-se o
    valor nominal por 176 (22 dias de 8 horas), multiplicando-se pela
    quantidade de horas e ainda com um acréscimo de 50%.

    Escrever um programa que lê os valores necessários, calcula e
    mostra na tela os componentes do salário e o salário líquido resultante
    para o empregado. Não é preciso prever arredondamentos, mas os
    valores devem ser mostrados na tela com duas casas decimais.
    Exemplos: para um salário de R$ 1.000,00, com 30 horas extras, teremos
    R$ 255,68 de horas extras [(1.000/176)*30*1,5], R$ 125,57 de INSS e um
    salário líquido de R$ 1.130,11. Para um salário de R$ 2.000,00 e 20
    horas extras, seriam R$ 340,91 de horas extras, R$ 150,00 de INSS (e
    não os 10%), com um salário líquido de R$ 2.190,91.

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

        printf("\n O seu salário é: %.2f \n", VN);
        printf("\n O seu acréscimo de 50%% é: %.2f \n", VHE);
        printf("\n O valor descontado do INSS é: %.2f \n", INSS);
        printf("\n O seu salário líquido é: %.2f \n\n", SL);


}
