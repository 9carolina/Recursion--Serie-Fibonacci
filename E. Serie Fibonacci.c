#include <stdio.h>

unsigned long long int fibo(int);

void printFibonacci(int n, int i, unsigned long long int a, unsigned long long int b) {
    if (i<=n) {
        if (i==0) {
            printf("0 ");
            printFibonacci(n, i+1, 0, 1);
        } else {
            if (i==1) {
                printf("1 ");
            } else {
                printf("%llu ", a+b);
            }
            if (i<n){
                printFibonacci(n, i+1, b, a+b);
            }
        }
    }
}

int main(){
    int n1;

    printf("Digite un numero: ");
    scanf("%d", &n1);

    if (n1<=0){
        printf("El número debe ser mayor que 0.\n");
    } else{
        printFibonacci(n1-1, 0, 0, 1);  
    }
    return 0;
}

unsigned long long int fibo(int i){
    if (i<0){
        return 0;
    }
    if (i<2){
        return i;
    }
    return fibo(i-1) + fibo(i-2);
}

