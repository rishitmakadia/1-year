#include <stdio.h>

int main()
{
    struct date_time
    {   
        struct date
        {
            int date,month,year;
        }d;
        struct time
        {
            int hrs,mins,sec;
        }t;
    }dt;
    printf("Read date and time DD,MM,YY,hrs,mins,sec");
    scanf("%d%d%d%d%d%d",&dt.d.date,&dt.d.month,&dt.d.year,&dt.t.hrs,&dt.t.mins,&dt.t.sec);
    printf("%d-%d-%d\t%d:%d:%d",dt.d.date,dt.d.month,dt.d.year,dt.t.hrs,dt.t.mins,dt.t.sec);
    return 0;
    
}