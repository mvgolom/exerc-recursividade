#include <stdio.h>

//calculo da potencia
long int getPower(int base,int expoente){
    long int result=1;
    if(expoente==0) return result;
    result=base*(getPower(base,expoente-1)); 
 }


 
 int main(){
    int base = 2;
    int expoente = 5;
    long int result;
     
    result=getPower(base,expoente);
    printf("%d com o expoente de %d e: %ld\n",base,expoente,result);
    return 0;
 }

