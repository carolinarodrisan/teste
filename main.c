#include <stdio.h>
#include <stdlib.h>

int main()
{
    //1 Dados uma distância e o total de litros de combustível gasto por um automóvel para percorrê-la,informe o consumo médio.
    //Observação: Apresente o resultado com 3 casas decimais de precisão.

int main(void)
{
    // Declaração de variáveis
    float distancia,     // Distância percorrida
          litros_usados, // Quantide de litros utilizada
          consumo_medio;

    // Entrada de dados
    printf("DISTANCIA  = "); scanf("%f", &distancia);
    printf("LITROS USADOS  = "); scanf("%f", &litros_usados);

    // Processamento de dados
    consumo_medio = distancia / litros_usados;

    // Saída de dados
    system("cls");

    printf("DISTANCIA        = %10.3f Km \n", distancia);
    printf("LITROS USADOS    = %10.3f litros \n", litros_usados);
    printf("CONSUMO MEDIO    = %10.3f litros \n", consumo_medio);


    return(0);

}
