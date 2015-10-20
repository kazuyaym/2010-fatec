//Marcos Kazuya Yamazaki
//Data: 24/09/2010
/* EER01.c */

void main ()
{
int cont, num, tab;

printf("\nDigite um numero inteiro: ");
scanf("%i", &num);

for(cont=1;cont<=10;cont=cont+1)
     {
	 tab= num*cont;
	 printf("%i x %i = %i\n", num, cont, tab);
	 }
}