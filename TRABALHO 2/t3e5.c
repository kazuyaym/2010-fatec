//Marcos Kazuya Yamazaki
//Data: 04/10/2010
/* T2E5.c */

void main ()
{
int cpf, numd;
float renda, imposto;

printf("\ncpf: ");
scanf("%i", &cpf);

while (cpf>0)
     {
	 printf("\nnum dependetes: ");
	 scanf("%i", &numd);
	 printf("\nrenda: ");
	 scanf("%f", &renda);
	 
	 if (renda<=500)
	     imposto = 0;
	 if (renda>500  && renda<=1500)
	     imposto = 0.05*renda - numd*75;
	 if (renda>1500 && renda<=2500)
	     imposto = 0.1*renda - numd*75;
	 if (renda>2500)
	     imposto = 0.15*renda - numd*75;
	 printf("\n %f", imposto);
	 
	 printf("\n\ncpf: ");
     scanf("%i", &cpf);
	 }
}