#include <stdio.h>
int main() {
   int i, J, r, k = 0;
  
   scanf("%d", &r);
   if(0<r&&r<25)
{
   for (i = 1; i <= r; ++i, k = 0) {
      for (J = 1; J <= r - i; ++J) {
         printf("  ");
      }
      while (k != 2 * i - 1) {
         printf("* ");
         ++k;
      }
      printf("\n");
       }}
          else{printf("Invalid Input");}
   return 0;
}