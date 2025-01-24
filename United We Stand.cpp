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
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end(), greater<int>());
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == v[i + 1])
        {
            count++;
        }
    }
    vector<int> even, odd, a, b;
    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
        {
            even.push_back(v[i]);
        }
        else
        {
            odd.push_back(v[i]);
        }
    }
    int max = v[0], mcount = 0;
    for (int i = 0; i < n; i++)
    {
        if (max == v[i])
        {
            mcount++;
        }
    }
    if (count == n)
    {
        cout << "-1";
    }
    else if (!even.empty() && !odd.empty())
    {
        cout << odd.size() << " " << even.size() << endl;
        for (int d : odd)
        {
            cout << d << " ";
        }
        cout << endl;
        for (int e : even)
        {
            cout << e << " ";
        }
    }
    else
    {
        cout << n - mcount << " " << mcount << endl;
        for (int i = mcount; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < mcount; i++)
        {
            cout << max << " ";
        }
    }
    cout << endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
