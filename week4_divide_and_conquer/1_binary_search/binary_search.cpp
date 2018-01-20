#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	ll i,j,k,n;
	cin>>n;
	ll arr[n];
	for(i=0;i<n;i++)
		cin>>arr[i];
	cin>>k;
	ll sch[k];
	for(i=0;i<k;i++)
		cin>>sch[i];

	for(i=0;i<k;i++)
	{
		ll item = sch[i];
		int flag = 1;
		ll mid,beg,end;
		beg=0,end=n-1;
		while(beg<=end)
		{
			mid = (beg+end)/2;
			if(item==arr[mid])
				{
					flag=0;
					cout<<mid<<" ";
					break;
				}
			else if(item>arr[mid])
			{
				beg=mid+1;
			}
			else if(item<arr[mid])
			{
				end = mid-1;
			}
		}
		if(flag==1)
			cout<<-1<<" ";
	}
	return 0;
}