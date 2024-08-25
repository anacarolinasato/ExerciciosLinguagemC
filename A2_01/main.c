#include <stdio.h>
#include <stdlib.h>

#define PI 3.14

float calculaVolume(float raio)
{
    float volume;
    float raioAoCubo = 1;

    for(int i=1; i<=3; i++)
    {
        raioAoCubo = raioAoCubo*raio;
    }

    volume = 4 * PI * raioAoCubo / 3;
    return volume;
}


int main()
{
    float raio, volume;

    printf("Digite o raio do circulo: \n");
    scanf("%f",&raio);

    volume = calculaVolume(raio);

    printf("O volume de um circulo com raio %f eh igual a %f",raio,volume);

    return 0;
}
