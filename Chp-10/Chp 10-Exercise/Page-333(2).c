#include<stdio.h>
#include<stdlib.h>

union s_type{
	long l;
	int i;
};

int main(){
	union s_type x;
	x.i=1056;
	printf("%ld\n",x.l);
return 0;
}
