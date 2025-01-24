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
        int x,y,n;
        cin>>x>>y>>n;
        vector<int>a,b;
        int count=1;
        for(int i=0;i<n;i++){
            a.push_back(y);
            y-=count;
            count++;
        }
        vector<int>::iterator it;
        it=a.end()-1;
        a.erase(it);
        a.push_back(x);
        vector<int>temp=a;
        srt(a);
        for(int i=0;i<n-1;i++){
            b.push_back(temp[i]-temp[i+1]);
        }
        bool res=true;
        for(int i=0;i<b.size()-1;i++){
            if(b[i]>=b[i+1]){
                res=false;
            }
        }
        if(res){
            for(int o:a){
                cout<<o<<" ";
            }
        }
        else{
            cout<<"-1";
        }
        cout<<endl;
    }
}
