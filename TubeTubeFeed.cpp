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
#define w(x) while(x--)
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define PI 2*acos(0.0)
#define pr pair<int,int>
#define Ahsanul()	(ios_base::sync_with_stdio(false),cin.tie(NULL))
void solve()
{
    int num,test; cin>>num>>test;
    vector<int>d(num),value(num);
    //input section
    for(int i=0;i<num;i++)
    {
        cin>>d[i];
    }
    for(int i=0;i<num;i++)
    {
        cin>>value[i];
    }
    //solve section
    int res=-1,max=0;
    for(int i=0;i<num;i++)
    {
        if(d[i]<=(test-i))
        {
            if(value[i]>max)
            {
                max=value[i];
                res=i+1;
            }
        }
    }
    cout<<res<<endl;
}
int main()
{
    Ahsanul();
    int t; cin>>t;
    w(t)
    {
        solve();
    }
}