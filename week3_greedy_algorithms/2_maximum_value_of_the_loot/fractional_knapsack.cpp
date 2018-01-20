#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef struct item
{
	double wt;
	double val;
	double ratio;
}item;
bool cmpFunc(item a,item b)
{
	if(a.ratio>b.ratio)
		return true;
	else
		return false;
}
void knapsack(ll capacity,ll n,item arr[])
{
	double curwt=0.0;
	double val=0.0;

	for(ll i=0;i<n;i++)
	{
		if((curwt+arr[i].wt)<=capacity)
		{
			curwt+=arr[i].wt;
			val+=(double)arr[i].val;
			//std::cout << val << '\n';
		}
		else
		{
			ll left = capacity - curwt;
			val+=arr[i].val * ((double) left/arr[i].wt);
			break;
		}
	}
  std::cout << std::setprecision(10) << val << '\n';
}
int main(int argc, char const *argv[])
{
	cout.precision(10);
	ll capacity;
	ll i,n;
	cin>>n>>capacity;
	item arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i].val>>arr[i].wt;
		arr[i].ratio=((double)arr[i].val)/((double)arr[i].wt);
		//cout<<setprecision(10)<<arr[i].ratio<<endl;
	}
	sort(arr,arr+n,cmpFunc);
	knapsack(capacity,n,arr);
	return 0;
}