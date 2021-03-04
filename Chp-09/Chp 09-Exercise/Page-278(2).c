#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

#define EXIT(str) {printf("Error!%s\n",str);exit(1);}

int main(int argc, char* argv[]){
	if(argc!=2)EXIT("insufficient args.");
	FILE* fp;
	fp=fopen(argv[1],"r");
	if(fp==NULL) EXIT("Error opening source file.");
	
	char str[80];
	int count=0;
	while(!feof(fp)){
		fgets(str, 79, fp);
		printf("%s",str);
		if(count==23){
			printf("Print more?(y or n)");
			fgets(str,79,stdin);
			str[strcspn(str,"\n")]='\0';
			if(toupper(*str)=='N') break;
			count=0;
		}
		count++;
	}	


	if(fclose(fp)==EOF)EXIT("Error closing destiatio file.");
return 0;
}
