#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll min(ll a,ll b)
{
	if(a<b)
		return a;
	return b;
}
int main(int argc, char const *argv[])
{
	ll n;
	cin>>n;
	ll arr[n+1];
	arr[0]=-1;
	ll i,j;
	arr[n]=0;
	ll x,y,z;
	for(i=n-1;i>=1;i--)
	{
		x=y=z=INT_MAX;
		if(i*3<=n)
			x=arr[i*3];
		if(i*2<=n)
			y=arr[i*2];
		if(i+1<=n)
			z=arr[i+1];
		arr[i]=min(x,min(y,z))+1;
	}
	cout<<arr[1]<<endl;
	//for(i=1;i<=n;i++)
		//cout<<arr[i]<<" ";
	std::vector<ll> v;
	i=1;
	ll val=arr[i];
	while(val>0)
	{
		v.push_back(i);
		val--;
		if(arr[i*2]==val)
			i=i*2;
		else if(arr[i*3]==val)
			i=i*3;
		else if(arr[i+1]==val)
			i=i+1;
	}
	v.push_back(n);
	for(auto itr = v.begin();itr!=v.end();itr++)
		cout<<*itr<<" ";
	return 0;
}
