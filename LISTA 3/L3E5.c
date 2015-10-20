//Marcos Kazuya Yamazaki
//Data: 17/09/2010
//L3E5.c

void main ()
{
float preco, novpre;
printf("\nInforme o preco do produto R$");
scanf("%f", &preco);
if (preco<=500)
     novpre = preco*1.05;
if (preco>500 && preco <=1000)
     novpre = preco*1.1;
if (preco>1000)
     novpre = preco*1.15;
if (novpre<=800)
     printf("O novo valor do produto e R$%.2f, classificado como produto Barato\n", novpre);
if (novpre>800 && novpre<=1200)
     printf("O novo valor do preduto e R$%.2f, classificado como produto Normal\n", novpre);
if (novpre>1200 && novpre<=2000)
     printf("O novo valor do preduto e R$%.2f, classificado como produto Caro\n", novpre);
if (novpre>2000)
     printf("O novo valor do preduto e R$%.2f, classificado como produto Muito Caro\n", novpre);
}