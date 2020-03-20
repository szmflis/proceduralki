#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int findMax(int sizeFirstDim,int sizeScndDim,int tab[sizeFirstDim][sizeScndDim]){
    int currentMax = tab[0][0];
    for (int i = 0; i<sizeFirstDim; i++){
        for (int j = 0; j<sizeScndDim; j++){
            if (tab[i][j] > currentMax){
                currentMax = tab[i][j];
            }
        }
    }
    return currentMax;
}

int findMin(int sizeFirstDim,int sizeScndDim,int tab[sizeFirstDim][sizeScndDim]){
    int currentMin = tab[0][0];
    for (int i = 0; i<sizeFirstDim; i++){
        for (int j = 0; j<sizeScndDim; j++){
            if (tab[i][j] < currentMin){
                currentMin = tab[i][j];
            }
        }
    }
    return currentMin;
}

int main(){
    srand(time(NULL));
    int x = 0;
    int y = 0;
    printf("Input first dimension of array (1 - 10): \n");
    scanf("%d",&x);
    printf("Input first dimension of array (1 - 10): \n");
    scanf("%d",&y);
    int tab[x][y];
    for (int i = 0; i<x; i++){
        for (int j = 0; j<y; j++){
            tab[i][j] = (rand()%1000) + 1;
        }
    }
    printf("\nThe Array:\n");

    for (int i = 0; i<x; i++){
        for (int j = 0; j<y; j++){
            printf("%d\t",tab[i][j]);
        }
        printf("\n\n");
    }

    printf("Current maximum: %d\n", findMax(x,y,tab));
    printf("Current minimum: %d\n", findMin(x,y,tab));
}