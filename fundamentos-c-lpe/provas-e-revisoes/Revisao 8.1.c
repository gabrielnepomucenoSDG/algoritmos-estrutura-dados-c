#include <stdio.h>

int main () {
    int i, m, mmv;
    float s, v, mv, ms;
    mmv=mv=ms=0;

    for (i = 1; i<=5; i++) {

        do {
            printf("Digite mat, tvm, e sal, nessa ordem.\n");
            scanf("%d%f%f",&m,&v,&s);

        } while (v <0 || s < 0);

        if (v>20000)
            s*=1.09;

        if(v<20000&&v>=10000)
            s*=1.07;

        if (v<10000&&v>=5000)
            s*=1.05;

        if (s>ms)
            ms=s;

        if(v>mv) {
            mv = v;
            mmv = m;
        }

        printf("%d\n%f\n",m,s);

    

    }

    printf("Melhor vendedor do mês:\n%d\n%f",mmv,mv);
    printf("Maior salário:\n\n%f",ms);

    return 0;
}