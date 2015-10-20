// Marcos Kazuya Yamazaki
// 29/08/2010
/* L1E12.c */

void main (void)
{
float HorTrab, HorExt, SalMin, salario;
printf("\nInforme a carga horaria mensal: ");
scanf("%f", &HorTrab);
printf("\nInforme o total de horas extra de trabalho: ");
scanf("%f", &HorExt);
SalMin= 510.00;
salario= SalMin*(HorTrab/8+HorExt/4);

printf("\nO salario total sera de R$%.2f\n", salario);
}




