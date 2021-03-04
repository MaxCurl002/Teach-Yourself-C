
#include <stdio.h>
int main ()
{
    int a[3][3][3],b=1;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
        for(int k=0;k<3;k++)
    {
        a[i][j][k]=b;
        b++;
    }
    return 0;
}
