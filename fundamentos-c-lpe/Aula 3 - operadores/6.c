#include<stdio.h>
#include<locale.h>

int main()
{
    int n, na, ns;
    
    printf("digite um número: ");
    scanf("%d",&n);
    
    na = n-1;
    ns = n+1;
    
    printf("O antecessor dele é %d/n",na);
    printf("O sucessor dele é %d/n",ns);
    return 0;
    
}