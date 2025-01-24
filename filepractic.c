#include <stdio.h>
#include<stdlib.h>
struct date
{
    int day;
    int month;
    int year
};
int dayy(int a,int b,int c)
{
    int tol=0;
    if(b==4 || b==6 || b==9 || b==11 )
    {
        tol+=30;
    }
    else if(b==1 || b==3 || b==5 || b==7 || b==8 || b==10 || b==12)
    {
        tol+=31;
    }
    else
    {
        if(!(c%100==0) && (c%4==0 || c%400==0 ))
        {
            tol+=29;
        }
        else
        {
            tol+=28;
        }
    }
    return tol;
}
int main()
{
    struct date d,dd;
    scanf("%d%d%d",&d.day,&d.month,&d.year);
    scanf("%d%d%d",&dd.day,&dd.month,&dd.year);
    int told=d.day+(d.month-1) * dayy(d.day,d.month,d.year)+d.year*365;
    int toldd=dd.day+(dd.month-1)*  dayy(dd.day,dd.month,dd.year) +dd.year*365;
    printf("%d",toldd-told);
}