/*1. Fa�a um programa que leia um n�mero inteiro e calcule e escreva a tabuada deste n�mero
(usando estrutura de repeti��o)*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int NUM, MULT;
    printf("Digite um numero \n");
    scanf("%d",&NUM);
    for(MULT = 0; MULT<=10; MULT++){
        printf("%d * %d = %d\n", NUM, MULT, NUM*MULT);
    }
    system("pause");
    return 0;
}
