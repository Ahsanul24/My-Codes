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
    int o; cin>>o;
    string s; cin>>s;
    int UD=0,RL=0;
    bool check=false;
    for(int i=0;i<o;i++)
    {
        if(s[i]=='U')
        {
            UD++;
        }
        else if(s[i]=='D')
        {
            UD--;
        }
        else if(s[i]=='R')
        {
            RL++;
        }
        else
        {
            RL--;
        }
        if(UD==1 && RL==1)
        {
            check=true;
        }
    }
    if(check)
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
    int test; cin>>test;
    w (test)
    {
        solve();
    }
    
}