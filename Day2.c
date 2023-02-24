#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    for(i=0; i<=2; i++){
    printf("Statement of outer for loop\n");
       for(j=0; j<=3; j++){
            printf("%d %d :",i,j);
    printf("Statement of inner for loop\n");

}
    }
return 0;
}