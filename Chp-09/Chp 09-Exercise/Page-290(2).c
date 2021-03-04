#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define EXIT(str) {printf("Error!%s\n",str);exit(1);}

int main(int argc, char* argv[]){
	if(argc!=3)EXIT("insufficient args.");
	FILE* fp;
	fp=fopen(argv[1],"r");
	if(fp==NULL) EXIT("Error opening source file.");
	
	long size;
	fseek(fp, 0L, SEEK_END);
	size=ftell(fp);
	fseek(fp,0L,SEEK_SET);
	
	int x,flag=0,value=atoi(argv[2]);
	for(int i=0; i<size; i++){
		fscanf(fp, "%d",&x);
		if(x==value){
			printf("Match found on index %d\n",i);
			flag=1;
			break;
		}
	}

	if(flag==0) printf("No match found.\n");

	if(fclose(fp)==EOF)EXIT("Error closing destiatio file.");
return 0;
}
