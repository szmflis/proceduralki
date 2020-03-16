/*
4. Napisz program, który pobierze od użytkownika liczbę, którą 
określi ile razy wyświetli mu się na ekranie dowolny napis. 
Przy każdym wyświetleniu napisu rozpocznij go kolejnym numerem
*/

#include <stdio.h>
#include <string.h>

int main(){
    printf("Input num:\n");
    int x = 0;
    scanf("%d", &x);
    for(int i=1; i<=x; i++){
        printf("%d. Dowolny napis\n", i);
    }
}