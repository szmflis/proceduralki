#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void printTab(int firstDim, int scndDim, float tab[firstDim][scndDim]){
    for (int i = 0; i < firstDim; i++){
        for (int j = 0; j < scndDim; j++){
            printf("%.2f\t", (float)tab[i][j]);
        }
        printf("\n");
    }
}

void randNums(int firstDim, int scndDim, float tab[firstDim][scndDim]){
    srand(time(NULL));
    for (int i = 0; i < firstDim; i++){
        for (int j = 0; j < scndDim; j++){
            if (i == j){
                tab[i][j] = (float)rand()/(float)RAND_MAX;     
            }
        }
    }
}

int main(){
    int firstDim, scndDim;
    printf("Input first dimension of array:\n");
    scanf("%d", &firstDim);
    printf("Input second dimension of array:\n");
    scanf("%d", &scndDim);


    float **tab;
    tab = (float **)calloc(firstDim,sizeof(float *));
    for (int i = 0; i<firstDim; i++){
        tab[i] = (float *)calloc(scndDim,sizeof(float));
    }

    //randNums(firstDim, scndDim, tab);
    printTab(firstDim, scndDim, tab);
}