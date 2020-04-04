#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int checkNums(char s[]);
void checkStrengh(char password[]);

int main(){
    char ch[1];
    int numConverted = 0;
    
    while (numConverted == 0){
        printf("Input number in range 10 - 50:\n");
        scanf("%s",&ch);
        numConverted = checkNums(ch);
        if (numConverted < 10 || numConverted > 50){
            numConverted = 0;
        }
    }

    char ch_a[numConverted];
    char ch_b[numConverted];
    int samePassword = 0;

    while(samePassword == 0){
        printf("Input password:\n");
        scanf("%s", ch_a);
        printf("Repeat password:\n");
        scanf("%s", ch_b);
        if (strcmp(ch_a,ch_b) == 0){
            samePassword = 1;
        } else {
            printf("Passwords are not equal, please repeat\n");
        }
    }

    checkStrengh(ch_a);

    return 1;
}

void checkStrengh(char password[]){
    int len = strlen(password);
    int upperCheck = 0;
    int lowerCheck = 0;
    int digitCheck = 0;
    int specialSymCheck = 0;

    for (int i = 0; i < len; i++){
        char c = password[i];
        if (c >= 'A' && c <= 'Z'){
            upperCheck = 1;
        }
        if (c >= 'a' && c <= 'z'){
            lowerCheck = 1;
        }
        if (isdigit(c)){
            digitCheck = 1;
        }
        if (isdigit(c) == 0 && isalpha(c) == 0){
            specialSymCheck = 1;
        }
    }

    if (upperCheck != 0 && lowerCheck != 0 && digitCheck != 0 && specialSymCheck != 0){
      printf("Password strong\n");  
    }
    return;
}

int checkNums(char s[]){
    int len = strlen(s);
    for (int i = 0; i < len; i++){
        if (!isdigit(s[i])){
            return 0;
        }
    }
    return atoi(s);
}