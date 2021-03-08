#include<stdio.h>
#include<stdlib.h>

struct human{
	char* name;
	unsigned int age;
};

struct human2{
	char name[80];
	int age;
};

int main(){
	struct human abhi;
	abhi.name = (char*)malloc(sizeof(char)*79);

	scanf("%s",abhi.name);
	scanf("%u",&abhi.age);

	printf("Struct 1:\n%s\n%d\n",abhi.name, abhi.age);

return 0;
}
