#include <stdio.h>

int main() {
   int num, temp, first_digit, last_digit, num_of_digits = 0;
   scanf("%d", &num);
   temp = num;
   while (temp > 0) {
      num_of_digits++;
      temp /= 10;
   }
   last_digit = num % 10;
   first_digit = num / (int)pow(10, num_of_digits-1);
   temp = num - (first_digit * (int)pow(10, num_of_digits-1)) - last_digit + (last_digit * (int)pow(10, num_of_digits-1)) + first_digit;
   printf("%d", temp);

}