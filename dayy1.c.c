//wap to find inverse of a no.
//Armstrong no.
//f series
//Factorial of a no.
//table of a given no.
#include <stdio.h>

void table()
{
   int n, i;
 
    printf("Enter a Number ");
    scanf("%d",&n);
    i=1;
    while(i<=10){
                
        printf("%d * %d = %d \n", n, i, n*i);
        ++i;
    }
}
void reverse()
{    
int n, reverse=0, rem;    
printf("Enter a number: ");    
  scanf("%d", &n);    
  while(n!=0)    
  {    
     rem=n%10;    
     reverse=reverse*10+rem;    
     n/=10;    
  }    
  printf("Reversed Number: %d",reverse);    
 
} 
void fact()
{
    int n, i;
    unsigned long long fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);

    
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu", n, fact);
    }
}
void Armstrong()
{
 int number,remainder,total=0,temp;
   printf("enter the number=");
   scanf("%d",&number);
   temp=number;
   while(number>0){
      remainder=number%10;
      total=total+(remainder*remainder*remainder);
      number=number/10;
   }
   if(temp==total)
      printf("This number is Armstrong number");
   else
      printf("This number is not Armstrong number");
      
}
void Fibonacci()
{
 int n, first = 0, second = 1, next, c;

  printf("Enter the number of terms\n");
  scanf("%d", &n);

  printf("First %d terms of Fibonacci series are:\n", n);

  for (c = 0; c < n; c++)
  {
    if (c <= 1)
      next = c;
    else
    {
      next = first + second;
      first = second;
      second = next;
    }
    printf("%d\n", next);
  }
      
}
     
int main()
{
    int input;
    
 
    printf( "1. table\n" );
    printf( "2. reverse\n" );
    printf( "3. fact\n" );
    printf( "4. Armstrong no.\n" );
    printf( "5. Fibonacci series\n" );
    printf( "6. Exit\n" );
    printf( "Selection: " );
    scanf( "%d", &input );
    switch ( input ) {
        case 1:            
            table();
            break;
        case 2:          
            reverse();
            break;
        case 3:         
            fact();
            break;
        case 4:         
            Armstrong();
            break;
        case 5:         
            Fibonacci();
            break;
        case 6:        
            printf( "Thanks for playing!\n" );
            break;
        default:            
            printf( "Bad input, quitting!\n" );
            break;
    }
    return 0;
}