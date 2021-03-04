#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[]){
	if(argc!=4){
		printf("Insufficient arguments!\n");
		exit(1);
	}
	if(strcmp("add",argv[1])==0) printf("Sum: %f\n",atof(argv[2])+atof(argv[3]));
	else if(strcmp("subtract",argv[1])==0) printf("Subtract: %f\n",atof(argv[2])-atof(argv[3]));
	else if(strcmp("multiply",argv[1])==0) printf("Multiply: %f\n",atof(argv[2])*atof(argv[3]));
	else if(strcmp("divide",argv[1])==0) printf("Divide: %f\n",atof(argv[2])/atof(argv[3]));
	
return 0;
}
