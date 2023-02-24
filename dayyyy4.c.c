#include<stdio.h>
int main()
{
    int len1,len2,a[10][10]={0},b[10][10]={0},res[10][10]={0};
    printf("Enter size of Matrix 01 : ");
    scanf("%d %d",&len1,&len2);
    for(int i = 0 ; i < len1 ; i++)
    {
        for(int j = 0 ; j < len2 ; j++)
        {
            printf("\nEnter element at %d * %d ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    int len3,len4;
    printf("Enter size of Matrix 02 : ");
    scanf("%d %d",&len3,&len4);
    for(int i = 0 ; i < len3 ; i++)
    {
        for(int j = 0 ; j < len4 ; j++)
        {
            printf("\nEnter element at %d * %d ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    // multiplication of matrices -->
    if (len2==len3)
    {
        printf("\nSize of resultant matrix is %d * %d and Matirx is : \n",len1,len4);
    for(int i = 0 ; i < len3 ; i++)
    {
        for(int j = 0 ; j < len4 ; j++)
        {
            for(int k = 0 ; k< len3 ; k++)
            {
                res[i][j] += a[i][k]*b[k][j];
            }
        }
    }
    // Printing elements of resultant matrix -->
    for(int i = 0 ; i < len1 ; i++)
    {
        for(int j = 0 ; j < len4 ; j++)
        {
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    }
    else
    printf("\nNote that row of 1st mat == column of 2nd mat , enter again ");

    return 0;
}