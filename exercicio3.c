/*3. Tem-se um conjunto de dados contendo a altura e o sexo (masculino, feminino) de 50 pessoas.
Fazer um algoritmo que calcule e escreva:
a) a maior e a menor altura do grupo;
b) a média de altura das mulheres;
c) o número de homens.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int CONT, SEXO, ALTURA, MAIOR_ALT, MENOR_ATL, CONT_F, SOMA_ALT_F, CONT_M;
    MAIOR_ALT = 0;
    MENOR_ATL = 300;
    CONT_F = CONT_M = 0;
    SOMA_ALT_F = 0;
    for(CONT = 0; CONT <= 50; CONT++){
        do{
            printf("Digite o sexo:\n\t 0 - masculino\n\t 1 - feminino\n");
            scanf("%d", &SEXO);
        } while(SEXO != 0 && SEXO != 1);
        printf("Digite a altura:\n");
        scanf("%d", &ALTURA);
        if(ALTURA < MENOR_ATL){
            MENOR_ATL = ALTURA;
        }
        if(ALTURA > MAIOR_ALT){
            MAIOR_ALT = ALTURA;
        }

        if(SEXO == 1){
            SOMA_ALT_F+=ALTURA;
            CONT_F++;
        }
        else {
            CONT_M++;
        }
    }
    printf("A maior altura do gurpo e: %d\n", MAIOR_ALT);
    printf("A menor altura do grupo e: %d\n", MENOR_ATL);
    printf("A media da altura das mulheres e: %d\n", (float)(SOMA_ALT_F/CONT_F));
    printf("O numero de homens do grupo e: %d\n", CONT_M);
    system("pause");
    return 0;
}
