#include<stdio.h>
#include<stdlib.h>


double funcaoFatorial(int N){
    int AUX;
    long long FAT;
    FAT = 1;
    AUX = N;
    while(AUX > 0){
        FAT *= AUX;
        AUX--;
    }
    printf("O fatorial de %d e %lld\n", N, FAT);

    return FAT;
}
