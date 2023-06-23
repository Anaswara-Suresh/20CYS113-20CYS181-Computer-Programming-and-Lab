#include <stdio.h>
int main() {
  int n,m,k,l,j;
    scanf("%d",&m);
    scanf("%d",&n);
    int A[m][n];
    int B[m][n];
    int C[m][n];
    for (k=0;k<m;k++)
    {
        for (l=0;l<n;l++)
        {scanf("%d",&A[k][l]);
        }
    }
    for (k=0;k<m;k++)
    {
        for (l=0;l<n;l++)
        {scanf("%d",&B[k][l]);
        }
    } 
    for (k=0;k<m;k++)
    {
        for(l=0;l<n;l++)
        {C[k][l]=0;
        for (j=0;j<m;j++)
        {C[k][l]=C[k][l]+(A[k][j]*B[j][l]);
        }
        }
    }
    for (k=0;k<m;k++)
    {for(l=0;l<n;l++)
    {printf("%d\t",C[k][l]);
    }
    printf("\n");
    }
    return 0;

}