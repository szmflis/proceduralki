#include<stdio.h>
#include<stdlib.h>

int main() {
    int tab_a[20][20];
    int tab_b[20][20];
    for (int i = 0; i<20; i++){
        for (int j = 0; j<20; j++){
            tab_a[i][j] = 1;
            tab_b[i][j] = 1;
        }
    }

    printer(tab_a);
    printer(tab_b);

    multiply(tab_a);
    multiply(tab_b);

    printer(tab_a);
    printer(tab_b);

    adding(tab_a, tab_b);

    printer(tab_a);
    printer(tab_b);
}

void multiply(int tab[][20]){
    int mul = 0;
    printf("Input multiplication argument for array (2 - 50): ");
    scanf("%d",&mul);
    for (int i = 0; i<20; i++){
        for (int j = 0; j<20; j++){
            tab[i][j] *= mul;
        }
    }
}

void adding(int tab_a[][20], int tab_b[][20]){
    for (int i = 0; i<20; i++){
        for (int j = 0; j<20; j++){
            tab_a[i][j] += tab_b[i][j];
            tab_b[i][j] += tab_a[i][j];
        }
    }
}

void printer(int tab[][20]){
    for (int i = 0; i<20; i++){
        for (int j = 0; j<20; j++){
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }    
    printf("\n\n\n");

}