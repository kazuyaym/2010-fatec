//Marcos Kazuya Yamazaki
//Data: 27/08/2010
//L1E4.c
void main (void)
{
float VDuplic, taxa, juros, VFinal;
int NDuplic, DiaAtras;

//Entrada de dados
printf("Informe o numero da duplicata: ");
scanf("%i", &NDuplic);
printf("\nQual o valor da duplicata? R$");
scanf("%f", &VDuplic);
printf("\nInforme a taxa de juros? ");
scanf("%f", &taxa);
printf("\nInforme os dias de atraso: ");
scanf("%i", &DiaAtras);

//Processamento
juros= (DiaAtras*taxa)/100 + 1;
VFinal= VDuplic*juros;

//Saida
 printf("O valor da duplicata numero %i, apos %i dias de atraso e R$%.2f", NDuplic, DiaAtras, VFinal);
}