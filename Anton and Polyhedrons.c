#include<stdio.h>
int main()
{
    int n,F=0,G=0,H=0,I=0,J=0;
    char str[100];
    scanf("%d",&n);
    while(n--){
        scanf("%s",&str);
        int i=0;
        if(str[i]=='T')F++;
        else if(str[i]=='C')G++;
        else if(str[i]=='O')H++;
        else if(str[i]=='D')I++;
        else if(str[i]=='I')J++;
    }
    printf("%d",F*4+G*6+H*8+I*12+J*20);
}
