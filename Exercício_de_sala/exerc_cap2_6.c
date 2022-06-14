#include <stdio.h>
int main()
{

    
float salbruto, valprest ;

printf("Informe o salário: R$");
scanf("%f", &salbruto);

printf(" Valor da prestação: R$");
scanf("%f", &valprest);

printf("Valor máximo para prestação: R$", (salbruto) * 0.30);

if(valprest <= salbruto * 0.30)
    printf("Emprestimo concedido!");
    
else
    printf("Emprestimo negado!");
    
    
}
