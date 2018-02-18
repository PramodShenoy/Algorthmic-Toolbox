#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll max(ll a,ll b)
{
	if(a>=b)
		return a;
	return b;
}
ll lcs(std::vector<ll> &v1,std::vector<ll> &v2)
{
	ll m = v1.size();
	ll n = v2.size();
	ll table[m+1][n+1];
	ll i,j;
	for(i=0;i<=m;i++)
		table[i][0]=0;
	for(i=0;i<=n;i++)
		table[0][i]=0;

	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(v1[i-1]!=v2[j-1])
			{
				table[i][j]=max(table[i][j-1],max(table[i-1][j],table[i-1][j-1]));
			}
			else
			{
				table[i][j]=table[i-1][j-1]+1;
			}
		}
	}
	/*for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
			cout<<table[i][j]<<" ";
		cout<<endl;
	}*/
	return table[m][n];
}
int main(int argc, char const *argv[])
{
	std::vector<ll> v1;
	std::vector<ll> v2;
	ll i,j,e;
	ll m,n;
	cin>>m;
	for(i=0;i<m;i++)
	{
		cin>>e;
		v1.push_back(e);
	}
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>e;
		v2.push_back(e);
	}
	cout<<lcs(v1,v2);
	return 0;
}