// In the name of Allah, the Most Gracious, the Most Merciful.
// Coded by: Ridwan Ahmed
//Codeforces Handle: ridwan2005
// Contest: 
// Problem: 
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define l long
#define ull unsigned long long
#define ld long double
#define nx '\n'
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vpii vector<pii>
#define vpll vector<pll>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define point(n,d)  fixed << setprecision(d) <<n //n=float vale,d= precision
#define yes cout << "YES" << nx;
#define no cout << "NO" << nx;
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
#define mem(a, b) memset(a, b, sizeof(a))
#define set_bits __builtin_popcountll
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" = "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
const int A = 1e5;
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(ld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

// Constants
const int MOD = 1e9+7;
const int INF = 1e9;
const ll LINF = 1e18;
const ld PI = acos(-1.0);
const ld EPS = 1e-9;

// Direction arrays (for grid problems)
const int dx4[] = {-1, 0, 1, 0};
const int dy4[] = {0, 1, 0, -1};
const int dx8[] = {-1, -1, 0, 1, 1, 1, 0, -1};
const int dy8[] = {0, 1, 1, 1, 0, -1, -1, -1};

// Utility functions
template<typename T> void printVec(const vector<T>& v) {for(auto i:v)cout<<i<<" ";cout<<"\n";}
template<typename T> void printMat(const vector<vector<T>>& mat) {for(auto row:mat)printVec(row);}
string to_binary(ll n) {string s;while(n){s=(n%2?"1":"0")+s;n/=2;}return s;}
ll to_decimal(string s) {return bitset<64>(s).to_ullong();}

// Mathematical functions
ll gcd(ll a, ll b) {return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) {return a/gcd(a,b)*b;}
ll modpow(ll a, ll b, ll m=MOD) {ll res=1;a%=m;while(b){if(b&1)res=(res*a)%m;a=(a*a)%m;b>>=1;}return res;}
ll modinv(ll a, ll m=MOD) {return modpow(a,m-2,m);}
bool isPrime(ll n) {if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(ll i=5;i*i<=n;i+=6)if(n%i==0||n%(i+2)==0)return false;return true;}
bool isPerfectSquare(ll x) {ll s=sqrt(x);return s*s==x;}

// String operations
bool isVowel(char c) {c=tolower(c);return c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='y';}
string to_upper(string s) {transform(all(s),s.begin(),::toupper);return s;}
string to_lower(string s) {transform(all(s),s.begin(),::tolower);return s;}
bool isPalindrome(string s) {ll n=sz(s);for(ll i=0;i<n/2;i++)if(s[i]!=s[n-i-1])return false;return true;}

// Debugging and testing
void YES(bool t=true) {cout<<(t?"YES":"NO");}
void NO(bool t=true) {cout<<(t?"NO":"YES");}

// she told "manush caile sob pare" .In any case, I must reach my goal, in sha Allah.

void solve() {

    







}

int main() {
    fastio;
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif
    
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}
// Alhamdulillah