#include<stdio.h>

int main(){
	int temp[31],i,min,max,avg;
	int days;

	printf("How many days are there in that month?");
	scanf("%d",&days);

	for(int i=0; i<days; i++){
		printf("Enter temperature for day, %d: ", i+1);
		scanf("%d",&temp[i]);
	}
	avg=0;
	for(int i=0; i<days; i++) avg = avg + temp[i];
	
	printf("Average temperature: %d\n",avg/days);

	min=200;
	max=0;
	for(int i=0; i<days; i++){
		if(temp[i]>max)max=temp[i];
		if(temp[i]<min)min=temp[i];
	}
	printf("Maximum temperature: %d\n", max);
	printf("Minimum temperature: %d\n", min);
return 0;
}
