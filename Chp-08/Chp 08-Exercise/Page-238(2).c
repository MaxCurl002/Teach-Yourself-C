#include<conio.h>
#include<stdio.h>

int main(){
	//apparently, linux does not have conio.h file.
	while(!kbhit()) putchar('.');
return 0;
}
