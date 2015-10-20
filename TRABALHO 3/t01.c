// trab3.01

void main ()
{
    int divisor, prova, numero, bin, cont, bin2;
	
	divisor = 128;
    bin = 0;	
	bin2 = 10000000;
	
	printf("\nEscreva um numero entre 0 e 255: ");
	scanf("%i", &numero);
	
    for (cont=1;cont<=8;cont++)
	{    
		prova = numero-divisor;
		
		if(prova>=0)
		    {
			numero = prova;
			bin = bin + bin2;
			}
		else
		    bin = bin;
			
	    divisor = divisor/2;
		bin2 = bin2/10;
	}
	printf("\n%i", bin);
}