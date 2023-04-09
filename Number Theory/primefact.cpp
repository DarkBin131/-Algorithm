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
bool Bool[90000001];
int n=90000000;
vector<int>prime;
void sieve()
{
	for(int i=2;i*i<=n;i++)
	{
		if(Bool[i]==false)
		{
			for(int j=i*i;j<=n;j+=i)
			{
				Bool[j]=true;
			}
		}
	}
	for(int i=2;i<=n;i++)
	{
		if(Bool[i]==false)prime.push_back(i);
	}
}


void primeFact(long long n) {
  int count;
  for (int i = 0; i < prime.size() && prime[i] * prime[i] <= n; i++) {
    count = 0;
 
    while (n % prime[i] == 0) {
      count++;
      n /= prime[i];
    }
 
    if (count!= 0)
      cout << prime[i] << endl;
  }
 
  if (n != 1)
    cout << n << endl;
}



int main() {
    fastio();
    sieve();

    ll x;
    cin >> x;

    primeFact(x);

    return 0;
}
