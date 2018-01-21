#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll binarySearch(ll arr[], ll low, ll high, ll x)
{
    if (high >= low)
    {
        ll mid = (low + high)/2;
        if ( (mid == 0 || x > arr[mid-1]) && (arr[mid] == x) )
            return mid;
        else if (x > arr[mid])
            return binarySearch(arr, (mid + 1), high, x);
        else
            return binarySearch(arr, low, (mid -1), x);
    }
 
    return -1;
}
int main(int argc, char const *argv[])
{
	ll i,n;
	cin>>n;
	ll arr[n];
	for(i=0;i<n;i++)
		cin>>arr[i];
	sort(arr,arr+n);
	ll res = 0;
	for(i=0;i<n;i++)
	{
		ll index = binarySearch(arr,0,n-1,arr[i]);
		//cout<<index<<endl;
		if(index==-1)
			continue;
		if((index + n/2)<=(n-1) && (arr[index + n/2]==arr[i]))
			{
				res = 1;
				break;
			}
	}
	cout<<res<<endl;
	return 0;
}