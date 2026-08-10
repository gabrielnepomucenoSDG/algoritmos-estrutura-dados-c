#include <stdio.h>

void maisum (int *n){
    int s = 1;
    *n += s;
}

void maisdois (int *n) {
    int s = 2;
    *n += s;

}


int main (){
    int s = 3;
    printf("%d",s);
    maisum(&s);
    printf("%d",s);
    maisdois(&s);
    printf("%d",s);



}