/*6. Fazer um programa que calcule e escreva a soma dos 50 primeiros termos da série:
1!
1 − 2 !
3 3 !
7 − 4 !
15 5!
31 − ...*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int DIVIDENDO, CONT;
    long long SOMA;
    DIVIDENDO = 1;
    SOMA = 1.0;
    for(CONT = 2; CONT <= 50; CONT++){
        if(CONT%2==0){
            SOMA = SOMA-(funcaoFatorial(CONT)/((DIVIDENDO*2)+1));
        }
        else{
            SOMA = SOMA+(funcaoFatorial(CONT)/((DIVIDENDO*2)+1));
        }
    }
    printf("A soma foi %lld\n", SOMA);
    system("pause");
    return 0;
}
