#include<stdio.h>
#include<string.h>

int main()
{int sumr , sumi,diffi,diffr;
        struct compno
        { int imp;
          int rep;
        }c[2];
        
        scanf("%d %d",&c[0].rep,&c[0].imp);
        
        scanf("%d %d",&c[1].rep,&c[1].imp);


sumr=c[0].rep+c[1].rep;
sumi=c[0].imp+c[1].imp;

diffr=c[0].rep-c[1].rep;
diffi=c[0].imp-c[1].imp;

printf(" %d+%di\n",sumr,sumi);
printf(" %d+%di",diffr,diffi);
return 0;
}









