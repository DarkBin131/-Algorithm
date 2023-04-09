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
void primefact(int n)
{
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			int cnt=0;
			while(n%i == 0)
			{
				cnt++;
				n=n/i;
			}
			cout<<i<<"^"<<cnt<<",";
		}
	}
	if(n>1)cout<<n<<"^"<<1<<endl;
 
	else cout<<endl;
}
int main()
{
    fastio();
    int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		primefact(n);
	}
	return 0;
}