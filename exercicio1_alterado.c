/*1. Fa�a um programa que leia um n�mero inteiro e calcule e escreva a tabuada deste n�mero
(usando estrutura de repeti��o)*/

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
