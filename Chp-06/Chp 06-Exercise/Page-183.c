#include<stdio.h>
#include<string.h>
int main(){
	char str[80];
	fgets(str,sizeof(str),stdin);
	str[strcspn(str,"\n")]='\0';
	int i;
	for(i=0; i<strlen(str); i++){
		if(str[i]==' ') break;
	}
	
	char s[80];
	int j=0;i++;
	for(i; i<strlen(str); i++){
		s[j]=str[i];
		j++;
	}
	puts(s);
return 0;
}
