#include<stdio.h>
#include<string.h>
int main (){
    char input[80];
    fgets(input,sizeof(input),stdin);
    input[strcspn(input,"\n")]='\0';
    int size=strlen(input);
    printf("Given string: %s\n",input);
    for(int i=size;i<79;i++) input[i]='.';
    input[79]='\0';
    printf("Dot padded string: %s\n",input);
    return 0;

}
