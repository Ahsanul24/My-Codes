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
    int n;
    cin>>n;
    vi v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>s;
    vector<int>d;
    int k=n,j=0;
    int z=1;
    while(z!=n+1){
        int l=v[j],r=v[k-1];
        if((z%2!=0)){
            if(l>r){
                s.push_back(l);
                j++;
                z++;
            }
            else{
                s.push_back(r);
                k--;
                z++;
            }
        }
        else{
            if(l>r){
                d.push_back(l);
                j++;
                z++;
            }
            else{
                d.push_back(r);
                k--;
                z++;
            }
        }
    }
    sort(v.begin(),v.end());
    int sereja=0,dima=0;
    for(int i=0;i<s.size();i++){
        sereja+=s[i];
    }
    for(int i=0;i<d.size();i++){
        dima+=d[i];
    }
    cout<<sereja<<" "<<dima;
}
