/*2. Fa�a um programa em C que escreve os n�meros m�ltiplos de 7 entre 100 e 200, bem como a
soma destes n�meros.*/

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
    printf("A soma dos valores que s�o m�ltiplos de 7 �: %d\n", SOMA);
    system("pause");
    return 0;
}
