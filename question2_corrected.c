#include<stdio.h>
#define R 8
int main(){
	int i,j,k,n;
	for(i=0;i<R;i++){
	n=1;
	for(j=0;j<R-i;j++){
		printf(" ");
	}
	for(k=0;k<=i;k++){
		printf("%d ",n);
		n=n*(i-k)/(k+1);
	}
	printf("\n");
	}
	return 0;
}