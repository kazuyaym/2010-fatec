#include <conio.h>

//Rotina Dobro
void Dobro(void)
{
   int Numero, Dob;//variáveis locais
   
   printf("\nDigite um numero inteiro: ");
   scanf("%i", &Numero);
   Dob = Numero * 2;
   printf("O Dobro do numero e %i", Dob);
}

float CalcDesconto(float VC)
{
  float Desc;
  
  if (VC >= 800)
     Desc = 0.15 * VC;
  else
     Desc = 0;
  
  return(Desc);
}

//Rotina Venda
void Venda(void)
{
   int Codigo, QtdeVend;
   float PrecUnit, ValComp, ValPagar; 
   
   system("cls");
   printf("\nDigite o codigo do produto: ");
   scanf("%i", &Codigo);
   printf("Digite o preco unitario: ");
   scanf("%f", &PrecUnit);
   printf("Digite a quantidade vendida: ");
   scanf("%i", &QtdeVend);
   ValComp = PrecUnit * QtdeVend;
   ValPagar = ValComp - CalcDesconto(ValComp);
   printf("\nValor da Compra    : %.2f", ValComp);
   printf("\nValor do Desconto  : %.2f", CalcDesconto(ValComp));
   printf("\nValor a Pagar      : %.2f", ValPagar);
   
   printf("\n\n\tPressione uma tecla para continuar ...");
   getch();
}

//Exercícios Básicos
void main(void)
{
    int Opcao, Numero, QtdeElem;
	
	printf("\nDigite");
	printf("\n\n\t1-Dobro do Numero");
	printf("\n\t2-Venda do Produto");
	printf("\n\t3-Media do Aluno");
	printf("\n\t4-Tabuada");
	printf("\n\t5-Sair");
	printf("\n\nOpcao => ");
	scanf("%i", &Opcao);
	
	while(Opcao < 5)
	{
	   if (Opcao == 1)
	       Dobro(); //chamada da rotina
	   else
         if (Opcao == 2)
             Venda();		 
	
	
	
	   system("cls");
	   printf("\nDigite");
	   printf("\n\n\t1-Dobro do Numero");
	   printf("\n\t2-Venda do Produto");
	   printf("\n\t3-Media do Aluno");
	   printf("\n\t4-Tabuada");
	   printf("\n\t5-Sair");
	   printf("\n\nOpcao => ");
	   scanf("%i", &Opcao);
	}	
}//fim main



