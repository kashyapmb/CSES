#include <bits/stdc++.h>
using namespace std;
#define ull long long
#define ll long long
#define int long long
#define mod 1000000007
#define ff first
#define ss second
#define endl "\n"
#define pub push_back
#define pob pop_back
#define puf push_front
#define pof pop_front
#define lb lower_bound
#define ub upper_bound
#define ZZ cout << 0 << endl;
#define OO cout << 1 << endl;
#define TT cout << 2 << endl;
#define MO cout << -1 << endl;
#define no cout << "no" << endl;
#define No cout << "No" << endl;
#define NO cout << "NO" << endl;
#define yes cout << "yes" << endl;
#define Yes cout << "Yes" << endl;
#define YES cout << "YES" << endl;
#define vi vector<int>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vpii vector<pair<int, int>>
#define si set<int>
#define mii map<int, int>
#define msi map<string, int>
#define pii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define c(x) cout << (x) << endl;
#define cs(x) cout << (x) << " ";
#define cd(x, y) cout << (x) << " " << (y) << endl;
#define ce cout << endl;
bool is_prime(ll x);
bool is_power2(ll n);
int gcd(int a, int b);
int lcm(int a, int b);
ll count_set_bit(ll n);
bool isPerfectSquare(ll x);
bool ispallindrome(string s);
ll SieveOfEratosthenes(ll n);
vector<ll> getfactors(ll n);
ll gethighestoddfactor(ll n);
void get_factors_set(ll n, set<ll> &st);
vector<int> allprimebetween(int l, int r);
bool cmp1(int a, int b);
bool cmp(pair<int, int> a, pair<int, int> b);
int modularExponentiation(int x, int n, int m);

// Jai Shree Ram //

void solve()
{
    int n;
    cin >> n;
    vector<pair<int,int>> v;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        v.pub({x, i});
    }
    sort(all(v));
    int ct = v[0].ss;
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (ct > v[i].ss) ans++;
        ct = v[i].ss;
    }
    ans++;
    c(ans)
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    while (t--)
    {
        solve();
    }
}

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}
int lcm(int a, int b)
{
    return (a * b) / (gcd(a, b));
}
bool cmp(pair<int, int> a, pair<int, int> b)
{ // <<incinc, <>incdec, ><decinc, >>decdec
    if (a.first != b.first)
        return a.first < b.first;
    return a.second < b.second;
}
bool cmp1(int a, int b)
{ // < increasing, > decreasing
    if (a > b)
        return true;
    return false;
}
vector<int> allprimebetween(int l, int r)
{
    vector<bool> v(1000005, true);
    v[0] = v[1] = false;
    for (int i = 2; i * i <= 1000001; i++)
    {
        if (v[i])
        {
            for (int j = i * i; j <= 1000001; j += i)
            {
                v[j] = false;
            }
        }
    }
    vector<int> prime;
    for (int i = l; i <= r; i++)
    {
        if (v[i])
        {
            prime.pub(i);
        }
    }
    return prime;
}
void get_factors_set(ll n, set<ll> &st)
{
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            st.insert(i);
            st.insert((n / i));
        }
    }
}
vector<ll> getfactors(ll n)
{
    vector<ll> v;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            v.pub(i);
            if ((n / i) != i)
            {
                v.pub(n / i);
            }
            else
            {
                break;
            }
        }
    }
    sort(v.begin(), v.end());
    return v;
}
ll gethighestoddfactor(ll n)
{
    while (n > 0)
    {
        if (n % 2 != 0)
        {
            return n;
        }
        n = n / 2;
    }
    return 1;
}
ll SieveOfEratosthenes(ll n)
{
    ll c = 0;
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * 2; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (int p = 2; p <= n; p++)
        if (prime[p])
            c++;
    return c;
}
bool is_prime(ll x)
{
    for (ll i = 2; i <= sqrt(x); i++)
        if (x % i == 0)
        {
            return false;
        }
    return true;
}
bool isPerfectSquare(ll x)
{
    if (x >= 0)
    {
        ll sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}
int modularExponentiation(int x, int n, int m)
{
    int ans = 1;
    while (n > 0)
    {
        if (n & 1)
        {
            ans = (ans * 1LL * x) % m;
        }
        x = (x * 1LL * x) % m;
        n = n >> 1;
    }
    return ans;
}
bool is_power2(ll n)
{
    if (n & (n - 1))
        return false;
    else
        return true;
}
bool ispallindrome(string s)
{
    string t(s.rbegin(), s.rend());
    return (t == s);
}
ll count_set_bit(ll n)
{
    ll count = 0;
    while (n != 0)
    {
        if (n & 1 == 1)
        {
            count++;
        }
        n = n >> 1; // right shift 1 bit
    }
    return count;
}