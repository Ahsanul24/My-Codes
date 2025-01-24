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
    int n;
    cin>>n;
    vector<int>v(n);
    int pos=0,neg=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x<0){
            neg++;
        }
        else{
            pos++;
        }
        v.push_back(x);
    }
    if(neg==0){
        cout<<"0"<<endl;
        return;
    }
    else if(pos>=neg && neg%2==0){
        cout<<"0"<<endl;
        return;
    }
    else if(pos>=neg && neg%2!=0){
        cout<<"1"<<endl;
        return;
    }
    int d=neg-pos;
    int res;
    if(d%2==0){
        res=(d/2);
    }
    else{
        res=(d/2)+1;
    }
    if((neg-res)%2!=0){
        res+=1;
    }
    cout<<res<<endl;
}
int main()
{
    Ahsanul;
    int t; cin>>t;
    w (t)
    {
        solve();
    }
    
}