#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define EXIT(str) {printf("Error!%s\n",str);exit(1);}

int main(int argc, char* argv[]){
	if(argc!=2)EXIT("insufficient args.");
	if(remove(argv[1])) printf("File not found.\n");
return 0;
}
