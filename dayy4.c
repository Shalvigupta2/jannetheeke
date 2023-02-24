#include<stdio.h>
int main()
{
    // Q.2 Write a C program to check whether they are equal or not .
    // Array no. 01 -->
    int arr[3][3],sum=0;
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            printf("\nEnter element at %d * %d ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    // Array no. 02 -->
    int arr2[3][3];
    for(int i = 0 ; i <3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            printf("\nEnter element at %d * %d ",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }
    // Checking matrices are equal or not -->
    int count = 0;
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            if(arr[i][j] == arr2[i][j])
            count += 1;
        }
    }
    if(count ==  9)
    printf("\n Matrices are equal ");
    else
    printf("\n Matrices are not equal ");


    return 0;
}