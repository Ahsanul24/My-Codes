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
    char s[9][9];
    for(int i=0;i<8;i++)
    {
        cin>>s[i];
    }
    ll colcheckB = 0, rowcheckR = 0;
    bool check1=false,check2=false;
    for(int i=0;i<8;i++)//col check
    {
        for(int j=0;j<8;j++)
        {
            if(s[j][i]=='B')
            {
                colcheckB++;
                if(colcheckB==8)
                {
                    check1=true;
                }
            }
            else
            {
                colcheckB=0;
            }
        }
    }
    for(int i=0;i<8;i++)//row check
    {
        for(int j=0;j<8;j++)
        {
            if(s[i][j]=='R')
            {
                rowcheckR++;
                if(rowcheckR==8)
                {
                    check2=true;
                }
            }
            else
            {
                rowcheckR=0;
            }
        }
    }
    if(check1)
    {
        cout<<"B"<<endl;
    }
    if(check2)
    {
        cout<<"R"<<endl;
    }
}
int main()
{
    
    Ahsanul;
    ll t; cin>>t;
    w (t)
    {
        solve();
    }

}