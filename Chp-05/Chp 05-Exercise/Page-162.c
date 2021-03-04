
#include <stdio.h>
int main ()
{
    char num[10][10]={"zero","one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int number;

     do{
            printf("Enter number of (1-9)");
            scanf("%d",&number);
            if(number>=0 && number<10)
                printf("%s\n",num[number]);
      } while(number>=0);
return 0;

}
