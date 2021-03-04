#include<stdio.h>
#include<string.h>
int main(){
	char *p[]={
		"Yes.",
		"No.",
		"Maybe. Can you please rephrase the question?"
	};

	char str[80];
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")]='\0';

	puts(p[strlen(str)%3]);
return 0;
}
