#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define EXIT(str) {printf("Error!%s\n",str);exit(1);}

int main(int argc, char* argv[]){
	if(argc!=3)EXIT("insufficient args.");
	FILE *src, *dest;
	src=fopen(argv[1],"r+");
	if(src==NULL) EXIT("Error opening source file.");
	dest=fopen(argv[2],"r+");
	if(src==NULL) EXIT("Error opening destination file.");
	FILE *temp;
	temp=fopen("temporary.txt","w+");
	if(temp==NULL) EXIT("Error opening temporary file.");
	
	//trasfer the data
	while(!feof(src)){
		char c = fgetc(src);
		if(ferror(src)) EXIT("Error reading source.");
		if(fputc(c,temp)==EOF) EXIT("Error writing in temp.");
	}
	fseek(src,0L,SEEK_SET);
	fseek(temp,0L,SEEK_SET);

	while(!feof(dest)){
		char c = fgetc(dest);
		if(ferror(dest)) EXIT("Error reading the destination.");
		if(fputc(c,src)==EOF) EXIT("Error writing in source.");
	}
	fseek(dest,0L,SEEK_SET);
	fseek(src,0L,SEEK_SET);
	while(!feof(temp)){
		char c = fgetc(temp);
		if(ferror(temp)) EXIT("Error reading the temp file.");
		if(fputc(c,dest)==EOF) EXIT("Error writing in dest.");
	}	
	printf("Content transfer Done!\n");
	if(fclose(src)==EOF)EXIT("Error closing source file.");
	if(fclose(dest)==EOF)EXIT("Error closing destiation file.");
	if(fclose(temp)==EOF)EXIT("Error closing temporary file.");
	remove("temporary.txt");
return 0;
}
