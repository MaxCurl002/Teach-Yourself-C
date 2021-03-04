#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define EXIT(str) {printf("Error!%s\n",str);exit(1);}

int main(int argc, char* argv[]){
	if(argc!=3 && argc!=4)EXIT("insufficient args.");
	FILE* src;
	src=fopen(argv[1],"r");
	if(src==NULL) EXIT("Error opening source file.");
	
	FILE *dest;
	dest=fopen(argv[2],"w");
	if(dest==NULL)EXIT("Error opening/creating destination file.");
	while(!feof(src)){
		char c = fgetc(src);
		if(ferror(src))EXIT("Error while reading source file.");
		if(strcmp(argv[3],"watch")==0) fprintf(stdout,"%c",c);
		if(fputc(c,dest)==EOF) EXIT("Error while writing in destination file.");
	}
	
	if(fclose(src)==EOF)EXIT("Error closing source file.");
	if(fclose(dest)==EOF)EXIT("Error closing destiatio file.");
return 0;
}
