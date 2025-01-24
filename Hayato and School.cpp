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
    vector<int>v;
    vector<int>even,odd;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x%2==0){
            even.push_back(i+1);
        }
        else{
            odd.push_back(i+1);
        }
        v.push_back(x);
    }
    if(odd.size()>=3){
        cout<<"YES"<<endl;
        for(int i=0;i<3;i++){
            cout<<odd[i]<<" ";
        }
    }
    else if(odd.size()>=1 && even.size()>=2){
        cout<<"YES"<<endl;
        cout<<odd[0]<<" "<<even[0]<<" "<<even[1];
    }
    else{
        cout<<"NO";
    }
    cout<<endl;
}
int main()
{
    Ahsanul;
    int test; cin>>test;
    w(test){
        solve();
    }
}
