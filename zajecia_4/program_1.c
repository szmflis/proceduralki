#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void randNums(int leng, int tab[leng]){
    srand(time(NULL));
    for (int i = 0; i < leng; i++){
        tab[i] = (rand()%45) + 5;
    }
}

void sort(int leng, int tab[leng]){
    int min_index, i, j;
    for (i = 0; i < leng-1; i++){
        min_index = i;
        for (j = i+1; j < leng; j++){
            if (tab[j] < tab[min_index]){
                min_index = j;
            }
        }
        int temp_min = tab[min_index];
        tab[min_index] = tab[i];
        tab[i] = temp_min;
    }
}

float median(int leng, int tab[leng]){
    int middle_index;
    if (leng%2 != 0){
        middle_index = (leng - 1)/2;
        return tab[middle_index-1];
    } else {
        middle_index = leng/2;
        printf("Srodek i nastepna to: %d oraz %d\n", tab[middle_index-1], tab[middle_index]);
        return (float)(tab[middle_index-1] + tab[middle_index])/2;
    }
}

void printTab(int leng, int tab[leng]){
    for (int i = 1; i <= leng; i++){
        printf("%d: \t%d\n", i,tab[i-1]);
    }
    printf("\n");
}

int main(){
    printf("Input tab size: \n");
    int leng;
    scanf("%d", &leng);
    int *tab = (int *)calloc(leng,sizeof(int));
    
    printf("Array after init: \n");
    printTab(leng, tab);

    printf("Array after randNums: \n");
    randNums(leng, tab);
    printTab(leng, tab);
    
    printf("Array after sort: \n");
    sort(leng,tab);
    printTab(leng, tab);

    printf("Median: %f", median(leng,tab));

    free(tab);
    return 0;
}