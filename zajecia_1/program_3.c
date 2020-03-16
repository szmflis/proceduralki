/*
3. Napisz program, który zada użytkownikowi wymyślone przez Ciebie pytanie i uzyska
od niego odpowiedź tak/nie (zapisz ją w zmiennej typu bool). Wyświetl, czy użytkownik
miał rację.
*/

#include <stdio.h>
#include <string.h>
int main(){
    printf("Czy weze naleza do plazow?\n");
    char odp[3] = "xxx";
    scanf("%s", &odp);
    printf("%c", odp[0]);
    if (strcmp("tak",odp) == 0){
        printf("dobrze");
    }
}