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
    int n;
    cin>>n;
    bool check =false,neg=true,pos=true;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]==0){
            check=true;
            break;
        }
        else if(v[i]<0){
            neg=false;
        }
        else{
            pos=false;
        }
    }
    srt(v);
    if(check){
        cout<<"0";
        return;
    }
    if(n==1){
        (v[0]<0)?cout<<-v[0]:cout<<v[0];
        return;
    }
    if(neg){
        cout<<v[0];
        return;
    }
    if(pos){
        cout<<-v[0];
        return;
    }
    int a;
    for(int i=0;i<n;i++){
        if(v[i]>0){
            a=i;
            break;
        }
    }
    if(v[a]<-v[a-1]){
        cout<<v[a];
    }
    else{
        cout<<-v[a-1];
    }
}
int main()
{
    Ahsanul;
    s();
}
