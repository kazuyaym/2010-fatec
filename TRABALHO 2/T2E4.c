//Marcos Kazuya Yamazaki
//Data: 04/10/2010
/* T2E4.c */

void main ()
{
int otimo, bom, ruim, cont;
char opi;

otimo = 0;
bom = 0;
ruim = 0;

for (cont=1;cont<=10;cont=cont+1)
    {
	 printf("\nColoque a sua opiniao sobre o filme (O/B/R): ");
	 opi=getche();
	 if(opi=='O' || opi=='o')
	     otimo = otimo + 1;
	 if(opi=='B' || opi=='b')
	     bom = bom + 1;
	 if(opi=='R' || opi=='r')
	     ruim = ruim + 1;
	}
printf("\n%i OTIMO, %i BOM, %i RUIM\n", otimo, bom, ruim);
}