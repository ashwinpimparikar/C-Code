#include <stdio.h>


int main()
{
   
   char str1[100];
   int i;
   printf("Please enter string = \n");
   scanf("%s",str1);
   char s[sizeof(str1)];
   printf("Entered string = %s\n",str1);
   for(i=0; str1[i]!='\0'; ++i)
   {
       s[i] = str1[i];
   }
   s[i] = '\0';
   printf("Copied String = %s\n", s);    
}  
