# inclui  < stdio.h >
int  principal ()
{
  int nasc, anoAtual, idade;
printf ( " Informe seu ano de nascimento: \n " );
scanf ( " %d " , &nasc);
printf ( " Informe o ano atual: \n " );
scanf ( " %d " , &anoAtual);

  if (nasc > 0 && nasc <= anoAtual) {
idade = anoAtual - nasc;
  printf ( " Sua idade é: %d " , idade);
  }

  senão
printf ( " O ano inserido não é válido " );

} 	  
