//Marcos Kazuya Yamazaki
//Data: 24/09/2010
/* EER03.c */

void main ()
{
float ValApl, taxa;
int QtdMeses, cont;

printf("\nInforme o valor aplicado: R$");
scanf ("%f", &ValApl);
printf("Informe a quantidade de meses: ");
scanf ("%i", &QtdMeses);
printf("Informe a taxa de juros mensal: ");
scanf ("%f", &taxa);

for(cont=1;cont<=QtdMeses;cont=cont+1)
     {
	 ValApl = ValApl*(1+taxa/100);
	 }
	 
printf("O valor total a pagar e R&%.2f\n", ValApl);
}