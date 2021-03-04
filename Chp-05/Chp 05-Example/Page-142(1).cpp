#include<stdio.h>

int main(){
	int a1[10], a2[10];
	int i;

	for(int i=1; i<11; i++) a1[i-1]=i;

	//now copy
	for(int i=0; i<10; i++) a1[i]=a2[i];
	
	for(int i=0; i<10; i++) printf("%d ",a2[i]);
return 0;
}
