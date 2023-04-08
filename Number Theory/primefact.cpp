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
long long const n = 1e6 + 1000;
bitset<n> Bool;
vector<int> prime;
void sieve() {
  Bool[0] = Bool[1] = 1;
  
  for (int i = 2; i * i < n; i++)
    if (Bool[i] == 0)
      for (int j = i * i; j < n; j += i)
        Bool[j] = 1;
 
  for (int i = 0; i < n; i++)
    if (Bool[i] == 0)
      prime.push_back(i);
}


vector<ll> primeFact(long long n) {
  int count;
  vector<ll> res;
  for (int i = 0; i < prime.size() && prime[i] * prime[i] <= n; i++) {
    count = 0;
 
    while (n % prime[i] == 0) {
      count++;
      n /= prime[i];
    }
 
    while(count--)
      res.push_back(prime[i]);
    }
 
  if (n != 1)
    res.push_back(n);

  return res;
}



int main() {
    fastio();
    sieve();

    ll x;
    cin >> x;

    vector<ll> v = primeFact(x);
    cout << x << ":";
   for (int i = 0; i < v.size(); i++) {
        cout << " " << v[i];
    }

    cout << endl;

    return 0;
}
