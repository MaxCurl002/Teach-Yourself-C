
#include <stdio.h>

int num_count_index=0;
void increment(int x, int num_count[][2]);

int main(){
	int num[20], num_count[20][2];
	//input
	int size;
	printf("Enter number of numbers(must be less than 20): "); scanf("%d",&size);
	printf("Enter numbers: \n");
	for(int i=0; i<size; i++){
		printf(">>");
		scanf("%d",&num[i]);
	}

	//make num_count list
	for(int i=0; i<size; i++){
		increment(num[i],num_count);
	}
	//find mode
	int max_count=0, probable_mode;
	for(int i=0; i<num_count_index; i++){
		if(max_count<num_count[i][1]){
			probable_mode=num_count[i][0];
			max_count=num_count[i][1];
		}
	}

	printf("Mode is %d with frequency of %d.\n", probable_mode, max_count);
return 0;
}

void increment(int x, int num_count[][2]){
	for(int i=0; i<num_count_index; i++){
		if(num_count[i][0]==x){
			num_count[i][1]++;
			return;
		}
	}
	num_count[num_count_index][0]=x;
	num_count[num_count_index][1]=1;
	num_count_index++;
}
