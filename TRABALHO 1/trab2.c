/*
Inicio
     Inteiro: data, mes, dia;
	 Leia(data);
	 dia <- data div 100;
	 mes <- data mod 100;
	 Se (dia>=20 e mes=03) ou (dia<=20 e mes=4)
	     Escreva(Aries);
	 lalala
	 */
	 
void main ()
{
int data, mes, dia;

printf("\nInforme o dia e o mes em que voce nasceu:\n");
printf("Exemplo '28 de Julho' => 2807 (ddmm)\n");
scanf("%i", &data);
dia = data/100;
mes = data%100;

if((dia>=20 && mes==3)||(dia<=20 && mes==4))
     printf("\nAries\n");
if((dia>=21 && mes==4)||(dia<=20 && mes==5))
     printf("\nTouro\n");
if((dia>=21 && mes==5)||(dia<=20 && mes==6))
     printf("\nGemeos\n");
if((dia>=21 && mes==6)||(dia<=21 && mes==7))
     printf("\nCancer\n");	 
if((dia>=22 && mes==7)||(dia<=22 && mes==8))
     printf("\nLeao\n");
if((dia>=23 && mes==8)||(dia<=22 && mes==9))
     printf("\nVirgem\n");
if((dia>=23 && mes==9)||(dia<=22 && mes==10))
     printf("\nLibra\n");
if((dia>=23 && mes==10)||(dia<=21 && mes==11))
     printf("\nEscorpiao\n");
if((dia>=22 && mes==11)||(dia<=21 && mes==12))
     printf("\nSagitario\n");
if((dia>=22 && mes==12)||(dia<=21 && mes==1))
     printf("\nCapricornio\n");
if((dia>=21 && mes==1)||(dia<=18 && mes==2))
     printf("\nAquario\n");
if((dia>=19 && mes==2)||(dia<=19 && mes==3))
     printf("\nPeixe\n");
}

	 