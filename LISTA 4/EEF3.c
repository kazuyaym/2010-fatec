//Marcos Kazuya Yamazaki
//Data: 25/09/2010
/* EEF3.c */

void main ()
{
int num, soma, rest;
printf("\nDigite um numero inteiro: ");
scanf("%i", &num);
soma= 0;
while(num>0)
     {
	 rest = num%10;
	 soma = rest+soma;
	 num = num/10;
	 }
printf("A soma dos caracters desse numero e %i\n", soma);
}