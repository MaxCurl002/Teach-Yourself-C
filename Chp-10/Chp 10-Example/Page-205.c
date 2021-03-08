#include<stdio.h>

struct s_type{
	int i;//4
	char ch;//1
	int *p;//4
	double d;//8 or 16?
	char* str;//
};

int main(){
	printf("s_type is %ld bytes\n",sizeof(struct s_type));//32
	
	struct s_type x;
	printf("int i = %ld\n",sizeof(x.i));
	printf("char ch = %ld\n",sizeof(x.ch));
	printf("int* p = %ld\n",sizeof(x.p));
	printf("double d = %ld\n",sizeof(x.d));
	printf("char* str = %ld\n",sizeof(x.str));
return 0;
}
