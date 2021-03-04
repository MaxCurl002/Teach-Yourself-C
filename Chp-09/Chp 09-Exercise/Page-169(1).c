#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int main(int argc, char* argv[]){
	if(argc!=2)exit(1);
	FILE* fp;
	fp=fopen(argv[1],"r");
	if(fp==NULL) exit(1);
	
	int char_count[26];
	for(int i=0; i<26; i++) char_count[i]=0;
	while(!feof(fp)){
		char c = fgetc(fp);
		c=toupper(c);
		if(ferror(fp))exit(1);
		char_count[c-'A']++;
	}
	for(int i=0; i<26; i++) printf("%c occured %d times\n",'A'+i, char_count[i]);

	if(fclose(fp)==EOF)exit(1);
return 0;
}
