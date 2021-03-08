#include<stdio.h>

struct s{
	int i;
	double d;
}

void f(struct s input){
	printf("%d %f\n",input.i, input.d);
}

int main(){
	struct s x;
	x.i=2;
	x.d=56.366;
	f(x);
return 0;
}
