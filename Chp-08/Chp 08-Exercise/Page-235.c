#include<stdio.h>

int main(){
	int ch;
	do{
		ch=getchar();
		if(ch==EOF){
			printf("Error on input.\n");
			break;
		}
		if(putchar('.')==EOF){
			printf("Error on output.\n");
			break;
		}
	}while((char)i!='\n');
return 0;
}
