#include <stdio.h>
#include <stdlib.h>

float calcularPesoIdealHomem(float altura)
{
   float pesoIdeal = (72.7*altura) - 58;
   return pesoIdeal;
}

float calcularPesoIdealMulher(float altura)
{
    float pesoIdeal = (62.1 *altura) - 44.7;
    return pesoIdeal;
}

int main()
{
    float altura;
    int opcao;

    printf("Digite a sua altura: \n");
    scanf("%f",&altura);

    printf("Digite 1 se voce for homem ou 2 se voce for mulher: \n");
    scanf("%i",&opcao);

        float pesoIdeal;

    switch(opcao)
    {
    case 1:
        printf("Homem\n");
        pesoIdeal = calcularPesoIdealHomem(altura);
        printf("O peso ideal eh de %.2f",pesoIdeal);

        break;

    case 2:
        printf("Mulher\n");
        pesoIdeal = calcularPesoIdealMulher(altura);
        printf("O peso ideal eh de %.2f",pesoIdeal);
        break;

    default:
        printf("Opcao invalida!");
        break;
    }


}
