#include<stdio.h>
#include<stdlib.h>

#define M 5

int main(){
    int a = 0;
    printf("a starting value: %d\n",a);
    for (int i = 1; i<=5; i++){
        calc(&a,i);

        printf("a value after iteration %d: %d\n",i,a);
    }
    printf("a final value: %d\n",a);
}

void calc(int *a, int i){
    int toAdd = (i+1)*(3*i+1);
    toAdd = (toAdd*M)/3;
    *a += toAdd;
}