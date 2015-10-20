void main ()
{
    int cont, resto;
	float erro, raiz, x, y, numero;
	
	printf("\nEscreva um numero real: ");
	scanf("%f", &numero);
	
	x = 0;
	y = numero;
	cont = 0;
	
	do
	{
	    raiz = (x+y)/2;
		cont = cont+1;
		resto = cont%2;
		erro = (raiz*raiz)-numero;
		
		if (resto==0)
		    x = raiz;
		else
		    y = raiz;
			
		if (erro<0)
		    erro = (-1)*erro;
		else
		    erro = erro;
		
		} while (erro > 0.000001);
	
	printf("\n%f", raiz);
}