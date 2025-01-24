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
#define f first
#define s second
#define bit(a)   __builtin_popcount(a)
#define w(x) while(x--)
#define test int t;cin>>t; for(int i=0;i<t;i++)
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
    string s; cin>>s;
    if(s.size()==1)
    {
        cout<<0<<endl;
        return;
    }
    vi change(s.size(),0);
    int ans=0;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]==s[i+1] and s[i]==s[i+2] and !change[i] and !change[i+2] and i<s.size()-2)
        {
            s[i]='1';
            s[i+2]='9';
            change[i]=1;
            change[i+2]=1;
            ans+=2;
            i++;
            continue;
        }
        else if(s[i]==s[i+1] and !change[i+1])
        {
            s[i+1]='4';
            change[i+1]=1;
            ans++;
            continue;
        }
        else if(s[i]==s[i+2] and !change[i+2] and i<s.size()-2)
        {
            s[i+2]='6';
            change[i+2]=1;
            ans++;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    Ahsanul;
    test solve();
}