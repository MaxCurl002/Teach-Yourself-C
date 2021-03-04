#include<stdio.h>

int main(){
	char str[80];
	double d;
	int i, num;

	printf("Enter a string, a double and a integer: ");
	scanf("%s%lf%d%n",str,&d,&i,&num);
	printf("Numbers of characters read: %d",num);
return 0;
}
