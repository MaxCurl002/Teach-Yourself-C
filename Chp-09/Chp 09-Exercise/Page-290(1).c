#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define EXIT(str) {printf("Error!%s\n",str);exit(1);}

int main(int argc, char* argv[]){
	if(argc!=2)EXIT("insufficient args.");
	FILE* fp;
	fp=fopen(argv[1],"rb");
	if(fp==NULL) EXIT("Error opening source file.");
	
	long l;
	fseek(fp,0L, SEEK_END);
	l=ftell(fp);

	fseek(fp,0L, SEEK_SET);
	char c;
	for(int i=0;i<l;i++){
		c = fgetc(fp);
		if(ferror(fp))EXIT("Error reading the file.");
		putchar(c);
	}

	if(fclose(fp)==EOF)EXIT("Error closing destiatio file.");
return 0;
}
