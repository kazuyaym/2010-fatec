// Marcos Kazuya Yamazaki
// 29/08/2010
/* L1E9.c */

void main (void)
{
float totsal, conta1, conta2, restsal;
printf("\nInforme o seu salario: R$");
scanf("%f", &totsal);
printf("\nInforme o valor da primeira conta e o da segunda respectivamente.\nR$");
scanf("%f", &conta1);
printf("R$");
scanf("%f", &conta2);

restsal= totsal - 1.02*(conta1+conta2);

printf("\nRestara do salario total um valor de R$%.2f\n\n" ,restsal);
}