//Marcos Kazuya Yamazaki
//Data: 27/08/2010
//L1E1.c
void main (void)
{
   float PreUnit, VComp;
   int QtdPro;
 
   printf("Informe o valor do produto: ");
   scanf("%f", &PreUnit);
   printf("Informe a quantidade comprada: ");
   scanf("%i", &QtdPro);
   
   VComp = PreUnit * QtdPro;
   
   printf("\nO valor da compra e R$%.2f", VComp);
   
}