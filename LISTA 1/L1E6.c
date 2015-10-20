//Marcos Kazuya Yamazaki
//Data: 27/08/2010
//L1E6.c
void main (void)
{
float SalFixo, ValorVen, ValorCom, SalFinal;

printf("Informe seu salario fixo: ");
scanf("%f", &SalFixo);
printf("\nInforme o valor arrecado nas vendas: ");
scanf("%f", &ValorVen);

ValorCom= ValorVen*0.04;
SalFinal= SalFixo+ValorCom;

printf("O valor da comissao recebida e R$%.2f\n", ValorCom);
printf("O valor do salario final %.2f", SalFinal);
}