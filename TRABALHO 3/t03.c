void main ()

{

    int mes, semana, nummesmenor, nummesmaior;
	float leisem, leimes, medsem, medmes, maiormes, menormes, maiorsem, menorsem, soma;
	
	leimes = 0;
	soma = 0;
	
	for (mes=1;mes<=6;mes++)
	
	
	{
	    for (semana=1;semana<=4;semana++)
		
		
	    {
		        printf("Digite o dado pluviometrico da %i. semana do mes %i: ", semana, mes);
		        scanf("%f", &leisem);
		        
				leimes = leimes + leisem;
				
	          	if (mes==1 && semana==1)
	        	{
		            maiorsem = leisem;
		    	    menorsem = leisem;
		        }
		    	else
		    	{
			        if (leisem > maiorsem)
			     	    maiorsem = leisem;
			    	if (leisem < menorsem)
			     	    menorsem = leisem;
		    	}
		}
	    
		if (mes==1)
		{
		    maiormes = leimes;
			nummesmaior = mes;
			menormes = leimes;
			nummesmenor = mes;
		}
	    else
		{
		    if (leimes > maiormes)
			{    
				maiormes = leimes;
				nummesmaior = mes;
			}	
			if (leimes < menormes)
			{    
				menormes = leimes;
				nummesmenor = mes;
			}		
		}
		
		soma = soma + leimes;
		leimes = 0;
	}
	
	medsem = soma/24;
	medmes = soma/6;
	
	printf("\n\nDado da maior semana: %.2f", maiorsem);
	printf("\nDado da menor semana: %.2f", menorsem);
	
	printf("\n\nMaior mes:%i, com %.2f", nummesmaior, maiormes);
	printf("\nMenor mes:%i, com %.2f", nummesmenor, menormes);
	
	printf("\n\nMedia semanal: %.2f", medsem);
	printf("\nMedia mensal: %.2f\n", medmes);

}