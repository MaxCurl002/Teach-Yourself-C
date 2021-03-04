
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main ()
{
    char command[80],temp[80];
    int i,j;
    for(;;)
    {
        printf("Operation? ");
        gets(command);

        if(!strcmp(command,"quit")) break;

        printf("Enter the first number:");
        gets(temp);
        i=atoi(temp);

        printf("Enter the second number:");
        gets(temp);
        j=atoi(temp);

        if(!strcmp(command, "add"))
            printf("%d\n",i+j);
        else if(!strcmp(command, "subtract"))
            printf("%d\n",i-j);
        else if(!strcmp(command, "divide"))
            printf("%d\n",i/j);

        else if(!strcmp(command, "multiply"))
            printf("%d\n",i*j);
        else printf("Unknown command");
    }
    return 0;
}
