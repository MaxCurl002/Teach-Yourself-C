#include<stdio.h>
int main(){
	struct s_type{
		int i;
		int j;
	}s;
int i=10;
printf("%d %d %d", i, s.i, s.j);
return 0;
}
