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
#define ff first
#define endl '\n' 
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
int main() {
    fastio();
    sieve();
   
   int t ;
   cin>>t;
   
   while(t--) {
    int x;
    cin >> x;
    cout << prime[x- 1] << endl;
   }
    

    return 0;
}