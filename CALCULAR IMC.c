//Marcos Kazuya Yamazaki

void main (void)

{
float pso, alt, imc;

printf("Qual o seu peso em kg? ");
scanf("%f", &pso);
printf("\n qual a sua altura em metros? ");
scanf("%f", &alt);

imc= pso/(alt*alt);

printf("Seu indice de massa corporal e %.2f", imc);

if (imc<=18.5)
printf("\n\nVoce esta com um peso normal para a sua altura\n\n"); 
else
if (imc>18.5)
printf("\n\nVoce esta gorda!\n\n");
}