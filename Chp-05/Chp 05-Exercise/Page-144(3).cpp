//bubble sort for float
#include<stdio.h>

int main(){
	int n = 10;
	float a[10] = {1,20,3.3,4.5,5.2,6.1,7.8,8.1,9.14,0.67};
	for(int i= 0; i< 10; i++) {
    		printf("%.2f  ", a[i]);
	}
	printf("\n");
	float value;
	for(int i=0;i<n-1;i++){
    		for(int j=0;j<n-i-1;j++){
        		if(a[j]>a[j+1]){
           			value=a[j+1];
            			a[j+1]=a[j];
            			a[j]=value;
       			 }
    		}
	}
	
	for(int i= 0; i< 10; i++) {
    		printf("%.2f  ", a[i]);
	}
return 0;
}
