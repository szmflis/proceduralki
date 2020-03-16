//2. Napisz program, który poprosi użytkownika o 
//podanie symbolu ”$” tak długo dopóki go nie poda.

#include <stdio.h>

int main(){
    char dollar = 'x';
    
    while (dollar != '$'){
        printf("Insert character: $\n");
        scanf("%c", &dollar);
    }
}