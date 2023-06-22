#include<stdio.h>
int main(){
    int prod1,prod2;
    struct complex{
        double real;
        double img;
        char is;
    }cm[2];
    printf("enter the real part and imaginary part of first complex number ");
    scanf("%lf %lf",&cm[0].real,&cm[0].img);
    printf("enter the real part and imaginary part of second complex number ");
    scanf("%lf %lf",&cm[1].real,&cm[1].img);
    prod1=(cm[0].real*cm[1].real)-(cm[0].img*cm[1].img);
    prod2=(cm[0].real*cm[1].img)+(cm[1].real*cm[1].img);
    cm[0].is='+';
    cm[1].is='i';
    printf("the product is equal to %d %c %d %c",prod1,cm[0].is,prod2,cm[1].is);
    return 0;
    
}