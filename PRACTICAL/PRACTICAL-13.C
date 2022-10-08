#include<stdio.h>
#include<conio.h>

int main()
{
     int a[3][3], b[3][3], c[3][3] = {0}, d[3][3] = {0};
    int i, j, k, m, n, p, q;

     printf("Enter no. of rows and columns in matrix A: ");
    scanf("%d%d", &m, &n);
    printf("\nEnter no. of rows and columns in matrix B: ");
    scanf("%d%d", &p, &q);

    
    /*Taking matrices from user*/
    printf("\nEnter elements of matrix A: ");
    for (i = 0; i < m; i++)
      for (j = 0; j < n; j++)
        scanf("%d", &a[i][j]);
    printf("\nEnter elements of matrix B: ");
    for (i = 0; i < p; i++)
      for (j = 0; j < q; j++)
        scanf("%d", &b[i][j]);
    for (i = 0; i < m; i++)
      for (j = 0; j < n; j++)
        c[i][j] = a[i][j] + b[i][j];
    printf("\nResult of Matirx Addition:\n");
    for (i = 0; i < m; i++)
    {
      for (j = 0; j < n; j++)
        printf("%d ", c[i][j]);
      printf("\n");
    }
    for (i = 0; i < m; i++)
      for (j = 0; j < q; j++)
        for (k = 0; k < p; k++)
          d[i][j] =d[i][j] + a[i][k] * b[k][j];
    printf("\nResult of Matirx Multiplication:\n");
    for (i = 0; i < m; i++)
    {
      for (j = 0; j < q; j++)
        printf("%d \t", d[i][j]);
      printf("\n");

    }
    return 0;
}