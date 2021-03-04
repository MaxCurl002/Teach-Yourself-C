#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define EXIT(str) {printf("Error!%s\n",str);exit(1);}

int main(int argc, char* argv[]){
	if(argc!=3)EXIT("insufficient args.");
	FILE *src, *dest;
	src=fopen(argv[1],"r");
	if(src==NULL) EXIT("Error opening source file.");
	dest=fopen(argv[2],"w");
	if(dest==NULL) EXIT("Error opening destination file.");

	//copy
	char str[80];
	while(!feof(src)){
		 fgets(str,79,src);
		if(ferror(src))EXIT("Error reading source file.");
		if(fputs(str,dest)==EOF)EXIT("Error writing in Dest.");
	}	
	printf("Content copy done!\n");

	if(fclose(src)==EOF)EXIT("Error closing source file.");
	if(fclose(dest)==EOF)EXIT("Error closing destiation file.");
return 0;
}
