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
void solve()
{
    int x,y;cin>>x>>y;
    string a,b; cin>>a>>b;
    bool check=true,mun=true;
    for(int i=0;i<y-1;i++)
    {
        if(b[i]==b[i+1])
        {
            check=false;
            break;
        }
    }
    char c=b[0],d=b[y-1];
    for(int i=0;i<x-1;i++)
    {
        if(a[i]==a[i+1])
        {
            mun=false;
            break;
        }
    }
    if(mun)
    {
        cout<<"Yes"<<endl;
        return;
    }
    if(!check)
    {
        cout<<"No"<<endl;
        return;
    }
    for(int i=0;i<x-1;i++)
    {
        if(a[i]==a[i+1])
        {
            char temp=a[i];
            if(temp==c || temp==d)
            {
                cout<<"No"<<endl;
                return;
            }
        }
    }
    cout<<"Yes"<<endl;
}
int main()
{
    Ahsanul;
    int t; cin>>t;
    w(t)solve();
}