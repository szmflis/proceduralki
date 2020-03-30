#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void printTab(int firstDim, int scndDim, double tab[firstDim][scndDim]){
    for (int i = 0; i < firstDim; i++){
        for (int j = 0; j < scndDim; j++){
            printf("%.2f\t", (double)tab[i][j]);
        }
        printf("\n");
    }
}

void randNums(int firstDim, int scndDim, double tab[firstDim][scndDim]){
    srand(time(NULL));
    for (int i = 0; i < firstDim; i++){
        for (int j = 0; j < scndDim; j++){
            if (i == j){
                tab[i][j] = (double)rand()/(double)RAND_MAX;     
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


    double** tab;
    tab = (double **)calloc(firstDim,sizeof(double *));
    for (int i = 0; i<firstDim; i++){
        tab[i] = (double *)calloc(scndDim,sizeof(double));
    }

    printTab(firstDim, scndDim, tab);
}