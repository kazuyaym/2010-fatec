/*
Inicio
     Real: ValCar, BasSeg, DescSex, DescIda1, DescIda2, DescMot, DescDir, TotDesc, ValSeg;
	 Inteiro: idade, PerfilMot, PerfilDir;
	 Caracter: sexo; 
	 
	 Leia(ValCar, sexo, idade, PerfilMot, PerfilDir);
	 
	 BasSeg <- ValCar * 0.1;
	 
	 Se sexo='F' ou sexo='f' ent�o
	     DescSex <- BasSeg * 0.075;
	 Sen�o
	     DescSex <- 0;
	
	 Se idade>=26 e idade<=35 ent�o
	     DescIda1 <- BasSeg * 0.025;
	 Sen�o
	     DescIda1 <- 0;
		 
	 Se idade>35 ent�o
	     DescIda2 <- BasSeg * 0.037;
	 Sen�o
	     DescIda2 <- 0;
		 
	 Se PerfilMot = 1 ent�o
	     DescMot <- BasSeg * 0.015;
	 Sen�o
	     DescMot <- 0;
	
	 Se PrefilDir = 1 ent�o
	     DescDir <- BasSeg * 0.018;
	 Sen�o
	     DescDir <- 0;
		 
	 TotDesc <- DescSex + DescIda1 + DescIda2 + DescMot + DescDir;
	 ValSeg <- BasSeg - TotDesc;
	 Escreva(ValSeg);
	 */
	 
void main ()
{
float ValCar, BasSeg, DescSex, DescIda1, DescIda2, DescMot, DescDir, TotDesc, ValSeg;
int idade, PerfilMot, PerfilDir;
char sexo;

printf("\nInforme o valor do carro R$");
scanf("%f", &ValCar); 

printf("\nO Dono do carro e do sexo Maculino (M) ou  Feminino (F)? ");
sexo = getche();

printf("\nInforme a idade do dono do carro: ");
scanf("%f", &idade); 

printf("\nInforme o perfil do motorista");
printf("\nDigite:");
printf("\n1 - Unico Motorista");
printf("\n2 - Outros casos\n");
scanf("%i", &PerfilMot); 

printf("\nInforme o local onde dirige");
printf("\nDigite:");
printf("\n1 - Somente na cidade");
printf("\n2 - Outros casos\n");
scanf("%i", &PerfilDir); 

BasSeg = ValCar*0.1;

if(sexo=='F' || sexo=='f')
     DescSex = BasSeg*0.075;
else 
     DescSex = 0;
	 
if(idade>=26 && idade<=35)
     DescIda1 = BasSeg*0.025;
else 
     DescIda1 = 0;
	 
if(idade>35)
     DescIda2 = BasSeg*0.037;
else 
     DescIda2 = 0;
	 
if(PerfilMot==1)
     DescMot = BasSeg*0.015;
else 
     DescMot = 0;
	 
if(PerfilDir==1)
     DescDir = BasSeg*0.018;
else 
     DescDir = 0;
	 
TotDesc = DescSex + DescIda1 + DescIda2 + DescMot + DescDir;
ValSeg = BasSeg - TotDesc;

printf("O valor final do seguro e R$%.2f", ValSeg);
}

	 