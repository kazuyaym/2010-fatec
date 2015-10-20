//Marcos Kazuya Yamazaki
//Data: 17/09/2010
//L3E1.c

void main (void)
{
float SalMed, ValorCred;
printf("\nInforme o saldo medio do cliente R$");
scanf("%f", &SalMed);
if (SalMed<2000)
   ValorCred = SalMed*0.1;
if (SalMed>=2000 && SalMed<3000)
   ValorCred = SalMed*0.2;
if (SalMed>=3000 && SalMed<4000)
   ValorCred = SalMed*0.25;
printf("\nO valor do saldo medio e R$%.2f e o valor do credito e R$%.2f\n\n", SalMed, ValorCred);

}