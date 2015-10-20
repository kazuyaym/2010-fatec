//Marcos Kazuya Yamazaki
//Data: 27/08/2010
//L1E2.c
void main (void)
{
   float largura, compri, TotCer;              //Real: largura, comprimento, perimetro
 
   printf("Informe a largura do terreno: ");
   scanf("%f", &largura);
   printf("Informe o comprimento: ");
   scanf("%f", &compri);
   
   TotCer = 2*(largura+compri);
   
   printf("\nO perimetro do terreno e %.2f", TotCer);
   
}