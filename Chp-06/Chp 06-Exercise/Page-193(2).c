#include<stdio.h>

void f(int *p){
	*p=-1;
}

int main(){
	int x, *p=&x;
	f(p);
	printf("%d\n",x);
return 0;
}
