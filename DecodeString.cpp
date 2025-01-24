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
void s()
{
    ll n; cin>>n;
    string s; cin>>s;
    string a="";
    for(int i=0;i<n;i++)
    {
        if(s[i+2]=='0' && i+2<n && (s[i+3]!='0'))
        {
            int num=((s[i]-'0')*10)+s[i+1]-'0';
            a+=char(96+num);
            i+=2;
        }
        else
        {
            int num=(s[i]-'0');
            a+=char(96+num);
        }
    }
    cout<<a<<endl;
}
int main()
{
    int test; cin>>test;
    w (test)
    {
        s();
    }
    
}