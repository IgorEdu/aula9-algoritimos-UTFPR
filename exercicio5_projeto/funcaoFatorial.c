#include<stdio.h>
#include<stdlib.h>


float funcaoFatorial(int N){
    int AUX, FAT;
    FAT = 1;
    AUX = N;
    while(AUX > 0){
        FAT *= AUX;
        AUX--;
    }
    printf("O fatorial de %d e %d\n", N, FAT);

    return FAT;
}
