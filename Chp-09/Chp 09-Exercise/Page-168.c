#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[]){
	if(argc!=2) exit(1);
	FILE *fp;
	fp=fopen("input.txt","r");
	if(fp==NULL) exit(1);
	while(!feof(fp)){
		char c = fgetc(fp);
		if(ferror(fp)) exit(1);
		fprintf(stdout,"%c",c);
	}
	if(fclose(fp)==EOF)exit(1);
return 0;
}
