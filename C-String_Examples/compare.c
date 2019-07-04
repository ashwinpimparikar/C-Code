#include<stdio.h>

int main()
{
    int compareState=1;
    char s1[10],s2[10];
    printf("Enter string1 : \n");
    scanf("%s",&s1);
    printf("Enter string2 : \n");
    scanf("%s",&s2);
    s1[9]='\0';
    int i=0;
    while(s1[i]!='\0')
    {
       if(s1[i]!=s2[i])
       {
          compareState=0;
          printf("Mismatch");
          break;
       }
       i++;
    }
    if(compareState)
       printf("Given strings are matching");
    else
       printf("String Mismatch");
);
}
