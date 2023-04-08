//General approach (phi(10)--> number of gcd(x,10)==1)
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
int gcd(int a , int b)
{
    if(b==0)
        return a;
    return gcd(b, a % b);
}

int main() {
    fastio();

    int n;
    cin >> n;
    int cnt = 0;
    for(int i = 1 ; i<=n ;i++) {

      if(gcd(n,i)==1)
          cnt++;
        
    }
    cout << cnt << endl;
    return 0;
}


