// IN THE NAME OF ALLAH
// Coded by Ahsanul Imam
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int  MOD = 1e9;
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define f first
#define s second
#define bit(a) __builtin_popcountll(a)
#define w(x) while (x--)
#define test int t; cin>>t; for (int i = 0; i < t; i++)
#define loop for (int i = 0; i < n; i++)
#define print(v) for(auto it:v)cout<<it<<' ';cout<<endl;
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define pi 2*acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
vector<pr>knight_posible{{2, 1}, {2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}, {-2, 1}, {-2, -1}};//knight moves
vector<pr>posible{{0,-1},{0,1},{-1,0},{1,0},{-1,-1},{-1,1},{1,-1},{1,1}};//eight direction moves;
int power(int a,int b){int res=1;while (b){if (b&1){res=(res*1ll*a)%MOD;}a=(a*1ll*a)%MOD;b>>=1;}return res;}
int op(int a,int b,char c)
{
    if(c=='+')return a+b;
    else return a-b;
}
void solve()
{
    string s; cin>>s;
    int n=(int)s.size();
    ll res=0;
    int len=(int)s.size();
    stack<char>sym;
    stack<int>num;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='(' or s[i]=='+' or s[i]=='-')
        {
            sym.push(s[i]);
        }
        else if(isdigit(s[i]))
        {
            int val=0;
            while(i<n and isdigit(s[i]))
            {
                val=((val*10)%MOD+(s[i]-'0'))%MOD;
                i++;
            }
            num.push(val);
            //cout<<num.top()<<endl;
            i--;
        }
        else if(s[i]==')')
        {
            ll b = num.top();
            num.pop();
            ll a = num.top();
            num.pop();
            bool check=false;
            while(!sym.empty() and sym.top()!='(')
            {

                if (sym.top() == '+' or sym.top() == '-')
                {
                    ll tem_res = op(a, b, sym.top());
                    num.push(tem_res);
                    check=true;
                    //cout<<num.top()<<endl;
                }
                sym.pop();
            }
            if(!check)
            {
                num.push(a);
                num.push(b);
            }
        }
    }
    //cout<<num.size()<<" "<<sym.size()<<endl;
    ll b=0,a=0;
    //cout<<a<<" "<<b<<endl;
    while(!sym.empty())
    {
        if (!num.empty())
        {
            b = num.top();
            num.pop();
        }
        if (!num.empty())
        { 
            a = num.top();
            num.pop();
        }
        if (a == 0 and b == 0)
        {
            cout << 0 << endl;
            return;
        }
        //cout<<a<<" "<<b<<endl;
        if(sym.top()=='+' or sym.top()=='-')
        { 
            ll tem_res=op(a,b,sym.top());
            num.push(tem_res);
            //cout<<num.top()<<endl;
        }
        sym.pop();
    }
    cout<<num.top()<<endl;
}
int main()
{
    Ahsanul;
     test
    solve();
}