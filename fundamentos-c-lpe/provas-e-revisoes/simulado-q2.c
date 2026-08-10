#include <stdio.h>

    int main () {
    int A[8] = {1,0,5,-2,-5,3};
    int s = A[0]+A[1]+A[5];
    int i;
    printf("%d",s);
    A[4]=239;


    for (i=0;i<8;i++){
        printf("\n%d",A[i]);
    }


}