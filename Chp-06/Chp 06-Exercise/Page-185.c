#include<stdio.h>
#include<string.h>
int main(){
	char *a = "one";	
	char *b = "two";	
	char *c = "three";

	char str[80];
	char *p[3];
	p[0]=a;
	p[1]=b;
	p[2]=c;

	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			for(int k=0; k<3; k++){
			strcpy(str,p[i]);
			strcat(str," ");
			strcat(str,p[j]);
			
			strcat(str," ");
			strcat(str,p[k]);
			puts(str);	
			}
		}
	}
return 0;
}
