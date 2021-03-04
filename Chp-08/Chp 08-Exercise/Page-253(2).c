#include<stdio.h>

int main(){
	char num[80];

	printf("Enter a floating point number: ");
	scanf("%[0-9.]",num);
	printf("%s",num);
return 0;
}
