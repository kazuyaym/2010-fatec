//Marcos Kazuya Yamazaki
//Data: 24/09/2010
/* EER02.c */

void main ()
{
float cont, div, soma;

div = -1;
soma = 0;

for(cont=1;cont<=50;cont=cont+1)
     {
	 div = div + 2;
	 soma = soma + div/cont;
	 }
printf("\n%.2f\n", soma);
}