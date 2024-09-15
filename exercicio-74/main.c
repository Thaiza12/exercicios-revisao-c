#include <stdio.h>

int main(){
    int v[6];
    int i;

    printf("Infome 10 números inteiros: \n");
    for(i=0; i<6; i++){
        scanf("%d", &v[i]);
    }

    printf("Os números digitados são:");
        for(i=0; i<6; i++){
            printf("%d", v[i]);
        }
}
