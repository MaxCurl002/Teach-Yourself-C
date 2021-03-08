#include<stdio.h>

struct test{
	unsigned a : 3;
	unsigned b : 3;
	unsigned c : 2;
};

int main(){
	struct test x;
	x.a=7;
	x.b=7;
	x.c=3;

	printf("a=%d\tb=%d\tc=%d\n",x.a,x.b,x.c);
return 0;
}
