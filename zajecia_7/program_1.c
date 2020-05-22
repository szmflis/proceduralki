#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct ComplexNum{
    int realPart;
    int imgPart;
};

void complexPrint(struct ComplexNum complexNum){
    if (complexNum.imgPart > 0){
        printf("%d + %di\n", complexNum.realPart, complexNum.imgPart);
    } else {
        printf("%d %di\n", complexNum.realPart, complexNum.imgPart);
    }
    cartToPolar(complexNum);
    return;
}

void cartToPolar(struct ComplexNum complexNum){
    float r = sqrt(pow(complexNum.imgPart, 2) + pow(complexNum.realPart, 2));
    float radian;
    if (complexNum.realPart > 0){
        radian = atan((float)complexNum.imgPart/complexNum.realPart);
    } else {
        radian = atan((float)complexNum.realPart/complexNum.imgPart);
    }
    printf("%.2f(cos(%.2f) + isin(%.2f))", r,radian,radian);

    return;
}

int main(){
    struct ComplexNum someNum = {5,2};
    complexPrint(someNum);
}