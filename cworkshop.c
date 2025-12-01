#include <stdio.h> // standard input/output header

int main()
{ // main function: program starts here
    printf("Hello, World!\n");
    int a[10][10], b[10][10], c[10][10], i, j, k, n,m;
    printf("Enter the rows of matrix: ");
    scanf("%d", &n);
    printf("Enter the columns of matrix: ");
    scanf("%d", &m);
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            c[i][j]=0;
            for(k=0;k<m;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0; // tell OS that program finished successfully
}
