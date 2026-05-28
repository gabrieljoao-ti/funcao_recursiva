#include <stdio.h>

long long fatorial(long long n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    return n * fatorial(n - 1);
    
}

int main (void){

    long long numero=20;
    long long resultado=fatorial(numero);
    printf("O resultado do fatorial de %lld e %lld\n",numero,resultado);

    system("pause");
    return 0;
}
