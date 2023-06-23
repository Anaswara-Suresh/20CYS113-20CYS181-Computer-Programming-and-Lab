#include<stdio.h>

int Binary(int c){
    int binary[32];
    int i=0;
    int y=c;
    while(y>0){
        binary[i]=y%2;
        y=y/2;
        i++;
    }
    printf("Binary equivalent: ");
    for(int k=i-1;k>= 0;k--){
        printf("%d",binary[k]);
    }
    printf("\n");
    return 0;
}

int Octal(int d ){
    int octal[32];
    int i=0;
    int y= d ;
    while(y>0){
        octal[i]=y%8;
        y=y/8;
        i++;
    }
    printf("Octal equivalent: ");
    for(int k=i-1;k>= 0;k--){
        printf("%d",octal[k]);
    }
    printf("\n");
    return 0;
}
char hexadecimal(int e){
    int hex[32];
    int i=0;
    int y=e;
    while(y>0){
        int ans=y%16;
        if(ans<10){
            hex[i]=ans+48;
            
        }
        else{
            hex[i]=ans+55;
        }
        y=y/16;
        i++;
        
    } printf("Hexadecimal equivalent: ");
    for(int k=i-1;k>= 0;k--){
        printf("%c",hex[k]);
    }
    return 0;
}
int main(){
    int n,result,result1,result2;
    scanf("%d",&n);
    if(n<=0){
        printf("Error: Value should be greater than 0");
    }
    else{result=Binary(n);
    result1=Octal(n);
    result2=hexadecimal(n);
    }
    return 0;
}


