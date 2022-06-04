#include <stdio.h>
int main()
{
 printf("Oi, mundo\n");
 printf("%10d \n", 13);
 printf("%05.2f  \n",  7.14);
 printf("%05.2f \n",  27.20);
 printf("%30s \n", "gabriel");
 printf("nome: %s idade:%d \n", "Gabriel", 22);

/*matrícula: 2021100315
início:
*/
#include <stdio.h>
int main()
{

float monE, tueE, thuE, wedE, friE, pagamento, somatorio, monS, tueS, thuS, wedS, friS

printf("Digite os valores de entrada monE")
scanf("%f",&monE);
printf("Digite os valores de saída monS")
scanf("%f",&monS);

printf("Digite os valores de entrada tueE")
scanf("%f",&tueE);
printf("Digite os valores de saída tueS")
scanf("%f",&tueS);

printf("Digite os valores de entrada thuE")
scanf("%f",&thuE);
printf("Digite os valores de saída thuS")
scanf("%f",&thuS);

printf("Digite os valores de entrada wedE")
scanf("%f",&wedE);
printf("Digite os valores de saída wedS")
scanf("%f",&wedS);

printf("Digite os valores de entrada friE")
scanf("%f",&friE);
printf("Digite os valores de saída friS")
scanf("%f",&friS);
}

 
 
 #include <stdio.h>
int main() {

//variáveis
float imc, massa, altura;

//início
printf("informe o seu peso:");
scanf("%f", &massa);

printf("informe sua altura");
scanf("%f",&altura);

imc = massa/(altura*altura);

if(imc < 18.5)
   printf("magro\n");

else if(imc < 25)
   printf("normal\n");
 
else if(imc < 30)
   printf("sobrepeso\n");
   
else printf("obeso\n");      
  






}
