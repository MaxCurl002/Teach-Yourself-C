#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define EXIT(str) {printf("Error!%s\n",str);exit(1);}

int main(int argc, char* argv[]){
	if(argc!=1)EXIT("insufficient args.");
	FILE* fp;
	fp=fopen("Values","w");
	if(fp==NULL) EXIT("Error opening Values file.");
	
	double x;
	int count=0;
	printf("Enter 0 to exit.\n");
	while(1){
		fscanf(stdin,"%lf",&x);
		if(x==0.0 || count>32766){
			printf("Quitted successfully.\n");
			break;
		}
		fprintf(fp,"%lf\n",x);
		count++;
	}
	
	FILE *count_f;
	count_f = fopen("COUNT","w");
	if(count_f==NULL) EXIT("Error opening COUT file.");
	fprintf(count_f,"%d",count);	

	if(fclose(fp)==EOF)EXIT("Error closing Values file.");
	if(fclose(count_f)==EOF)EXIT("Error closing COUNT file.");
return 0;
}
