
#include<stdio.h>

int main(){
	int numbers[10],x;
	for(int i=0; i<10; i++){
		scanf("%d",&x);
		numbers[i]=x;
		for(int j=0; j<i; j++){
			if(numbers[i]==numbers[j]) printf("A match has been found! (%d)",numbers[i]);
		}
	}
return 0;
}
