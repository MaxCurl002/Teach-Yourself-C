#include<stdio.h>

double avg1(); 

int main(){
	double ans = avg1(1,2,3,4,5.5,6,7,8,9.9,10.32);
	printf("Average: %f\n",ans);
return 0;
}

double avg1(double a, double b, double c, double d, double e, double f, double g, double h, double i, double j){
	return (a+b+c+d+e+f+g+h+i+j)/10;
}
