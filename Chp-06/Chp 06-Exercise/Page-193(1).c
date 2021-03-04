#include<stdio.h>
#include<string.h>
void mystrcat(char* dest, char* str);
#define D1 printf("The program runs.\n")

int main(){
	char str1[80]="str1", *str2="str2";
	mystrcat(str1,str2);
	puts(str1);
	mystrcat(str1,"huha");
	puts(str1);
return 0;
}

void mystrcat(char* dest, char* str){
	//find strlen(dest)
	int len=0;
	while(*dest){
		len++;
		dest++;
	}
	dest--;//go back to the null termiator
	*dest=str[0];
	
	dest++;
	while(*str){
		*dest=*str;
		str++;
		dest++;
	}
	*dest='\0';
}	
