#include<bits/stdc++.h>
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
#define ZZ cout<<0<<endl;
#define OO cout<<1<<endl;
#define TT cout<<2<<endl;
#define no cout<<"no"<<endl;
#define No cout<<"No"<<endl;
#define NO cout<<"NO"<<endl;
#define yes cout<<"yes"<<endl;
#define Yes cout<<"Yes"<<endl;
#define YES cout<<"YES"<<endl;
bool is_prime(ll x);
bool is_power2(ll n);
ll count_set_bit(ll n);
bool isPerfectSquare(ll x);
bool ispallindrome(string s);
ll SieveOfEratosthenes(ll n);
vector<ull> getfactors(ull n);
ull gethighestoddfactor(ull n);
void get_factors_set(ll n,set<ll> &st);
vector<int> allprimebetween(int l,int r);
int modularExponentiation(int x, int n, int m);

// RadheKrishna //

void solve(){
    int n;
    cin>>n;
    unordered_set<int>st;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        st.insert(x);
    }
    cout<<st.size()<<endl;
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    while(t--){
    solve();
    }
}

vector<int> allprimebetween(int l,int r)
{
    vector<bool> v(1000005,true);
    v[0]=v[1]=false;
    for(int i=2;i*i<=1000001;i++)
    {
        if(v[i])
        {
            for(int j=i*i;j<=1000001;j+=i)
            {
                v[j]=false;
            }
        }
    }
    vector<int> prime;
    for(int i=l;i<=r;i++)
    {
        if(v[i])
        {
            prime.pub(i);
        }
    }
    return prime;
}
void get_factors_set(ll n,set<ll> &st)
{
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            st.insert(i);
            st.insert((n/i));
        }
    }
}
vector<ull> getfactors(ull n)
{
    vector<ull> v;
    for(ull i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            v.pub(i);
            if((n/i)!=i)
            {
                v.pub(n/i);
            }
            else
            {
                break;
            }
        }
    }
    sort(v.begin(),v.end());
    return v;
}
ull gethighestoddfactor(ull n)
{
    while(n>0)
    {
        if(n%2!=0)
        {
            return n;
        }
        n=n/2;
    }
    return 1;
}
ll SieveOfEratosthenes(ll n)
{
    ll c=0;
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
    for (int p=2; p<=n; p++)
        if (prime[p])
            c++;
    return c;
}
bool is_prime(ll x)
{
    for(ll i=2;i<=sqrt(x);i++)
        if(x%i==0)
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
int modularExponentiation(int x, int n, int m) {
    int ans=1;
    while(n>0){
        if(n&1){
            ans = (ans * 1LL * x)%m;
        }
        x = (x * 1LL * x)%m;
        n=n>>1;
    }
    return ans;
}
bool is_power2(ll n)
{
    if(n&(n-1))
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
    while(n != 0)
    {
        if((n & 1) == 1)
        {
            count++;
        }
        n = n >> 1; //right shift 1 bit
    }
    return count;
}