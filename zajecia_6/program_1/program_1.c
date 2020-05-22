#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <time.h>

void makefiles(char name[]);
void writetofile(char filename[]);
float randFloatRange(float min, float max);

int main(){
    printf("Input chain of characters: \n");
    char chars[20];
    scanf("%s",chars);
    makefiles(chars);
    srand(time(NULL));
}

float randFloatRange(float min, float max){
    return (max-min)*((float)rand()/(double)RAND_MAX)+min;
}

void writetofile(char filename[]){
    FILE *plik;
    plik = fopen(filename, "w");

    fprintf(plik,"LP\tX\t\tY\t\t\tRHO\n");
    for (int i = 1; i<51; i++){
        fprintf(plik, "%d.\t%.5f\t%.5f\t%.3f\n", 
            i,
            randFloatRange(0.0,10.0),
            randFloatRange(10.0,50.0),
            randFloatRange(2.7,2.84));
    }
    return;
}

void makefiles(char name[]){
    char filename_1[20] = "P0001_";
    strcat(strcat(filename_1,name),".rec");
    writetofile(filename_1);

    char filename_2[20] = "P0002_";
    strcat(strcat(filename_2,name),".rec");
    writetofile(filename_2);

    char filename_3[20] = "P0003_";
    strcat(strcat(filename_3,name),".rec");
    writetofile(filename_3);

    char filename_4[20] = "P0004_";
    strcat(strcat(filename_4,name),".rec");
    writetofile(filename_4);

    char filename_5[20] = "P0005_";
    strcat(strcat(filename_5,name),".rec");
    writetofile(filename_5);

    printf("Made files:\n");
    printf("%s\n",filename_1);
    printf("%s\n",filename_2);
    printf("%s\n",filename_3);
    printf("%s\n",filename_4);
    printf("%s\n",filename_5);

    FILE *plik;
    plik = fopen(filename_1, "w");
    plik = fopen(filename_2, "w");
    plik = fopen(filename_3, "w");
    plik = fopen(filename_4, "w");
    plik = fopen(filename_5, "w");
    return;
}