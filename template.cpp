#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
//o_set.order_of_key(n) #finding the number of elements less than or equal to n
//*(o_set.find_by_order(1)) //returns an iterator
/*if (o_set.find(n) != o_set.end()) o_set.erase(o_set.find(n)*/
// deleting the number n from the set if it exists

#pragma GCC optimize("O3") 
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("fast-math")

typedef long double lld;
typedef long long ll;
typedef unsigned long long ull;
// change 1
#define str string
#define ar array
#define pb push_back
#define in insert
#define mp make_pair
#define sz(x) (x.size())
#define all(a) (a).begin(), (a).end()
#define forn(i, a, b) for (int i = int(a); i < int(b); i++)
#define ffor(i, a) for (int i = 0; i < int(a); i++)
#define negforn(i, a, b) for (int i = int(a) - 1; i >= int(b); i--)
#define negffor(i, a) for (int i = a - 1; i >= 0; i--)
#define each(i, a) for (auto &i : a)
#define fi first
#define se second
#define vvpil vector<vector<pil>>
#define vpi vector<pi>
#define vs vector<str>
#define vvs vector<vector<str>>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vl vector<ll>
#define vvl vector<vector<ll>>
#define vc vector<char>
#define vvc vector<vector<char>>
#define vb vector<bool>
#define vvb vector<vector<bool>>
#define pi pair<int, int>
#define pl pair<ll, ll>
#define pil pair<int, ll>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define int long long 
#define tc int t; cin >> t; while(t--)
#ifndef ONLINE_JUDGE
#define debug(x) std::cerr << #x <<" "; _print(x); std::cerr << std::endl;
#else
#define debug(x)
#endif

void _print(int t) {std::cerr << t;} 
void _print(string t) {std::cerr << t;}
void _print(char t) {std::cerr << t;}
void _print(lld t) {std::cerr << t;}
void _print(double t) {std::cerr << t;}
void _print(ull t) {std::cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);

template <class T, class V> void _print(pair <T, V> p) {std::cerr << "{"; _print(p.first); std::cerr << ","; _print(p.second); std::cerr << "}";}
template <class T> void _print(vector <T> v) {std::cerr << "[ "; for (T i : v) {_print(i); std::cerr << " ";} std::cerr << "]";}
template <class T> void _print(set <T> v) {std::cerr << "[ "; for (T i : v) {_print(i); std::cerr << " ";} std::cerr << "]";}
template <class T> void _print(multiset <T> v) {std::cerr << "[ "; for (T i : v) {_print(i); std::cerr << " ";} std::cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {std::cerr << "[ "; for (auto i : v) {_print(i); std::cerr << " ";} std::cerr << "]";}

const int MAX = 2e5 + 7;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const lld EPS = 1e-9;


int gcd(int a, int b){
    return b == 0 ? a : gcd(b, a % b);
}
int lcm(int a, int b){
    return a * b / gcd(a,b);
}
void local(){
    #ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr); 
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    #endif
}
void setIO(string name = "") {
    cin.tie(0)->sync_with_stdio(0);
    if (sz(name)) {
        freopen((name + ".in").c_str(), "r", stdin); 
        freopen((name + ".out").c_str(), "w", stdout);
    }
}

void solve(){
     
}

signed main() {
    local(); 
    setIO();
    int tt = 1;
    cin >> tt;
    while(tt--) solve();
}
