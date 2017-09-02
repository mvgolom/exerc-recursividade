#include <stdio.h>


int factorial(int n) {
  if (n == 0){ // caso base ou instrucao de parada
    return 1;
  }
  else{
    return n * factorial(n - 1);
  }  
}
  
int main() {
  int n = 3;
  printf("%d",factorial(n));
  getchar();
  return 0;
}