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
    Ahsanul;
    int test;
    cin>>test;
    w(test)
    {
        int o;
        cin>>o;
        vi v;
        for(int i=0; i<o; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        bool res=true;
        if(v[0]>o)
        {
            res=false;
        }
        else
        {
            for(int i=0; i<o; i++)
            {
                if(v[(v[i]-1)]<i+1)
                {
                    res=false;
                }
            }
        }
        if(res)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
