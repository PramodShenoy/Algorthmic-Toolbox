// C++ program for 3-way quick sort
#include <bits/stdc++.h>
using namespace std;
 #define ll long long
/* This function partitions a[] in three parts
   a) a[l..i] contains all elements smaller than pivot
   b) a[i+1..j-1] contains all occurrences of pivot
   c) a[j..r] contains all elements greater than pivot */
void partition(ll a[], ll l, ll r, ll &i, ll &j)
{
    i = l-1, j = r;
    ll p = l-1, q = r;
    ll v = a[r];
 
    while (true)
    {
        // From left, find the first element greater than
        // or equal to v. This loop will definitely terminate
        // as v is last element
        while (a[++i] < v);
 
        // From right, find the first element smaller than or
        // equal to v
        while (v < a[--j])
            if (j == l)
                break;
 
        // If i and j cross, then we are done
        if (i >= j) break;
 
        // Swap, so that smaller goes on left greater goes on right
        swap(a[i], a[j]);
 
        // Move all same left occurrence of pivot to beginning of
        // array and keep count using p
        if (a[i] == v)
        {
            p++;
            swap(a[p], a[i]);
        }
 
        // Move all same right occurrence of pivot to end of array
        // and keep count using q
        if (a[j] == v)
        {
            q--;
            swap(a[j], a[q]);
        }
    }
 
    // Move pivot element to its correct index
    swap(a[i], a[r]);
 
    // Move all left same occurrences from beginning
    // to adjacent to arr[i]
    j = i-1;
    for (ll k = l; k < p; k++, j--)
        swap(a[k], a[j]);
 
    // Move all right same occurrences from end
    // to adjacent to arr[i]
    i = i+1;
    for (ll k = r-1; k > q; k--, i++)
        swap(a[i], a[k]);
}
 
// 3-way partition based quick sort
void quicksort(ll a[], ll l, ll r)
{
    if (r <= l) return;
 
    ll i, j;
 
    // Note that i and j are passed as reference
    partition(a, l, r, i, j);
 
    // Recur
    quicksort(a, l, j);
    quicksort(a, i, r);
}
 
void printarr(ll a[], ll n)
{
    for (ll i = 0; i < n; ++i)
        cout<<a[i]<<" ";
    cout<<endl;
}
 
int main()
{
    ll size,i;
    cin>>size;
    ll a[size];
    for(i=0;i<size;i++)
    	cin>>a[i];
    quicksort(a, 0, size - 1);
    printarr(a, size);
    return 0;
}