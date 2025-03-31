//strating In the name of Allah, the Most Gracious, the Most Merciful.
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define l long
#define I int
#define nx '\n'
#define pb push_back
#define MP make_pair
#define ff first
#define ss second
#define sz(x) x.size()
#define point(n,d)  fixed << setprecision(d) <<n //n=float vale,d= precision
#define yes cout << "YES" << nx;
#define no cout << "NO" << nx;
#define yn(x) cout << (x ? "YES" : "NO") << nx;
#define ny(x) cout << (x ? "NO" : "YES") << nx;
#define all(x) begin(x), end(x)
#define allr(x) rbegin(x), rend(x)
#define GCD(a,b)  __gcd(a,b)
#define LCM(a,b)  (a*b)/__gcd(a,b)
#define sqr(a)    ((a)*(a))
const int A = 1e5;
#define fastIO cin.tie(0)->sync_with_stdio(0);
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
ll binToDec(string s) { return bitset<64>(s).to_ullong(); } //binary to decimal
string decToBin(ll a) { return bitset<64>(a).to_string(); } // decimal to binary

bool isVowel(char ch)
{
    static const std::set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'Y', 'y', 'A', 'E', 'I', 'O', 'U'};
    return vowels.find(ch) != vowels.end();
}

bool isPrime(int n)
{
    if (n <= 1)return false;if (n <= 3)return true;
    if (n % 2 == 0 || n % 3 == 0)return false;
    for (int i = 5; i * i <= n; i += 6)if (n % i == 0 || n % (i + 2) == 0)return false;
    return true;
}

                                    ///////////////////////////////
                                    //       ridwan2005          //
                                    //          Bubt             //
                                    /////////////////////////////


             // she told "manush caile sob pare" .In any case, I must reach my goal, in sha Allah.

void slove(){









}
int main()
{
    fastIO;

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        slove();
    }
}
// Alhamdulillah this code is Done;