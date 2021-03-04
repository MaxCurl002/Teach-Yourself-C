#include<stdlib.h>
#include<stdio.h>

int main(int argc, char *argv[]){
	if(argc!=3) exit(1);
	printf("Sum: %d\n",atoi(argv[1])+atoi(argv[2]));
return 0;
}
