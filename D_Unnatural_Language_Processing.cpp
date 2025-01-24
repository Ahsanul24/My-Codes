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
    int n; cin>>n;
    string s; cin>>s;
    string tem = "";
    string res="";
    for(int i=0;i<n-2;i++)
    {
        if(s[i]=='a' or s[i]=='e')
        {
            tem+=s[i-1];
            tem+=s[i];
            if(s[i+2]=='a' or s[i+2]=='e')
            {
                res+=tem;
                res+=".";
                tem="";
                continue;
            }
            else
            {
                tem+=s[i+1];
                res+=tem;
                res+=".";
                tem="";
                i++;
            }
        }

    }
    int travars=0;
    for(int i=0;i<res.size();i++)
    {
        if(res[i]!='.')travars++;
    }
    for(int i=travars;i<n;i++)
    {
        res+=s[i];
    }
    cout<<res<<endl;
}
int main()
{
    Ahsanul;
    int t; cin>>t;
    w(t)
    solve();
}