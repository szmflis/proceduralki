#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void addition(float *result,float arg1, float arg2);
void difference(float *result,float arg1, float arg2);
void multiplication(float *result,float arg1, float arg2);
void division(float *result,float arg1, float arg2);
void exponentiation(float *result,float arg1, float arg2);
void logarithm(float *result, float arg1);
void sqrRoot(float *result, float arg1);

void addition(float *result,float arg1, float arg2){
    *result = (arg1 + arg2);
    return;
}

void difference(float *result,float arg1, float arg2){
    *result = (arg1 - arg2);
    return;
}

void multiplication(float *result,float arg1, float arg2){
    *result = (arg1*arg2);
    return;
}

void division(float *result,float arg1, float arg2){
    *result = (arg1/arg2);
    return;
}

void exponentiation(float *result,float arg1, float arg2){
    *result = pow(arg1,arg2);
    return;
}

void logarithm(float *result, float arg1){
    *result = log(arg1);
    return;
}

void sqrRoot(float *result, float arg1){
    *result = sqrt(arg1);
    return;
}

int main(){
    int flag = 0;
    while(flag == 0){
        float arg_1 = 0;
        float arg_2 = 0;
        char op = "x";
        float result = 0;

        printf("Input operation: \n");
        printf("+   for addition\n");
        printf("-   for difference\n");
        printf("*   for multiplication\n");
        printf("/   for division\n");
        printf("^   for exponentiation\n");
        printf("s   for square root\n");
        printf("l   for logarithm\n");
        printf("x   for exit\n");

        scanf("%c",&op);
        printf("%c\n",op);

        if (op == 'l' || op == 's'){
            printf("Input argument: \n");
            scanf("%f", &arg_1);

            if (op == 's'){
                sqrRoot(&result, arg_1);
            }
            if (op == 'l'){
                logarithm(&result, arg_1);
            }
        } else {
            printf("Input argument 1:\n");
            scanf("%f",&arg_1);
            printf("Input argument 2:\n");
            scanf("%f",&arg_2);
            
            if (op == '+'){
                addition(&result, arg_1,arg_2);
            }
            if (op == '-'){
                difference(&result, arg_1,arg_2);
            }
            if (op == '*'){
                multiplication(&result, arg_1,arg_2);
            }
            if (op == '/'){
                division(&result, arg_1,arg_2);
            }
            if (op == '^'){
                exponentiation(&result, arg_1,arg_2);
            }
            printf("%f %c %f = %f\n", arg_1, op, arg_2, result);
        }
    }
    
}