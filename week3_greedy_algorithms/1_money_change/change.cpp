#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int m;
	int coins=0;
	cin>>m;
	//1 5 10
	while(m>0)
	{
		if(m>=10)
		{
			coins+=m/10;
			m=m%10;
		}
		else if(m>=5)
		{
			coins+=m/5;
			m=m%5;
		}
		else if(m>=1)
		{
			coins+=m;
			m=0;
			break;
		}
	}
	cout<<coins<<endl;
	return 0;
}