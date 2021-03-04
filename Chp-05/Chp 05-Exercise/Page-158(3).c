#include <stdio.h>
int main ()
{
    int c[][3]={1,1,1,2,4,8,3,9,27,4,16,64,5,25,125,6,36,216,7,49,343,8,64,512,9,81,729,10,100,1000};
    printf("Enter cubeic value:");
    int cube;
    scanf("%d",&cube);

    for(int i=0;i<10;i++){
           if(c[i][2]==cube)
           {
               printf("Root is %d\n",c[i][0]);
               printf("Square of root is %d\n",c[i][1]);
	       return 0;
           }
    }

    printf("cube not found\n");
return 0;
}
