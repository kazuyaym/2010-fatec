//Marcos Kazuya Yamazaki
//Data: 25/09/2010
/* EEF2.c */

void main ()
{
float massa, massa2;
int rest, soma, massa3, tempo;

printf("\nInforme a massa em kilos do material radioativo: ");
scanf("%f", &massa);
massa = massa*10000;
massa2 = massa;

while(massa>=5)
     {
	 massa = massa/2;
	 }

massa2 = massa2/massa;
massa3 = massa2;
soma = 0;

while(massa3>0)
     {
	 rest = (massa3 + 1)%2;
	 massa3 = massa3/2;
	 soma = rest + soma;
	 }	 
	 
tempo = soma*50;
printf("Sendo, 50 sgundos, o tempo de meia vida do material radioativo,\n");
printf("sua massa sera inferior a 0.5 gramas apos aproximadamente %i segundos\n", tempo);
}