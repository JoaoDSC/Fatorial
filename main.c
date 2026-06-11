#include<stdio.h>

int fatorial(int n){
    if(n == 0)
    return 1;

    printf("%d x ", n);
    return n * fatorial(n-1);
}
int main(){
    int num;
    
    printf("Escreva um numero\n");
    scanf("%d", &num);

    printf("= %d\n", fatorial(num));

    return 0;
}