//Marcos Kazuya Yamazaki
//Data: 25/09/2010
/* EEF1.c */

void main ()
{
int codfun, diastrab, anoser;
float valhor, salfun, gratif, salbase;

printf("\nInforme o codigo do funcionario: ");
scanf("%i", &codfun);

while(codfun>0)
     {
	 printf("\nInforme o total de dias trabalhado no mes: ");
     scanf("%i", &diastrab);
	 printf("Informe o valor da hora de trabalho R$");
     scanf("%f", &valhor);
	 printf("Informe o periodo, em anos, que o funcionario atua na empresa: ");
     scanf("%i", &anoser);
	 
	 salbase = valhor*diastrab*8;
	 
	 if (anoser<=5)
	     gratif = salbase*0.1;
     else
	     gratif = salbase*0.15;
     
	 salfun = salbase + gratif;
	 
	 printf("O funcionario %i, receba um salario de R&%.2f\n\n", codfun, salfun);
	 printf("\nInforme o codigo do funcionario: ");
     scanf("%i", &codfun);
	 }
}