#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int ara[n],sum=0;
        for(int i=0;i<n;i++){
            scanf("%d",&ara[i]);
            sum+=abs(ara[i]);
        }
        int flag=0,oparetion=0;
        for(int i=0;i<n;i++){
            if(ara[i]<0 && ara[i]!=0){
                flag=1;
                if(flag==1){
                    oparetion++;
                }
            }

        }
        printf("%d %d\n",sum,oparetion);
    }
}
