// Bismillahir Rahmanir Raheem
//Coded by Ahsanul Imam
//NSTU//CSTE
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ara[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }
        int max=ara[0],min=ara[0],count=0;
        for(int i=0; i<n; i++)
        {
            if(ara[i]>max)
            {
                max=ara[i];
                count++;
            }
            if(ara[i]<min)
            {
                min=ara[i];
                count++;
            }
        }
        printf("%d",count);
}