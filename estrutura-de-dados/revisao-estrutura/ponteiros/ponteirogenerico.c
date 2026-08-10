#include <stdio.h>
#include <stdlib.h>


int main(){
    int x = 2;
    void *p = &x;
    //int y = *(int*) p;
    printf("%d", *(int*) p);
    
}