#include<stdio.h>
#include<stdlib.h>

struct Zawodnik{
    char imie[50];
    char nazwisko[50];
    char narodowosc[50];
    int czas;
};

void printInfo(struct Zawodnik zawodnik){
    printf("Informacje o zawodniku: \n\n");
    printf("Imie:\t\t%s\n", zawodnik.imie);
    printf("Nazwisko:\t%s\n", zawodnik.nazwisko);
    printf("Narodowośc:\t%s\n", zawodnik.narodowosc);
    printf("Czas:\t\t%d\n\n",zawodnik.czas);
    return;
}

void modifyZawodnik(struct Zawodnik *zawodnik, int value){
    zawodnik->czas = value;
    return;
}

int main(){
    FILE *plik;
    plik = fopen("plik_do_2.txt","r");

    if (plik == NULL){
        printf("Error");
        exit(1);
    }

    char imie1[25];
    char imie2[25];
    char imie3[25];
    char nazwisko1[25];
    char nazwisko2[25];
    char nazwisko3[25];
    char narodowosc1[25];
    char narodowosc2[25];
    char narodowosc3[25];
    int czas1;
    int czas2;
    int czas3;

    fscanf(plik,"%s\t%s\t%s\t%d\n%s\t%s\t%s\t%d\n%s\t%s\t%s\t%d\n"
    ,&imie1,&nazwisko1,&narodowosc1,&czas1
    ,&imie2,&nazwisko2,&narodowosc2,&czas2
    ,&imie3,&nazwisko3,&narodowosc3,&czas3);

    fclose(plik);

    struct Zawodnik zawodnik1;    
    struct Zawodnik zawodnik2;
    struct Zawodnik zawodnik3;

    strcpy(zawodnik1.imie, imie1);
    strcpy(zawodnik1.nazwisko, nazwisko1);
    strcpy(zawodnik1.narodowosc, narodowosc1);
    zawodnik1.czas = czas1;
    
    strcpy(zawodnik2.imie, imie2);
    strcpy(zawodnik2.nazwisko, nazwisko2);
    strcpy(zawodnik2.narodowosc, narodowosc2);
    zawodnik2.czas = czas2;

    strcpy(zawodnik3.imie, imie3);
    strcpy(zawodnik3.nazwisko, nazwisko3);
    strcpy(zawodnik3.narodowosc, narodowosc3);
    zawodnik3.czas = czas3;


    printInfo(zawodnik1);
    printInfo(zawodnik2);
    printInfo(zawodnik3);

    printf("Wybierz zawodnika dla ktorego chcesz poprawic czas\n");
    printf("Wpisz:\n1\t dla pierwszego\n2\t dla drugiego\n3\t dla trzeciego\n");
    int wybor = 0;
    scanf("%d",&wybor);
    printf("Podaj poprawiony czas:\n");
    int poprawionyCzas = 0;
    scanf("%d",&poprawionyCzas);

    if (wybor == 1){
        modifyZawodnik(&zawodnik1,poprawionyCzas);
        printInfo(zawodnik1);
    } else if (wybor == 2){
        modifyZawodnik(&zawodnik2,poprawionyCzas);
        printInfo(zawodnik2);
    } else if (wybor == 3){
        modifyZawodnik(&zawodnik3,poprawionyCzas);
        printInfo(zawodnik3);
    } else {
        printf("Numer wykracza poza zakres zawodnikow\n");
        exit(1);
    }

    plik = fopen("plik_do_2.txt","w");

    fprintf(plik,"%s\t%s\t%s\t%d\n%s\t%s\t%s\t%d\n%s\t%s\t%s\t%d\n"
    ,zawodnik1.imie,zawodnik1.nazwisko,zawodnik1.narodowosc,zawodnik1.czas
    ,zawodnik2.imie,zawodnik2.nazwisko,zawodnik2.narodowosc,zawodnik2.czas
    ,zawodnik3.imie,zawodnik3.nazwisko,zawodnik3.narodowosc,zawodnik3.czas);

    fclose(plik);

    return 0;
}
