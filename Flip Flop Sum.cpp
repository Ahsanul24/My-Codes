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
    w(test){
        int n;
        cin>>n;
        vector<int>v;
        int t=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
            if(x<0){
                t++;
            }
        }
        int sum=0,c=0;
        for(int i=0;i<n-1;i++){
            if(v[i]==-1 && v[i+1]==-1){
                c=1;
                break;
            }
        }
            for(int i=0;i<n;i++){
                sum+=v[i];
            }
            if(c==1){
                cout<<sum+4<<endl;
            }
            else if(t==0){
                cout<<sum-4<<endl;
            }
            else{
                cout<<sum<<endl;
            }
    }
    return 0;
}