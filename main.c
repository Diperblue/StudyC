#include<stdio.h>
#include<stdlib.h>

char* get_string(size_t length) { // size_t = unsigned int, char* - Por que? Simples, o programa retornara um char point, é por isso o char devera ser um ponteiro.
  char* my_str = calloc(length, sizeof(char)); // char* - Retornara um ponteiro para o endereço de memoria alocado e por isso devera ser um char*. Calloc aloca a memoria de length que a memoria inserida.

  return my_str; // retorna o ponteiro para a memoria alocada.
}

int main(int a, int b)
{
  char *str = get_string(25);
  str = "testando";
  printf("%s\n", str);
  return 0;
}
