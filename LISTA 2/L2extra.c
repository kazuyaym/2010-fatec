//Marcos Kazuya Yamazaki
//Data: 10/09/2010
//Extra.c

void main (void)
{
int num, soma, rest, rest2, mil, cem, dez, unit;

printf("\nInforme um numero de 4 digitos: ");
scanf("%i", &num);

mil=num/1000;
rest=num%1000;

cem=rest/100;
rest2=rest%100;

dez=rest2/10;
unit=rest2%10;


soma=unit+dez+cem+mil;

printf("\nA soma dos numeros e %i\n\n", soma);


}