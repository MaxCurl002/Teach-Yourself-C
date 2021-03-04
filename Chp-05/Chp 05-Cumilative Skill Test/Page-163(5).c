#include<stdio.h>
#include<string.h>
int main(){
	char str[80], screen[80];
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")]='\0';
	
	//save str
	char saved_str[80];
	strcpy(saved_str,str);

	//initialize screen
	for(int i=0; i<strlen(str); i++) screen[i]='_';
	screen[strlen(str)-1]='\0';
	do{
	char c;
	int flag=0; //0 means - not found
	if(c=='\n') continue;
	printf("Guess a character: ");
	c = getc(stdin);
	for(int i=0; i<strlen(str); i++){
		if(c==str[i]){
			str[i]='-';
			screen[i]=c;
			printf("You have guessed right!\n");
			printf("%s\n",screen);
			flag=1;
			break;
		}
	}
	if(flag==0) printf("Wrong guess. ");
	}while(strcmp(saved_str,screen));
return 0;
}
