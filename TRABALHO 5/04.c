typedef int DadosInteiro[5][5];
typedef int DadosPerc[7];

void main (void)
{
    DadosInteiro dist;
	DadosPerc perc;
	int soma, opcao, cid1, cid2;
	char continua;
	
	for (cid1=1;cid1<=5;cid1++)
	{
	    dist[cid1][cid1] = 0;
	}
	dist[1][2] = 15; dist[1][3] = 30; dist[1][4] = 5; dist[1][5] = 12; dist[2][3] = 10;
	dist[2][4] = 17; dist[2][5] = 28; dist[3][4] = 3; dist[3][5] = 11; dist[4][5] = 80;
	
	for (cid1=1;cid1<=5;cid1++){
	    for (cid2=1;cid2<=5;cid2++){
            dist[cid2][cid1] = dist[cid1][cid2];
	}}
	
	/*
	
	printf("\n");
	for(cid1=1;cid1<=5;cid1++){
	    for(cid2=1;cid2<=5;cid2++){
		    printf("\nDistancia[%i][%i] = %i", cid1, cid2, dist[cid1][cid2]);}}
	printf("\n");
	
	*/
	
	do{
	    printf("\n\nDigite 1 para calcular a distancia entre\nduas cidades ou 2 para fazer um percurso\n");
		scanf("%i", &opcao);
		
		if (opcao==1){
		        printf("\nDe 1 a 5, digite a cidade de partida: ");
			    scanf("%i", &cid1);
		    	printf("De 1 a 5, digite a cidade de chagada: ");
		    	scanf("%i", &cid2);
	            printf("\nA distancia entre as duas cidades e %ikm\n", dist[cid1][cid2]);}
		  
	    if (opcao==2){
		        printf("\nDe 1 a 5, digite a cidade de partida: ");
		     	scanf("%i", &perc[1]);
				
		    	cid1 = 2;
			
		    	do{
		     	    printf("\nDe 1 a 5, digite a cidade: ");
		     		scanf("%i", &perc[cid1]);
		     		cid1++;
		     		if (cid1<=7){
		    		    printf("\nDeseja continuar a fazer o percurso (S/N): ");
		    			continua = getche ();}
			    	else
			    	    continua = 'n';
		        } while (continua=='s' || continua=='S');
				/*} while (cid1<=7);*/
		 	
		    	soma = 0;
		    	cid1 = 2;
		    
		    	do{
	     		   soma = soma + dist[perc[cid1 - 1]][perc[cid1]];
	    		   cid1++;
				} while (perc[cid1]>0 && perc[cid1]<6 && cid1<8);
				
			
			printf("\nA distancia total do percurso e %ikm", soma);}
			
	printf("\n\nDeseja continuar? (S/N): ");
	continua = getche ();
			
	} while (continua=='S' || continua=='s');
}