#include <stdio.h>

int main () {
    char n;
    scanf("%d",&n);

    switch (n){
        case 1:
        
            printf("A");
            break;

        case 2 ... 100:
            printf("case 2 certinho");
            break;

        default:
            printf("Você não se enquadrou em nenhum caso");
    }

}