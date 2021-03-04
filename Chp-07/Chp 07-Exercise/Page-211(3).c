#include<stdio.h>
void putcharacter(char* str, int index);
int main(){
	putcharacter("Recursively print string.\n",0);
return 0;
}

void putcharacter(char* str, int index){
	if(str[index]=='\0')return;
	printf("%c",str[index]);
	index++;
	putcharacter(str,index);
}
