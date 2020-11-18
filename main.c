#include <stdio.h>

/*9.	Crie a função Fatorial que receba da função main um número inteiro maior ou igual 
a zero e calcule o fatorial desse número. Exiba na função main o número e o seu respectivo fatorial obtido na função Fatorial.*/

int fatorial(int fat){


}

int main() {
  
  int x;
  do{
  printf("Digite um número maior ou igual a zero:\n");
  scanf("%d", &x);
    if(x < 0){
      printf("Número invalido.\n");
    }
  } while (x < 0);

  fatorial(x);
}