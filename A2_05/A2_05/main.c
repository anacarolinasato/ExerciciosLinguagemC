#include <stdio.h>
#include <stdlib.h>

int verificaQuadrante(int x, int y)
{
    if(x > 0 && y > 0)
    {
        return 1;
    }

    if(x < 0 && y > 0)
    {
        return 2;
    }

    if(x < 0 && y < 0)
    {
        return 3;
    }
    if(x > 0 && y < 0)
    {
        return 4;
    }
}


int main()
{
    int x, y;
    printf("Digite o valor de x: \n");
    scanf("%i",&x);
    printf("Digite o valor de y: \n");
    scanf("%i",&y);

    int quadrante = verificaQuadrante(x,y);
    printf("O quadrante para %i e %i eh: %i.",x,y,quadrante);

    return 0;
}
