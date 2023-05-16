/*2. Faça um programa em C que escreve os números múltiplos de 7 entre 100 e 200, bem como a
soma destes números.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int NUM , SOMA;
    NUM = 100;
    SOMA = 0;
    for(NUM; NUM <= 200; NUM++){
        if(NUM%7==0){
            printf("%d\n", NUM);
            SOMA+=NUM;
        }
    }
    printf("A soma dos valores que são múltiplos de 7 é: %d\n", SOMA);
    system("pause");
    return 0;
}
