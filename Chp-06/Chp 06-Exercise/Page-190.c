#include<stdio.h>

int main(){
	int a, *p1, **p2;
	p1=&a;
	p2=&p1;

	**p2=5;
	printf("value: %d\na=%p\np1=%p\np2=%p\n",a,&a,&p1,&p2);
return 0;
}
