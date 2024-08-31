#include <stdio.h>
#include <stdlib.h>

int IdadeEmDias(int anos, int meses, int dias)
{
    int IdadeEmDias = (anos * 365) + (meses * 30) + dias;
    return IdadeEmDias;
}

int main()
{
    int anos, meses, dias;
    printf("Digite a sua idade: \n");
    scanf("%d", &anos);
    printf("Meses: \n");
    scanf("%d", &meses);
    printf("Dias: \n");
    scanf("%d", &dias);

    int TotaldeDias = IdadeEmDias(anos, meses, dias);
    printf("Sua idade total em dias eh de %d.",TotaldeDias);
}
