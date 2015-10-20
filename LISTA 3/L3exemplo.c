//Marcos Kazuya Yamazaki
//Data: 17/09/2010
//Exemplo

void main (void)
{
float l1,l2,l3;

printf("\ndigite a medida do lado 1: ");
scanf("%f", &l1);
printf("digite a medida do lado 2: ");
scanf("%f", &l2);
printf("digite a medida do lado 3: ");
scanf("%f", &l3);

if (l1==l2 && l1==l3 && l3==l2)
   printf("o triangulo e equilatero\n"); 
if (l1==l2 || l1==l3 || l3==l2)
   printf("o triangulo e isoceles\n");
if (l1!=l2 && l1!=l3 && l3!=l2)
   printf("o triangulo e escaleno\n");
}