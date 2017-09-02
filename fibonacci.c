#include <stdio.h>

int fibRec(int n) {
    if(n < 2){
        return n;
    }
    else{
        return fibRec(n-1) + fibRec(n-2);
    }
}


int main(){
int n = 10;

printf("%d",fibRec(n));
return 0;
}
