
#include <stdio.h>
int main ()
{
    int arr[4][5];
    int sum=0;
    for(int i=0;i<4;i++)
        for(int j=0;j<5;j++){
        	scanf("%d",&arr[i][j]);
        	sum=sum+arr[i][j];
    	}
    printf("Sum of points: %d",sum);
    return 0;

}
