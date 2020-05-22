#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void convertCase(char s[]);
void countNums(char s[]);

int main(){
    char name[50];
    printf("Input name:\n");
    scanf("%s", name);
    printf("Hello %s\n",name);
    
    char ch[5];
    printf("Input string of lengh 5\n");
    scanf("%s", ch);
    printf("Input string is: %s\n", ch);
    
    convertCase(ch);
    printf("Converted: %s\n", ch);

    countNums(ch);
    return 1;
}

void convertCase(char s[]){
    int i = 0;
    char temp;

    while(s[i] != '\0'){
        temp = s[i];
        if (temp >= 'A' && temp <='Z'){
            s[i] = s[i] + 32;
        } else if (temp >= 'a' && temp <= 'z'){
            s[i] = s[i] - 32;
        }
        i++;
    }
    return;
}

void countNums(char s[]){
    int count = 0;
    int len = strlen(s);
    for (int i = 0; i < len; i++){
        if (isdigit(s[i])){
            count++;
        }
    }
    printf("Number of digits in string: %d", count);
    return;
}