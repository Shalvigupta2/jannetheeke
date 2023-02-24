#include <stdio.h>

void Addition()
{
    int a,b,c;
    printf("Enter the no. to be added:");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf( "%d",c );
}
void Sub()
{
    int a,b,c;
    printf("Enter the no. to be Sub:");
    scanf("%d %d",&a,&b);
    c=a-b;
    printf( "%d",c );
}
void mult()
{
    int a,b,c;
    printf("Enter the no. to be Mult:");
    scanf("%d %d",&a,&b);
    c=a*b;
    printf( "%d",c );
}
     
int main()
{
    int input;
    
 
    printf( "1. Add\n" );
    printf( "2. Sub\n" );
    printf( "3. Mult\n" );
    printf( "4. Exit\n" );
    printf( "Selection: " );
    scanf( "%d", &input );
    switch ( input ) {
        case 1:            
            Addition();
            break;
        case 2:          
            Sub();
            break;
        case 3:         
            mult();
            break;
        case 4:        
            printf( "you are exiting!!\n" );
            break;
        default:            
            printf( "Bad input, quitting!\n" );
            break;
    }
    return 0;
 
}