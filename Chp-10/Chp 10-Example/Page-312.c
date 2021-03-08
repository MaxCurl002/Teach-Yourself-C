#include<stdio.h>
struct s{
	int i;
	double d;
}
struct s fun();
int main(){
	struct s x;
x=f();
printf("%d %f", x.u, x.d);
return 0;
}

struct s fun(){
	struct s temp;
	temp.i=100;
	 temp.d=233.36;
return temp;
}
