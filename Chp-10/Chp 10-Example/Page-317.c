
#include<stdio.h>
#include<time.h>
int main(){
    struct tm *systime;
    struct tm *gtime;
    time_t *t;

    t=time(NULL);
    systime=localtime(&t);
    gtime=gmtime(&t);

    printf("Time is %.2d:%.2d:%.2d\n",systime->tm_hour,systime->tm_min,systime->tm_sec);
    printf("Date is %.2d:%.2d:%.2d\n",systime->tm_mon+1,systime->tm_mday,systime->tm_year);

    printf("Time is %.2d:%.2d:%.2d\n",gtime->tm_hour,gtime->tm_min,gtime->tm_sec);
    printf("Date is %.2d:%.2d:%.2d\n",gtime->tm_mon+1,gtime->tm_mday,gtime->tm_year);


    }
