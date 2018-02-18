#include <bits/stdc++.h>
using namespace std;
int min(int a,int b,int c)
{
	if(a<=b && a<=c)
		return a;
	else if(b<=a && b<=c)
		return b;
	else if(c<=a && c<=b)
		return c;
}
int edit_distance(const string &str1, const string &str2) 
{
	int m =str1.length();
	int n = str2.length();
	int table[m+1][n+1];
	int i,j;
	for(i=0;i<=n;i++)
		table[0][i]=i;
	for(i=0;i<=m;i++)
		table[i][0]=i;
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(str1[i-1]!=str2[j-1])
			{
				table[i][j]=1+min(table[i-1][j],table[i][j-1],table[i-1][j-1]);
			}
			else
			{
				table[i][j]=table[i-1][j-1];
			}

		}
	}
  return table[m][n];
}

int main() 
{
  string str1;
  string str2;
  std::cin >> str1 >> str2;
  std::cout << edit_distance(str1, str2) << std::endl;
  return 0;
}
