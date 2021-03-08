
#include<stdio.h>
struct s_type {
    int i;
    char ch;
    double d;
    char str[80];
    }s;
int main(){
    scanf("%d",&s.i);
    scanf("%c",&s.ch);
    getche();
    scanf("%lf",&s.d);
    scanf("%s",&s.str);
    printf("%d",s.i);
    printf("%c",s.ch);
    printf("%lf",s.d);
    printf("%s",s.str);
    }
