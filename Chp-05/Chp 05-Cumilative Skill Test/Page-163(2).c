#include<stdio.h>
#include<string.h>
void format_for_odd(char* str,char* formatted_str, int size);
void format_for_even(char* str,char* formatted_str, int size);	
int main (){
	char str[80];
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")]='\0';
	
	char formatted_str[80];
	if(strlen(str)%2!=0) format_for_odd(str, formatted_str, strlen(str));
	else format_for_even(str, formatted_str, strlen(str));

	printf("Formatted string: %s\n",formatted_str);
return 0;
}

void format_for_odd(char* str,char* formatted_str, int size){
	formatted_str[size-1]=str[(size/2)];
	
	int j=0;
	for(int i=0; i<size/2; i++){
		formatted_str[j++]=str[i];
		formatted_str[j++]=str[size-1-i];
	}
	formatted_str[j++]='\0';
}
void format_for_even(char* str,char* formatted_str, int size){	
	int j=0;
	for(int i=0; i<size/2; i++){
		formatted_str[j++]=str[i];
		formatted_str[j++]=str[size-1-i];
	}
	formatted_str[j++]='\0';
}
