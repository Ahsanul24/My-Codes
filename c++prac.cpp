//**************BISMILLAHIR RAHMANIR RAHIM****************
//*******************Md Yeasin Arafat****************
#include <bits/stdc++.h>
using namespace std;
#define check cout << '?' << endl;
#define ll long long
const int M = 1e9 + 7;
const int MOD = 1e9 + 7;
#define all(x) x.begin(), x.end()
#define w(x) while (x--)
#define pi acos(-1.00)
#define nl '\n';
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define rev(v) reverse(all(v));
#define printv(a)          \
    for (auto it : a)      \
        cout << it << ' '; \
    cout << endl
#define printm(a)     \
    for (auto it : a) \
    cout << it.first << ' ' << it.second << endl
#define printmv(a)        \
    for (auto [x, v] : a) \
    cout << x << endl, printv(v)
#define gcd(a, b) __gcd<long long int>(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define pi 2 * acos(0.0)
#define pr pair<int, int>
vector<pr> knight_posible{{2, 1}, {2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}, {-2, 1}, {-2, -1}}; // knight moves
vector<pr> posible{{0, -1}, {0, 1}, {-1, 0}, {1, 0}, {-1, -1}, {-1, 1}, {1, -1}, {1, 1}};          // eight direction moves;
int power(int a, int b)
{
    int res = 1;
    while (b)
    {
        if (b & 1)
        {
            res = (res * 1ll * a) % MOD;
        }
        a = (a * 1ll * a) % MOD;
        b >>= 1;
    }
    return res;
}
const int N = 1e6 + 1;
vector<bool> isprime(N + 10, 1);
vector<int> Range(N + 1, 0);

void prime()
{
    isprime[0] = isprime[1] = 0;
    for (int i = 2; i * i <= N; i++)
    {
        if (isprime[i])
        {
            for (int j = i * i; j < N; j += i)
            {
                isprime[j] = false;
            }
        }
    }
}

void cal()
{

    for (int i = 1; i < N; i++)
    {
        if (isprime[i])
        {
            int num = i;
            string str = to_string(num);
            // cout<<str<<" ";
            rev(str);
            // cout<<str<<endl;
            int dem = stoi(str);
            // cout<<dem<<endl;

            if (dem <= N and isprime[dem])
            {
                Range[i] = Range[i - 1] + 1;
            }
            else
            {
                Range[i] = Range[i - 1];
            }
        }
        else
            Range[i] = Range[i - 1];
    }
}

void solve()
{
    // for(int i=1;i<=22;i++)cout<<Range[i]<<" ";cout<<nl;
    int q;
    cin >> q;
    w(q)
    {
        int a, b;
        cin >> a >> b;
        int ans = Range[b] - Range[a - 1];
        cout << ans << endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    prime();
    cal();
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        // cout<<'C'<<'a'<<'s'<<'e'<<' '<<'#'<<i<<':'<<endl;
        solve();
    }
    return 0;
}