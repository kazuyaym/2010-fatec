// Marcos Kazuya Yamazaki
// 29/08/2010
/* L1E8.c */

void main (void)
{
int Anasci, Aatual, Ianos, Imeses, Isemanas;
printf("\n\nInforme o ano atual: ");
scanf("%i", &Aatual);
printf("\nInforme o ano em que voce nasceu: ");
scanf("%i", &Anasci);

Ianos= Aatual-Anasci;
Imeses= Ianos*12;
Isemanas= Ianos*52;

printf("\nVoce tem %i anos, viveu %i meses ou %i semanas\n", Ianos, Imeses, Isemanas);
}