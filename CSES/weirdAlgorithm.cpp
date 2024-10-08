#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define INF LLONG_MAX
#define PI acos(-1.0)

#define vi vector<int>
#define vll vector<long long>
#define pii pair<int, int>
#define pll pair<long long, long long>

#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()
#define pb push_back
#define ppb pop_back
#define ff first
#define ss second

#define FOR(i, s, n) for (int i = s; i < n; i++)
#define FORD(i, s, n) for (int i = s; i >= n; i--)
#define EACH(x, a) for (auto &x : a)

#ifdef DEBUG
#define dbg(x) cerr << #x << " = " << x << endl;
#else
#define dbg(x)
#endif

#define lcm(a, b) (a / __gcd(a, b) * b)
#define sq(x) ((x) * (x))
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))

#define fast_io()                 \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define readvec(v)    \
    for (auto &i : v) \
        cin >> i;
#define readarr(a, n) FOR(i, 0, n) cin >> a[i];

int main()
{
    fast_io();
    long long n;
    cin >> n;

    while (n != 1)
    {
        cout << n << " ";
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n = n * 3 + 1;
        }
    }
    cout << 1 << endl;
    return 0;
}