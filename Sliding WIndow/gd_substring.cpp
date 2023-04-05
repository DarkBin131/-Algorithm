//Author : Dark Coder 
// A good substring is  a text which has no repitiions
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

int countGoodSubstrings(string s)
{
  
  if(s.size()<3)
     return 0;

  map<char, int> map;
  int ans = 0;

  map[s[0]] = 1;
  map[s[1]]++;
  map[s[2]]++;
  if(map.size()==3)
  {
     ans++;
  }

  for (int i = 3, j = 0; i < s.size();i++,j++)
  {
     map[s[i]]++;
     map[s[j]]--;

   if(map[s[j]]==0)
       map.erase(s[j]);

 if(map.size()==3)
  {
     ans++;
  }    
  }

  return ans;
}





int main() {
    fastio();

    cout << countGoodSubstrings("xyzzaz") << endl;
    

    return 0;
}
