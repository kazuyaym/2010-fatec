// Marcos Kazuya Yamazaki
// 29/08/2010
/* L1E11.c */

void main (void)
{
float real, dollar, marco, libra;
printf("\nQual a quantidade em reais que levara na viagem? R$");
scanf("%f", &real);

dollar= real/1.80;
marco= real/2.00;
libra= real/2.15;

printf("\nA quantidade de R$%.2f, equivale a %.2f dollar, %.2f marco alemao ou a %.2f libras esterlinas.\n", real, dollar,marco, libra);
}




