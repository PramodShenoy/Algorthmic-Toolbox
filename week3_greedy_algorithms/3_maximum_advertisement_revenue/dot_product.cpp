#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(int argc, char const *argv[])
{
	ll i,n;
	cin>>n;
	ll a[n],b[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
		cin>>b[i];
	sort(a,a+n,greater<int>());
	sort(b,b+n,greater<int>());
	ll s=0;
	for(i=0;i<n;i++)
		s+=a[i]*b[i];
	cout<<s<<endl;
	return 0;
}