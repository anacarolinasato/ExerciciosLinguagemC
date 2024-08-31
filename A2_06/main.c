#include <stdio.h>
#include <stdlib.h>

float calcularReajuste(float salario, float indiceReajuste)
{
    float reajuste = (salario * indiceReajuste) / 100;
    return reajuste;
}

int main()
{
    float salario, indiceReajuste;

    printf("Digite o salario: \n");
    scanf("%f", &salario);

    printf("Digite o indice de reajuste: \n");
    scanf("%f", &indiceReajuste);

    float reajuste = calcularReajuste(salario, indiceReajuste);
    float novoSalario = salario + reajuste;

    printf("O salario reajustado eh de %.2f.",novoSalario);
}
