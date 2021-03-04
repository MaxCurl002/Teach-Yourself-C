#include<stdio.h>
#include<string.h>
#define E1 printf("Word limit(200) Exceeded.\n")
int main(){
	char bigstr[200], str[50];
	int occupied=0;
	while(1){
		fgets(str, sizeof(str), stdin);
		str[strcspn(str,"\n")]='\0';
		if(strcmp(str,"quit")==0)break;
		occupied+=strlen(str)+1;
		if(occupied>=200){E1;break};
		strcat(bigstr,str);
		strcat(bigstr,"\n");
	}

	printf("%s",bigstr);
return 0;
}
