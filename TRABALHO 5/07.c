void main ()
{
int opcao, num;

printf("Digite 1 para calcular numero invertido\nDigite 0 para fechar o programa\n");
scanf("%i", &opcao);

if (opcao==1)
    {
	printf("Digite um numero inteiro: ");
	scanf("%i", &num);
	printf("\nO numero invertido e: %i", InverteNumero(num));
	
	}
}

int InverteNumero(int N)
{
int test, mult, cont1, cont2, rest, inv; 
cont1 = 0;
test = N;
mult = 1;
inv = 0;

while (test>0)
    {
	cont1 = cont1 + 1;
	test = test/10;
	}

for(cont2=1;cont2<=cont1-1;cont2++)
    {
	mult = mult * 10;
	}

for(cont2=1;cont2<=cont1;cont2++)
    {
	rest = N%10;
	N = N/10;
	inv = inv + rest*mult;
	mult = mult/10;
	}
	
return(inv);
}
