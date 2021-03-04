#include<stdio.h>

void prompt(char* message, char* str);

int main(){
	char str[80];
	prompt("Enter a message",str);
	printf("You entered-%s\n",str);
return 0;
}

void prompt(char* message, char* str){
	printf("%s: ",message);
	scanf("%s",str);
}
