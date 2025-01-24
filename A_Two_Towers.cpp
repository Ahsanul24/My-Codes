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
#define Ahsanul	(ios_base::sync_with_stdio(false),cin.tie(NULL))
void s()
{
    int n,m; cin>>n>>m;
    string a,b; cin>>a>>b;
    int faluta=0,falutb=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1])
        {
            faluta++;
        }
    }
    for(int i=0;i<m-1;i++)
    {
        if(b[i]==b[i+1])
        {
            falutb++;
        }
    }
    if((faluta==1 && falutb==0 && a[n-1]!=b[m-1]) || (faluta==0 && falutb==1 && a[n-1]!=b[m-1]) || (faluta==0 && falutb==0))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
int main()
{
    Ahsanul;
    int test; cin>>test;
    w(test)
    {
        s();
    }
}