//Marcos Kazuya Yamazaki
//Data: 27/08/2010
//L1E3.c
void main (void)
{
  int DiasHosp;
  float VDiaria, VTotal;
  
  printf("Informe a diaria do local hospedado: R$");
  scanf("%f", &VDiaria);
  printf("Por quandos dias esteve hospededado? ");
  scanf("%i", &DiasHosp);
  
  VTotal= VDiaria * DiasHosp;
  
  printf("O valor total a pagar e: R$%.2f\n\n", VTotal);
    
}