#include<stdio.h>
#include<stdlib.h>

int main(){
    int tab[10][10][10];
    zeros(tab);
    fifties(tab);
    printer(tab);
}

void zeros(int tab[][10][10]){
    for (int i = 0; i<10; i++){
        for (int j = 0; j<10; j++){
            for (int k = 0; k<10; k++){
                tab[i][j][k] = 0;
            }   
        }   
    }
}

void fifties(int tab[][10][10]){
    for (int i = 0; i<10; i++){
        for (int j = 0; j<10; j++){
            for (int k = 0; k<10; k++){
                if (i == k == j){
                    tab[i][j][k] = 50;
                }
            }   
        }   
    }
}

void printer(int tab[][10][10]){
    for (int i = 0; i<10; i++){
        for (int j = 0; j<10; j++){
            for (int k = 0; k<10; k++){
                printf("%d ", tab[i][j][k]);
            }   
            printf("%\n");
        }
        printf("\n\n");   
    }
}
