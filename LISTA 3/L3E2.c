//Marcos Kazuya Yamazaki
//Data: 17/09/2010
//L3E2.c

void main ()
{
float custfab, custcom;

printf("\nInforme o custo de fabrica do automovel R$");
scanf("%f", &custfab);
if (custfab<=12000)
   custcom = custfab*1.05;
if (custfab>12000 && custfab<=25000)
   custcom = custfab*1.25;
if (custfab>25000)
   custcom = custfab*1.35;
printf("O custo do automovel final e R$%.2f\n", custcom);
}