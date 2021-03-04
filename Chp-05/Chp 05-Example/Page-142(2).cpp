#include <stdio.h>
int main ()
{
    char mess[80];
    int i;
    printf("Enter message (less than 80 characters):");
    for(i=0;i<80;i++)
    {
        mess[i]=getchar();
        if(mess[i]=='\n')
        break;
    }
    printf("\n");
    for(i=0;mess[i]!='\n'; i++){
        printf("%c", mess[i]+1);
    }


    return 0;
}
