//Marcos Kazuya Yamazaki
//Data: 27/09/2010
/* L4E3.c */

void main ()
{
int tabu, soma, cont;
float trigo; 
tabu = -1;
soma = 0;
trigo = 0.5;
for(cont=1;cont<=8;cont=cont+1)
     {
	 tabu = tabu + 2;
	 trigo = trigo * 2;
	 soma = tabu*trigo + soma;
	 }
printf("\nO numero total de graos de trigo para ser dado e %i.\n", soma);
}