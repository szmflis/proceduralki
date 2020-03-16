//1. Napisz program, który poprosi użytkownika o podanie trzech liczb typu int po kolei
//i wczyta je jednym poleceniem do trzech różnych zmiennych. Wyświetl wczytane liczby.
#include <stdio.h>

int main(){
    int x,y,z = 0;
    
    printf("Insert 3 whole numbers: \n");
    scanf("%d\n%d\n%d", &x, &y, &z);

    printf("%d %d %d\n", x, y, z);
}