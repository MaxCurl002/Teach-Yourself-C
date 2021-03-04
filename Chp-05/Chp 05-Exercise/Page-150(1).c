
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char str[80];
	printf("Enter a string(Max size 80 char): ");
	fgets(str,sizeof(str),stdin);
	str[strcspn(str, "\n")]='\0';

	for(int i=strlen(str)-1; i>=0; i--) printf("%c",str[i]);
return 0;
}
