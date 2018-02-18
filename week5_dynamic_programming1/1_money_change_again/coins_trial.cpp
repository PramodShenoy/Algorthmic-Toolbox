#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int m;
	int coins=0;
	cin>>m;
	//4 3 1
	while(m>0)
	{
		if(m%4==0)
		{
			coins+=m/4;
			break;
		}
		else if(m%3==0)
		{
			coins+=m/3;
			break;
		}
		if(m>=4)
		{
			coins+=m/4;
			m=m%4;
		}
		else if(m>=3)
		{
			coins+=m/3;
			m=m%3;
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