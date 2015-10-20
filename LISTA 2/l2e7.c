//Marcos Kazuya Yamazaki
//Data: 10/09/2010
//L2E7.c

void main (void)
{
int NumTrab, setor, func;
float horas, HorasExt, salario;

printf("\nInforme o codigo do fincionario: ");
scanf("%i", &NumTrab);
printf("Informe o numero de horas trabalhada: ");
scanf("%f", &horas);

setor= NumTrab/1000;
func= NumTrab%1000;

if (horas>400)
   HorasExt=horas-400;
else 
   HorasExt=0;

if (setor==1) {
   salario= 7.8*(horas+HorasExt*0.1);
   printf("\n\nO funcionario %i do setor %i, recebe um salario de R$%.2f.\n", func, setor, salario);
   }
if (setor==2) {
   salario= 11.5*(horas+HorasExt*0.1);
   printf("\n\nO funcionario %i do setor %i, recebe um salario de R$%.2f.\n", func, setor, salario);
   }
if (setor==3) {
   salario= 18.25*(horas+HorasExt*0.1);
   printf("\n\nO funcionario %i do setor %i, recebe um salario de R$%.2f.\n", func, setor, salario);
   }
if (setor>3)
   printf("Funcionario Inexistente\n");

}