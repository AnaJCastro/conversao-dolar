#include <stdio.h>

int main()
{
    float dolar, real, conversao;
    dolar = 4.98; //valor atual do dolar (03/2024)
    real = 0.20; //valor atual do real (03/2024)

    printf("insira qual conversao voce deseja: insira 1 para real-dolar ou insira 2 para dolar-real");
    int tipo;
    tipo = 0;
    scanf("%i",&tipo);
    switch (tipo)
    {
    case 1:
         printf("insira o valor em dolar:");
        scanf("%f",&real);
        conversao = dolar*real;
        printf("a sua conversao sera %.2f",conversao);
        break;
        
    case 2:
         printf("insira o valor em real:");
         scanf("%f",&dolar);
        conversao = real*dolar;
        printf("a sua conversao sera %.2f",conversao);
        break;

    default:
        printf("Essa opção não existe!");
        break;
    }
}
