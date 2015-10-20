/*
Inicio
     Inteiro: num, soma, numim, somaimp, restimp, rest, cont;
	 Soma <- 0;
	 Leia(num);
	 numimp <- num;
	 Para cont de 1 até 4 faça
	 Inicio
	     rest <- num mod 10;
		 num <- num div 10;
		 soma <- rest + soma;
	 Fim
	 Escreva(soma);
	 
	 somaimp <- 0;
	 
	 Para cont de 1 até 4 faça
	 Inicio
	     restimp <- numimp mod 10;
		 Se restimp=1 ou restimp=3 ou restimp=5 ou restimp=7 ou restimp=9 então
		     restimp <- restimp
		 Senão
		     restimp <- 0
		 somaimp <- restimp + somaimp;
		 numimp <- numimp div 10;
	 Fim
	 Escreva(somaimp);
Fim
*/

void main ()
{
int num, soma, rest, numimp, somaimp, restimp, cont;
char continua;
do
{
soma = 0;
printf("\n\nDigite um numero de 4 digitos: ");
scanf("%i", &num);
numimp = num;

for(cont=1;cont<=4;cont=cont+1)
    { 
	 rest = num%10;
	 num = num/10;
	 soma = soma+rest;
	}
printf("\nA soma de cada algarismo do numero e %i", soma);
somaimp = 0;

for(cont=1;cont<=4;cont=cont+1)
    {
	 restimp = numimp%10; 
	 if(restimp==1 || restimp==3 || restimp==5 || restimp==7 || restimp==9)
	     restimp = restimp;
	 else
	     restimp = 0;
	 somaimp = restimp + somaimp;
	 numimp = numimp/10;
	}
printf("\nA soma dos algarismo impares do numero e %i\n", somaimp);

printf("\nDeseja continuar (S/N)? ");
continua = getche();
} while (continua=='S' || continua=='s');
}
