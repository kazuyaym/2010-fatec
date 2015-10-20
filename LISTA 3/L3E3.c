//Marcos Kazuya Yamazaki
//Data: 17/09/2010
//L3E3.c

void main ()
{
float salfun, novsal;
printf("\nInforme o salario do funcionario R$");
scanf("%f", &salfun);
if (salfun<=3000)
 novsal = salfun*1.15;
if (salfun>3000 && salfun<=6000)
 novsal = salfun*1.1;
if (salfun>6000 && salfun<=9000)
 novsal = salfun*1.05;
if (salfun>9000)
 novsal = salfun;
 
printf("O novo salario apos o aumento e R$%.2f\n", novsal);

}