/*1. Faça um programa que leia um número inteiro e calcule e escreva a tabuada deste número
(usando estrutura de repetição)*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int NUM, MULT;
    for(NUM = 2; NUM <= 9; NUM++){
        for(MULT = 0; MULT<=10; MULT++){
            printf("%d * %d = %d\n", NUM, MULT, NUM*MULT);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
