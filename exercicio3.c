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
        f float VN=0, HE=0, INSS=0, ADC=0, SL=0; ///declarando as variaveis e atribuindo o valor 0 a elas
        setlocale(LC_ALL,"Portuguese");

        printf("Digite o valor nominal de seu salario: ");
        scanf("%f", &VN); /// atribuindo o valor digitado a variavel VN

        printf("\n");
        printf("Digite o total de horas extras trabalhadas: ");
        scanf("%f", &HE); /// atribuindo o valor digitado a variavel HE
        printf("\n");

        ADC = ((VN/176)*HE)* 1.5 ; /// Atribuindo a variavel ADC o valor da soma dos 50% das horas extras, de acordo com o que foi solicitado

        SL = VN + ADC; /// informando que a variavel SL recebera a soma do salario nominal (VN) e do adicional (ADC), e o resultado desta soma será o novo salario liquido

        if (SL <= 1700){ /// condição para verificar qual será o desconto do INSS a ser aplicado para cada salario
         INSS = (SL/100)* 10; /// conta para tirar os 10% dos salarios menores ou iguais a 1700
        }else if(SL > 1700){ /// se não, caso o salario seja maior que 1700
         INSS = 150; /// informando o valor maximo de 150, para o desconto posteriormente
        }

        SL = SL - INSS; /// subtração do desconto do INSS emcima do salario total resultante

        printf("\n O seu salário é: %.2f \n", VN); /// imprimindo os resultados
        printf("\n O seu acréscimo de 50%% é: %.2f \n", ADC); /// imprimindo os resultados
        printf("\n O valor descontado do INSS é: %.2f \n", INSS); /// imprimindo os resultados
        printf("\n O seu salário líquido é: %.2f \n\n", SL); /// imprimindo os resultados

}
