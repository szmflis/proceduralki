/*
7. Napisz program, który poprosi użytkownika o dwie liczby 
typu zmiennoprzecinkowego - pierwszą z 5 miejscami po przecinku, a drugą z 14. Wczytaj je do właściwie
dobranych zmiennych i wyświetl tak, żeby nie utracić precyzji.
*/

#include <stdio.h>

int main(){
    float x = 0;
    float y = 0;
    
    scanf("%f", &x);
    scanf("%f", &y);
    printf("%.05f\n",x);
    printf("%.14f\n",y);
}