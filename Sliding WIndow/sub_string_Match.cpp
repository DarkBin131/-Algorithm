//Author : Dark Coder 
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using uint = unsigned int;
using ull = unsigned long long;
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main() {
    fastio();
    string s;
    cin >> s;
    string t;
    cin >> t;

    int ans = 0;
    string s1;

    for (int i = 0; i < t.size(); i++)
    {
        s1 += s[i];
    }
    if(s1==t)
    {
        ans++;
    }
    //sliding window started

    for (int i = t.size(); i < s.size();i++)
    {
        s1 += s[i];
        s1.erase(s1.begin());
    if(s1==t)
    {
        ans++;
    }
    }

     cout << ans << endl;

    return 0;
}
