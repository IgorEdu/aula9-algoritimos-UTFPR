/*4. Faça um programa que receba a idade, a altura de 15 pessoas. Calcule e escreva:
a) a quantidade de pessoas com idade superior a 50 anos;
b) a média das alturas das pessoas com idade entre 10 e 20 anos;
c) a maior altura encontrada;*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int CONT, IDADE, ALTURA, IDOSO, JOVEM, MAIOR_ALT, SOMA_ALT;
    IDOSO = JOVEM = MAIOR_ALT = SOMA_ALT = 0;

    for(CONT=0; CONT<=15; CONT++){
        printf("Digite a idade da pessoa: \n");
        scanf("%d", &IDADE);
        printf("Digite a altura da pessoa: \n");
        scanf("%d", &ALTURA);
        if(IDADE > 50)
            IDOSO++;
        else if (IDADE >= 10 && IDADE <= 20){
            SOMA_ALT += ALTURA;
            JOVEM++;
        }
        if(ALTURA > MAIOR_ALT)
            MAIOR_ALT = ALTURA;
    }
    printf("A quantidade de pessoas com idade superior a 50 e: %d\n", IDOSO);
    printf("A media das alturas das pessoas com idade entre 10 e 20 anos e: %d\n", (float)(SOMA_ALT/JOVEM));
    printf("A maior altura encontrada foi: %d", MAIOR_ALT);
    system("pause");
    return 0;
}
