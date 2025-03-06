#include <stdio.h>

int main(){
    int vetor [] = {2, 4, 6, 9, 10, 12, 14, 16, 18, 20};
    printf("endereco = %x\n", vetor);
    printf("endereço = %x\n", &vetor[2]);
    printf("endereço = %x\n", vetor+2);
}