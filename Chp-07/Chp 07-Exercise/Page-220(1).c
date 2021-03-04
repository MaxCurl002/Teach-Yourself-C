#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[]){
	printf("Compare lexiographically.\n");
	if(argc!=3){
		printf("Give 2 strings as input!\n");
		exit(1);
	}
	//do i need an else?
	if(strcmp(argv[1],argv[2])==0) printf("Equal.\n");
	else if(strcmp(argv[1],argv[2])>0) printf("A is greater.\n");
	else if(strcmp(argv[1],argv[2])<0) printf("B is greater.\n");
return 0;
}
