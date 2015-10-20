// Marcos Kazuya Yamazaki
// 29/08/2010
/* L1E7.c */

void main (void)
{
float SalMin, SalFun, QtdSal;

printf("\n\nInforme o seu salario atual: R$");
scanf("%f", &SalFun);

SalMin= 510.00;
QtdSal= SalFun/SalMin;

printf("\nA quantidade de salarios minimos que voce recebe e %.2f\n\n", QtdSal);

}