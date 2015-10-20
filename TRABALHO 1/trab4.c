/*
Inicio
     Inteiro: TipoPro, composicao, QtdPro;
	 Real: PrecoPro, ValFre, ValVend;
	 Caracter: frete;
	 
	 Leia(TipoPro, composicao, QtdPro, frete);
	 
	 Se TipoPro = 1 então
	     PrecoPro <- 5;
	 Se TipoPro = 2 então
	     PrecoPro <- 3.80;
     Se TipoPro = 3 então
	     PrecoPro <- 4.5;
	 Se TipoPro = 4 então
	     PrecoPro <- 6.5;
	
	 Se composicao = 1
	     PrecoPro <- PrecoPro;
	 Se composicao = 2
	     PrecoPro <- PrecoPro*1.15;
	 Se composicao = 3
	     PrecoPro <- PrecoPro*1.25;
		 
	 Se frete='S' ou frete='s' então
	     ValFre <- 10;
     Senão
         ValFre <- 0;

     ValVen <- QtdPro*PrecoPro + frete;
     Escreva(PrecoPro, Valven);	
Fim	 
*/

void main ()
{
int tipopro, composicao, qtdpro;
float precopro, valfre, valven;
char frete;
printf("\nInforme o tipo do produto:");
printf("\n1 - Areia \\ 2 - Pedrita \\ 3 - Brita \\ 4 - Saibro\n");
scanf("%i", &tipopro);
printf("\n1 - Fino \\ 2 - Medio \\ 3 - Grosso: ");
scanf("%i", &composicao);
printf("Quantidade: ");
scanf("%i", &qtdpro);
 
if (tipopro==1)
	 precopro=5;
if (tipopro==2)
	 precopro=3.80;
if (tipopro==3)
	 precopro=4.5;
if (tipopro==4)
	 precopro=6.5;
	 
if (composicao==1)
	 precopro=precopro;
if (composicao==2)
	 precopro=precopro*1.15;
if (composicao==3)
	 precopro=precopro*1.25;
	 
printf("\nSera cobrado o frete (S/N)? ");
frete = getche();

if (frete=='S' || frete=='s')
     valfre=10;
else
     valfre=0;
	 
valven= qtdpro*precopro + valfre;
printf("\nR$%.2f", valven);
}