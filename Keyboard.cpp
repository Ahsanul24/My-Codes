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
    char ch; cin>>ch;
    string s; cin>>s;
    string a = "qwertyuiop" ;
    string b = "asdfghjkl;" ;
    string c = "zxcvbnm,./" ;
    string ans="";
    for(int i=0;i<s.length();i++)
    {
        for(int j=0;j<10;j++)
        {
            if(s[i]==a[j])
            {
                if(ch=='R')
                {
                    ans+=a[j-1];
                }
                else
                {
                    ans+=a[j+1];
                }
                break;
            }
            else if(s[i]==b[j])
            {
                if(ch=='R')
                {
                    ans+=b[j-1];
                }
                else
                {
                    ans+=b[j+1];
                }
                break;
            }
            else if(s[i]==c[j])
            {
                if(ch=='R')
                {
                    ans+=c[j-1];
                }
                else
                {
                    ans+=c[j+1];
                }
                break;
            }
        }
    }
    cout<<ans;
}
int main()
{
    solve();
}