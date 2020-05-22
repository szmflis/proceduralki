#include <stdio.h>
#include <stdlib.h>

int askChoice();
void closeFiles(FILE *a, FILE *b);

int main(){
    char ch;
    char pl_zrodlowy[20];
    char pl_docelowy[20];

    FILE *plik_a;
    FILE *plik_b;

    printf("Wprowadz nazwe pliku do skopiowania:\n");
    gets(pl_zrodlowy);

    plik_a = fopen(pl_zrodlowy, "r");

    printf("Wprowadz nazwe nowego pliku:\n");
    gets(pl_docelowy);

    int choice = askChoice();

    if (choice == 1) {
        plik_b = fopen(pl_docelowy, "w");
        while ((ch = fgetc(plik_a)) != EOF){
            fputc(ch, plik_b);
        }
    }
    else if (choice == 2) {
        plik_b = fopen(pl_docelowy, "a");
        while ((ch = fgetc(plik_a)) != EOF){
            fputc(ch, plik_b);
        }
    }
    else {
        printf("Wprowadzono number spoza podanego wyboru.\n");
        exit(0);
    }

    closeFiles(plik_a,plik_b);
    return 0;
}

int askChoice(){
    printf("Wprowadz:\n");
    printf("1\t- aby nadpisac plik\n");
    printf("2\t- aby dopisac do pliku\n");
    int choice = 0;
    scanf("%d", &choice);
    return choice;
}

void closeFiles(FILE *a, FILE *b){
    fclose(a);
    fclose(b);
    return;
}