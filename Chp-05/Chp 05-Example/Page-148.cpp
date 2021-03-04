#include <stdio.h>
#include <string.h>
int main ()
{
    char str1[80],str2[80];
    int i;
    printf("Enter the first string:\n");
    gets(str1);
    printf("Enter the second string:\n");
    gets(str2);

    printf("%s is %d chars long\n",str1,strlen(str1));
     printf("%s is %d chars long\n",str2,strlen(str2));

     i=strcmp(str1,str2);
     if(!i) printf("Strings are equal");
     if(i<0) printf("%s is less than %s",str1,str2);
     else printf("%s is less than %s",str2,str1);

     if(strlen(str1)+strlen(str2)<80)
     {
         strcat(str1,str2);
         printf("%s\n",str1);
     }
     strcpy(str1,str2);
     printf("%s %s",str1,str2);
     return 0;

}
