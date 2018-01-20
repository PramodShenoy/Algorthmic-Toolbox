#include <bits/stdc++.h>
#include <cassert>
using namespace std;
int main() {
    int n = 0;
    std::cin >> n;

    int a,b,c;
    a=0;
    b=1;
    if(n==0)
    	cout<<0<<endl;
    else if(n==1)
    	cout<<1<<endl;
    else
    {
    	for(int i=2;i<=n;i++)
    	{
    		c=a+b;
    		a=b;
    		b=c;
    	}
    	cout<<c<<endl;
    }
    return 0;
}
