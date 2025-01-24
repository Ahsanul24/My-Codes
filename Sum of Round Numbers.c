// Bismillahir Rahmanir Raheem
// Coded by Ahsanul Imam
// NSTU//CSTE
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define F first
#define S second
#define bit(a)   __builtin_popcount(a)
#define w(x) while(x--)
#define loop for(int i=0;i<n;i++)
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define PI 2*acos(0.0)
#define pr pair<int,int>
#define Ahsanul	(ios_base::sync_with_stdio(false),cin.tie(NULL))
int main()
{
    int t,n;
    cin>>t;
    w(t){
        cin>>n;
        int ara[6],i=0;
        if(n%10!=0){
        ara[i]=n%10;
        i++;
        int res=n%10;
        n-=res;
    }
            if(n%100!=0){
        ara[i]=n%100;
        i++;
        int res=n%100;
        n-=res;
    }
            if(n%1000!=0){
        ara[i]=n%1000;
        i++;
        int res=n%1000;
        n-=res;
    }
            if(n%10000!=0){
        ara[i]=n%10000;
        i++;
        int res=n%10000;
        n-=res;
    }
                if(n%100000!=0){
        ara[i]=n%100000;
        i++;
        int res=n%100000;
        n-=res;
    }
    printf("%d\n",i);
    for(int j=0;j<i;j++){
        printf("%d ",ara[j]);
    }
    cout<<endl;
}

}
