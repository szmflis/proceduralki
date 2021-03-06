#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void printTab(int firstDim, int scndDim, double **tab);
void randNums(int firstDim, double **tab);
double traceOfArray(int firstDim, double **tab);

int main(){
    int firstDim, scndDim;
    printf("Input dimensions of array:\n");
    scanf("%d", &firstDim);

    scndDim = firstDim;

    double **tab;
    tab = (double **)malloc(firstDim*sizeof(double *));
    for (int i = 0; i<firstDim; i++){
        tab[i] = (double *)calloc(scndDim,sizeof(double));
    }
    printf("\nTab after init:\n");
    printTab(firstDim, scndDim, tab);
    randNums(firstDim, tab);
    printf("\nTab after randomization:\n");
    printTab(firstDim, scndDim, tab);
    printf("\nTrace:\t%.2f", traceOfArray(firstDim,tab));

    for (int i = 0; i<firstDim; i++){
        free(tab[i]);
    }
    free(tab);
    
    return 0;
}

void printTab(int firstDim, int scndDim, double **tab){
    for (int i = 0; i < firstDim; i++){
        for (int j = 0; j < scndDim; j++){
            printf("%.2f\t", (double)tab[i][j]);
        }
        printf("\n");
    }
}

void randNums(int firstDim, double **tab){
    srand(time(NULL));
    for (int i = 0; i < firstDim; i++){
        tab[i][i] = (float)rand()/((float)RAND_MAX/20);
    }
}

double traceOfArray(int firstDim, double **tab){
    double trace = 0;
    for (int i = 0; i < firstDim; i++){
        trace += tab[i][i];
    }
    return trace;

}