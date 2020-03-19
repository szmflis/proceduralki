#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>  

#define N 7

void calc(float *suma, int flag){
    if (flag == 1){
        int i = 0;
        for(i=0; i<N; i++){
            if((i % 2) == 0){
                *suma += pow((i+1), 2) + N;
            }    
        }
    } else {
        int i = 0;
        for(i=0; i<N; i++){
            if((i % 2) != 0){
                *suma *= pow((i+1), 2) + N;
            }    
        }   
    }
}

int main()
{
    int a = 0, b = 0;
    bool w;

    printf("Podaj dwie liczby calkowite:\n");
    scanf("%d %d", &a, &b);	

	printf("Czy %d > %d ?\n", a, b);

    (a > b) ? (w = true) : (w = false); 

	if(w == true)
		printf("Tak, %d > %d\n", a, b);
	else
		printf("Nie, %d < lub = %d\n", a, b);

    float suma = 1.0;

    if( w == true || a == b ){
        calc(&suma,1);
    }
    else {
        calc(&suma,0);
    }
    float wynik = 0;
    printf("Wynik operacji = %.4f\n", sqrt(pow(suma, 2)));

	return 0;
}