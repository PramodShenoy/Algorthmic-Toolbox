#include <bits/stdc++.h>
#define ll long long
ll gcd(ll x,ll y)
{
    if (x == 0)
        return y;
if(y==0)
return x;
    return gcd(y%x, x);
}
using namespace std;
int main() {
    ll a,b;
    cin>>a>>b;
    ll prod = a*b;
    ll l = prod/(gcd(a,b));
    cout<<l<<endl;
    return 0;
}
