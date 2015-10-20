//Marcos Kazuya Yamazaki
//Data: 25/09/2010
/* L4E2.c */

void main ()
{
float tempC, tempF;

for(tempF=50;tempF<=150;tempF=tempF+1)
     {
	 tempC = 5*(tempF-32)/9;
	 printf("Para %.1fF, sao %.1fC\n", tempF,tempC);
	 }
}