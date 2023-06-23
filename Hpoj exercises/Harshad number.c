#include <stdio.h>
 
int val,ans=0,count=0;
int isHarshad(int c){
    int y,sum=0;
    y=c;
    
if(c<0){
    val=-1;
}
else{
 while(y>0){
     sum+=y%10;
     y=y/10;
}
ans=c%sum;
if(ans==0)
{val=1;
}
else  { val=0;
}}

    return val;
}

int main()
{ int nd,tru;
        //printf("enter the number you want to check");
        scanf("%d",&nd);
       tru=isHarshad(nd);
       if(tru==0)
       {printf("%d is not a Harshad number.",nd);}
       else if(tru==1)
       {printf("%d is a Harshad number.",nd);}
       else
       {printf("Number should be greater than 0.");
       }
        return 0;}