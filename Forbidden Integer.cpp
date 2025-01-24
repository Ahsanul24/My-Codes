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
        int n,k,x;
        cin>>n>>k>>x;
        int temp;
        if(x!=1){
            cout<<"YES"<<endl;
            cout<<n<<endl;
            for(int i=0;i<n;i++){
                cout<<"1"<<" ";
            }
        }
        else if(x==1 && k==1){
            cout<<"NO";
        }
        else if(k>=2 && n%2==0){
            temp=n/2;
            cout<<"YES"<<endl;
            cout<<temp<<endl;
            for(int i=0;i<temp;i++){
                cout<<"2"<<" ";
            }
        }
        else if(k==2 && n%2!=0){
            cout<<"NO";
        }
        else if(k>1 && n%2!=0){
            int odd=n/2;
            cout<<"YES"<<endl;
            cout<<odd<<endl;
            vector<int>res;
            for(int i=0;i<odd-1;i++){
                res.push_back(2);
            }
            res.push_back(3);
            for(int o:res){
                cout<<o<<" ";
            }
        }
        cout<<endl;
    }
}
