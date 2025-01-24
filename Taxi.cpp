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
    int n; cin>>n;
    vi v(n);
    int one=0,two=0,three=0,four=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]==1)one++;
        else if(v[i]==2)two++;
        else if(v[i]==3)three++;
        else four++;
    }
    int ans=0;ans+=four;
    int temp=min(one,three);
    ans += temp;
    one -= temp;
    three -= temp;
    if(two%2==0)
    {
        ans+=(two/2);
        two=0;
    }
    else
    {
        ans+=(two/2);
        two=1;
    }
    if(one==0)
    {
        ans+=three;
        ans+=two;
    }
    else
    {
        if(((two*2)+one)<4)
        {
            ans+=1;
        }
        else if(((two*2)+one)%4==0)
        {
            ans+=((two*2)+one)/4;
        }
        else
        {
            ans += ((two * 2) + one) / 4+1;
        }
    }
    cout<<ans<<endl;
    // cout<<one<<" "<<two<<" "<<three<<" "<<four<<endl;
}
int main()
{
    Ahsanul();
    solve();
}