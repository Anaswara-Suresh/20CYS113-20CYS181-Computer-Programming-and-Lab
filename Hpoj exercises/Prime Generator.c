#include <stdio.h>
int prime,val;
 int isPrime(int num){  
        int c=0;
        if(num==0 || num==1)
        { val=-1;
        }
        else if (num<0)
        { val=-1;
        }
        for (int i=2 ; i<=(num/2); i++)
        {
                if (num%i==0)
        {
                
                c= c + 1;
                //printf("\ncount for num %d with %d is %d",num,i, c);
        }
        }
                if (c>=1)
                { val=0;
                }
                else{
                        val=1;
                }
                return val;}
                
int primeloop(int a ,int b )  
{printf("Prime numbers between %d and %d are:",a,b);
    for(int i=a; i<=b;i++)
{prime=isPrime(i);
if(prime==1)
{printf(" %d",i);}}
 ;}

void main()
{int a,b;
//enter starting number of range
scanf("%d",&a);
//enter the ending numbefr in range
scanf("%d",&b);
primeloop(a,b);
return 0;}


