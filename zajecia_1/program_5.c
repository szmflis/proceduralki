//5. Napisz prosty dwuargumentowy kalkulator. Skorzystaj z instrukcji switch.
#include <stdio.h>

int main(){
    float x = 0;
    float y = 0;
    int operacja = 0;
    printf("Wprowadz pierwszy argument: \n");
    scanf("%f", &x);
    printf("Wprowadz drugi argument: \n");
    scanf("%f", &y);
    printf("Wybierz operacje: \n");
    printf("1. +\n");
    printf("2. - \n");
    printf("3. * \n");
    printf("4. : \n");
    scanf("%d", &operacja);

    switch(operacja){
        case 1:
            printf("%.02f\n", x+y);
            break;
        case 2:
            printf("%.02f\n", x-y);
            break;
        case 3:
            printf("%.02f\n", x*y);
            break;
        case 4:
            printf("%.02f\n", x/y);
            break;
        default: 
            break;
    }
}