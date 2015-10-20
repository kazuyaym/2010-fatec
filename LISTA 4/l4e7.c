//Marcos Kazuya Yamazaki
//Data: 27/09/2010
/* L4E7.c */

void main ()
{
float altura, cont, maior, menor, media, diferenca, numM,numF;
char sexo;
maior = 0;
menor = 9999;
numM = 0;
numF = 0;

printf("\nInforme o sexo da pessoa(M/F): ");
sexo = getche();
printf("\nInforme a altura da pessoa: ");
scanf("%f", &altura);
	 
if(altura>maior)
     maior = altura;
if(altura<menor)
	 menor = altura;
	 
if(sexo=='M' || sexo=='m')
     numM = numM+1;
else
	 numF = numF+1;
		 
media = altura;

for(cont=1;cont<=5;cont=cont+1)
    {
	 printf("\nInforme o sexo da pessoa(M/F): ");
	 sexo = getche();
	 printf("\nInforme a altura da pessoa: ");
	 scanf("%f", &altura);
	 
	 if(altura>maior)
	     maior = altura;
     if(altura<menor)
	     menor = altura;
	 
	 if(sexo=='M' || sexo=='m')
	     numM = numM+1;
     else
	     numF = numF+1;
		 
	 media = (media + altura)/2;
	}	 
	 
printf("\n\nA altura do maior do grupo mede %.2fm", maior);
printf("\nA altura do menor do grupo mede %.2fm", menor);
printf("\nA media das alturas e %.2f\n", media);

if(numM>numF)
    {
  	 diferenca = 100*numM/numF;
	 printf("\nA diferenca percentual entre o numero de homem e mulheres e %.2f%%\n\n", diferenca);
    }
else
    {
     diferenca = 100*numF/numM;
	 printf("\nA diferenca percentual entre o numero de mulheres e homens e %.2f%%\n\n", diferenca);
	}
}