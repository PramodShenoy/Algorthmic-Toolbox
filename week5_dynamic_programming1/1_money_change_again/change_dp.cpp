#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll get_change(ll n) 
{
 	ll change[]={1,3,4};
 	ll m = 3;
 	ll table[n+1]={0};
 	table[0]=0;
 	ll coins=0;
 	for(ll i=1;i<=n;i++)
 	{
 		table[i]=999;
 		for(ll j=0;j<3;j++)
 		{
 			if(i>=change[j])
 			{
 				coins = table[i-change[j]]+1;
 				if(coins<=table[i])
 					table[i]=coins;
 			}
 		}
 	}
 	return table[n];
}

int main() 
{
  ll n;
  std::cin >> n;
  std::cout << get_change(n) << '\n';
}
