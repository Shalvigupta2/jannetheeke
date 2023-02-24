#include<stdio.h>
#include<string.h>
 int main()
 {
   int n;
     printf("enter the no. of case you want to execute");
     printf("\n1.strlen()");
     printf("\n2.strcmp()");
     //
     printf("\n3.strcpy()");
     scanf("%d",&n);
     if(n==1)
         {
             int j = strlen("studytonight");
             printf("%d",j);
         }
     else if(n==2)
         {
             int i=strcmp("study ", "tonight");
             printf("%d ",i);
         }
    //   else if(n==3)
    //       {
            // char s1[50];
            // s1 = strcat("hello","world");
            // printf("%s",s1);
        //}
     else if(n==3)
         {
             char s1[50], s2[50];
             strcpy(s1, "StudyTonightnow");

             printf("%s\n", s1);
         }
     else
         {
             printf("enter valid no.");
         }
         return 0;
 }