float CalcPesoIdeal(float A, char S)
{
float Peso;

if (S=='m' || S=='M')
    Peso = (72.7*A)-58;
else
    Peso = (62.1*A)-44.7;
	
return(Peso);
}

void main ()
{
float altura;
char sexo;

printf("\nInforme a altura(em metros): ");
scanf("%f", &altura);
printf("\nInforme o sexo [masculino/feminino]: ");
sexo = getche();

CalcPesoIdeal(altura, sexo);

printf("\n\nO peso ideal e %.2fkg", CalcPesoIdeal(altura,sexo));
}