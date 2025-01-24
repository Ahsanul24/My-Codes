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
    int test;
    cin>>test;
    w(test){
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        vector<int>sorted;
        vector<int>even,odd;
        for(int i=0;i<n;i++){
            if(v[i]%2==0){
                even.push_back(v[i]);
            }
            else{
                odd.push_back(v[i]);
            }
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
        vector<pair<int,int>>p;
        /*for(int i=0;i<n;i++){
            p.push_back(make_pair(v[i],i+1));
        }
        for(int i=0;i<n;i++){
            cout<<p[i].first<<" "<<p[i].second<<endl;
        }
        cout<<endl;*/
        int a=0,b=0;
        for(int i=0;i<n;i++){
            if(v[i]%2==0){
                sorted.push_back(even[a]);
                a++;
            }
            else{
                sorted.push_back(odd[b]);
                b++;
            }
        }
        /*for(int i=0;i<n;i++){
            cout<<sorted[i]<<" ";
        }*/
        vector<int>vec=sorted;
        sort(vec.begin(),vec.end());
        bool check=true;
        for(int i=0;i<n;i++){
            if(vec[i]!=sorted[i]){
                check=false;
            }
        }
        if(check){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
