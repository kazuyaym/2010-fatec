//Marcos Kazuya Yamazaki
//Data: 17/09/2010
//L3E4.c

void main ()
{
     float salfun, valrec;
     printf("\nInforme o salario do funcionario R$");
     scanf("%f", &salfun);
     if (salfun<=450)
         valrec = salfun*0.93+100;
     if (salfun>450 && salfun<=700)
         valrec = salfun*0.93+75;
     if (salfun>700 && salfun<=1000)
         valrec = salfun*0.93+50;
     if (salfun>1000)
         valrec = salfun*0.93+35;
     printf("O valor do salario final e R$%.2f\n", valrec);
}
