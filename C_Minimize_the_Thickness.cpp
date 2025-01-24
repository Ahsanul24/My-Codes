// IN THE NAME OF ALLAH
// Coded by Ahsanul Imam
// NSTU//CSTE
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int  MOD = 1000000007;
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define f first
#define s second
#define bit(a) __builtin_popcount(a)
#define w(x) while (x--)
#define test int t; cin>>t; for (int i = 0; i < t; i++)
#define loop for (int i = 0; i < n; i++)
#define print(v) for(auto it:v)cout<<it<<' ';cout<<endl;
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define pi 2*acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
int power(int a,int b){int res=1;while (b){if (b&1){res=(res*1ll*a)%MOD;}a=(a*1ll*a)%MOD;b>>=1;}return res;}
void solve()
{
    int n;
    cin >> n;
    vi v(n + 1, 0);
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    int sum=0;
    vi ans;
    for(int i=1;i<=n;i++)
    {
        sum+=v[i];
        int seg_sum=0,tem_ans=0,cnt=0;
        vi kocu;
        for(int j=i+1;j<=n;j++)
        {
            seg_sum+=v[j];
            if(seg_sum>sum)
            {
                break;
            }
            cnt++;
            if(seg_sum==sum)
            {
                kocu.pb(seg_sum);
                seg_sum=0;
                tem_ans=max(tem_ans,max(cnt,i));
                cnt=0;
            }
        }
        if(seg_sum==0 and tem_ans!=0)
        {
            ans.pb(tem_ans);
        }
    }
    if(ans.size()==0)
    {
        cout<<n<<endl;
        return;
    }
    cout<<*min_element(ans.begin(),ans.end())<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}