typedef char DadosChar[10];

void main ()
{

DadosChar matriz;
int lin;
matriz[5] = 'e';

for (lin=1;lin<=10;lin++){
printf("\nmatriz[%i] = %c", lin, matriz[lin]);
}}