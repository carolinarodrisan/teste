#include <stdio.h>
#include <stdlib.h>

int main()
{
    //1 Dados uma dist�ncia e o total de litros de combust�vel gasto por um autom�vel para percorr�-la,informe o consumo m�dio.
    //Observa��o: Apresente o resultado com 3 casas decimais de precis�o.

int main(void)
{
    // Declara��o de vari�veis
    float distancia,     // Dist�ncia percorrida
          litros_usados, // Quantide de litros utilizada
          consumo_medio;

    // Entrada de dados
    printf("DISTANCIA = "); scanf("%f", &distancia);
    printf("LITROS USADOS  = "); scanf("%f", &litros_usados);

    // Processamento de dados
    consumo_medio = distancia / litros_usados;

    // Sa�da de dados
    system("cls");

    printf("DISTANCIA        = %10.3f Km \n", distancia);
    printf("LITROS USADOS    = %10.3f litros \n", litros_usados);
    printf("CONSUMO MEDIO    = %10.3f litros \n", consumo_medio);


    return(0);

}
