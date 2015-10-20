//Marcos Kazuya Yamazaki
//Data: 10/09/2010
//L2E6.c

void main (void)
{
float ValFin, ValPul, ValLig, ValSer, LigInt, TaxFix;
int NumTel, TipTel, pulsos, SerDes;
printf("Informe o numero do telefone: ");
scanf("%i", &NumTel);
printf("\nInforme o tipo do telefome.");
printf("\nDigite 1 para telefone residencial");
printf("\nDigite 2 para telefone comercial\n");
scanf("%i", &TipTel);
printf("\n\nInforme a quantidade de pulsos registrados: ");
scanf("%i", &pulsos);
printf("Informe o total de minutos gastos em ligacoes interurbanas: ");
scanf("%f", &LigInt);
printf("Informe a quantidade de serviços de despertador prestados: ");
scanf("%i", &SerDes);

if (TipTel==1)
   TaxFix=10.0;
else
   TaxFix=15.0;

if (pulsos>90)
    ValPul= (pulsos-90)*0.05;
else
    ValPul= 0;
	
ValLig= LigInt*4.8;
ValSer= SerDes*2;

ValFin= TaxFix+ValPul+ValLig+ValSer;

printf("\n\nO valor total a pagar do telefone %i, e de R$%.2f\n\n", NumTel, ValFin);
}