#include<stdlib.h>
#include<stdio.h>

int main(){
    int fibnum = 0;
    printf("Input fib: \n");
    scanf("%d",&fibnum);
    printf("Fib num %d: %d\n", fibnum, fib(fibnum));
}

int fib(int a){
    if (a == 0){
        return 0;
    } else if (a == 1){
        return 1;
    } else {
        return fib(a-1) + fib(a-2);
    }
}