#include <bits/stdc++.h>
using namespace std;
#define ll long long 
ll merge(ll arr[], ll l, ll m, ll r)
{
    ll i, j, k;
    ll pairs =0;
    ll n1 = m - l + 1;
    ll n2 =  r - m;
    ll left[n1], right[n2];
    for (i = 0; i < n1; i++)
        left[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        right[j] = arr[m + 1+ j];
 
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else if(left[i]>right[j])
        {
          pairs++;
          //pairs+=(m-i);
            arr[k] = right[j];
            j++;
        }
        k++;
    }
 
    while (i < n1)
    {
        arr[k] = left[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
    return pairs;
}
 
ll mergeSort(ll arr[], ll l, ll r)
{
  ll pairs=0;
    if (l < r)
    {
        
        ll m = l+(r-l)/2;
        pairs+=mergeSort(arr, l, m);
        pairs+=mergeSort(arr, m+1, r);
        pairs+= merge(arr, l, m, r);
        cout<<pairs<<endl;
    }
    return pairs;
}

int main()
{
  ll i,j,n;
  cin>>n;
  ll arr[n];
  for(i=0;i<n;i++)
    cin>>arr[i];
  mergeSort(arr,0,n-1);
  return 0;
}