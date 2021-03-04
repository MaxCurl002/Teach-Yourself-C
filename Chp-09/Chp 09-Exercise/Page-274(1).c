#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define EXIT(str) {printf("Error!%s\n",str);exit(1);}

int main(int argc, char* argv[]){
	if(argc!=2)EXIT("insufficient args.");
	FILE* fp;
	fp=fopen(argv[1],"r");
	if(fp==NULL) EXIT("Error opening source file.");
	
	int count=0;
	while(!feof(fp)){
		fgetc(fp);
		count++;
	}
	fprintf(stdout,"Character/byte count: %d\n",count);
	if(fclose(fp)==EOF)EXIT("Error closing destiatio file.");
return 0;
}
