#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define EXIT(str) {printf("Error!%s\n",str);exit(1);}

int main(int argc, char* argv[]){
	if(argc!=3)EXIT("insufficient args.");
	FILE* count_f;
	count_f=fopen(argv[1],"r");
	if(count_f==NULL) EXIT("Error opening source file.");

	char s[10];
	fgets(s,9,count_f);
	s[strcspn(s,"\n")]='\0';
	int count = atoi(s);
	printf("Count: %d\n",count);	
	if(fclose(count_f)==EOF)EXIT("Error closing COUNT file.");

	FILE *values;
	values = fopen(argv[2],"r");
	if(values==NULL)EXIT("Error opening values file.");
	double x;
	while(!feof(values)){
		fscanf(values,"%lf",&x);
		fprintf(stdout, "%lf\n",x);
	}
return 0;
}
