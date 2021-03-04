#include<stdio.h>


char *p[]={
	"Input field Exceeded",
	"Unsupported file type",
	"Insert value before enterig",
	"The version does not support rewrtiting",
	"Insert Disk First"
};

void error(int error_num){
	printf("%s\n",p[error_num]);
}

int main(){
	error(1);
return 0;
}
