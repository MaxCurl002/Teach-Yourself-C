#include<stdio.h>

double volume();

int main(){
	double vol = volume(12.2,5.67,9.03,10.2);
	printf("Volume: %f\n",vol);
return 0;
}

double volume(double s1, double s2, double s3){
	return s1*s2*s3;
}
