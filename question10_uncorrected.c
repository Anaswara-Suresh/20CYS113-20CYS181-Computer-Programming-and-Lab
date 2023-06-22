#include<stdio.h>
int main(){
    double prod1,prod2;
    struct complex{
        double real;
        double img;
        char is;
    }cm[2];
    printf("enter the real part and imaginary part of first complex number ");
    scanf("%lf %lf",cm[0].real,cm[0].img);
    printf("enter the real part and imaginary part of second complex number ");
    scanf("%lf %lf",cm[1].real,cm[1].img);
    prod1=cm[0].real*cm[1].real;
    prod2=cm[0].img*cm[1].img;
    cm[0].is='+';
    cm[1].is='i';
    printf("the product is equal to %lf %c %c %lf",prod1,cm[0].is,cm[1].is,prod2);
    return 0;
}