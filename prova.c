# include <stdio.h>

main (){
 	int tamanhoPraia;
    int numSorvete;
	int teste = 1;
	
	scanf("%i", &tamanhoPraia);
	scanf("%i", &numSorvete);
  
	while (tamanhoPraia != 0 && numSorvete != 0){
		int inferior, superior;

        typedef int TabPraia[tamanhoPraia];
        TabPraia Praia;
        int i;
        for(i = 0; i < tamanhoPraia; i++){
                Praia[i] = 0;
                }
		   
		for(i = 1; i <= numSorvete; i++){
			scanf("%i", &inferior);
			scanf("%i", &superior);

			for (inferior = inferior ; inferior < superior; inferior++){
				Praia[inferior] = 1;
			}
		}

		printf("Teste %i\n", teste);
		teste++;
		int liga = 0;

		for(i = 0; i < tamanhoPraia; i++){
			if (Praia[i] != liga){
				if (Praia[i] == 1){
					printf("%i ", i);
					liga = 1;
				}
				if (Praia[i] == 0){
					printf("%i\n", i);
					liga = 0;
				}
			}
			if(i == (tamanhoPraia - 1) && Praia[i] == 1)
				printf("%i", (i+1));

		}
		printf("\n\n");
		
		scanf("%i", &tamanhoPraia);
        scanf("%i", &numSorvete);
	}

}
