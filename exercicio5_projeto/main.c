/*5. Fazer um algoritmo para determinar e escrever o valor do seguinte somatório:
S = X – X2/3! + X4/5! – X6/7! + X8/!9 - ...
usando os n primeiros termos do somatório. O valor de X e de n é fornecido pelo usuário*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int N, CONT, NUM_FAT;
    float S, X;
    S = X;
    NUM_FAT = 3;
    printf("Digite a quantidade de vezes que deseja realizar a somatoria (termo n)\n");
    scanf("%d", &N);
    printf("Digite o valor de X\n");
    scanf("%f", &X);
    for(CONT = 1; CONT <= N; CONT++){
        if(CONT%2==0){
            S = S-(X*(CONT*2))/funcaoFatorial(NUM_FAT);
        }
        else{
            S = S+(X*(CONT*2))/funcaoFatorial(NUM_FAT);
        }
        NUM_FAT = NUM_FAT+2;
    }
    printf("A soma foi %f\n", S);
    system("pause");
    return 0;
}

