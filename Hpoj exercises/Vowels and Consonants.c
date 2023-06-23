#include <stdio.h>

int main() {
    char c;
    char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int flag = 0;
    
   
    scanf("%c", &c);
    
    for (int i = 0; i < 10; i++) {
        if (c == vowels[i]) {
            flag = 1;
            break;
        }
    }
    
    if (flag==1) {
        printf("Vowel.");
    } else {
        printf("Consonant.");
    }
    
    return 0;
}

