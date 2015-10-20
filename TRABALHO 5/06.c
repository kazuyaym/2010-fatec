float CalcPesoIdeal(float A, char S)
{
float Peso;

if (S=='m' || S=='M')
    Peso = (72.7*A)-58;
else
    Peso = (62.1*A)-44.7;
	
return(Peso);
}

typedef float DadosReal[20];

void main ()
{
    DadosReal maltura;
    int lin;
    char sexo;

	printf("\nSendo numeros impares alturas femininas e pares masculinos\n");
    for (lin=1;lin<=20;lin++)
    {
	printf("Digite a altura da pessoa %i: ", lin);
	scanf("%f", &maltura[lin]);
	}

printf("\n");
for (lin=1;lin<=20;lin++){

if (lin % 2 == 1)
    sexo = 'f';
else
    sexo = 'm';
	
CalcPesoIdeal(maltura[lin], sexo);
printf("\nO peso ideal da pessoa %i e %.2f", lin, CalcPesoIdeal(maltura[lin], sexo));
}
}