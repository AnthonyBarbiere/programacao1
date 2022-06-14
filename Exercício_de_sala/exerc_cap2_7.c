#include <stdio.h>
int main()
{

    

    int Numero;

    printf("Exercicio 5\nDigite um numero:");
    //fflush(stdin);
    scanf("%d",&Numero);

    if(Numero > 20 && Numero < 50)
        printf("%d esta entre 20 e 50\n",Numero);
    
    else
        printf("%d nao nao esta entre 20 e 50\n",Numero);
    }
