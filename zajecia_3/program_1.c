#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

float average(int tab[],int size){
    int sum = 0;
    for (int i=0; i<size;i++){
        sum+=tab[i];
    }
    float average = sum/size;
    return average;
}

float std_div(int tab[],int size){
    float x = average(tab,size);
    float sum_temp = 0;
    for (int i = 0; i<size; i++){
        sum_temp += pow((tab[i] - x), 2);
    }
    float std_div = sqrt(sum_temp/size);
    return std_div;
}

int main(){
    srand(time(NULL));
    int liczby[50];
    for (int i = 0; i<50; i++){
        liczby[i] = (rand() % 6) + 1;
    }
    printf("Average: %.3f\n", average(liczby,sizeof(liczby)/sizeof(liczby[0])));
    printf("Standard diviation: %.3f", std_div(liczby, sizeof(liczby)/sizeof(liczby[0])));
}