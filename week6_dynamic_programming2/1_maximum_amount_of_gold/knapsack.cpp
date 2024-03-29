#include <bits/stdc++.h>
using namespace std;
int max(int a, int b) { return (a > b)? a : b; }
 
int knapSack(int W, int wt[], int val[], int n)
{
   int i, w;
   int K[n+1][W+1];
    std::vector<int> v;
   for (i = 0; i <= n; i++)
   {
       for (w = 0; w <= W; w++)
       {
           if (i==0 || w==0)
               K[i][w] = 0;
           else if (wt[i-1] <= w)
                 {
                  K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);
                  v.push_back(wt[i-1]);
                }
           else
                {
            K[i][w] = K[i-1][w];
            //v.push_back(wt[w]);
          }
       }
   }
  for(auto itr = v.begin();itr!=v.end();itr++)
    cout<<*itr<<" ";
  cout<<endl;
   return K[n][W];
}
int main() 
{
  int capacity,n;
  cin>>capacity>>n;
  int wt[n];
  int val[n];
  for(int i=0;i<n;i++)
    {
      cin>>wt[i];
      val[i]=1;
    }
  cout << knapSack(capacity,wt,val,n) << '\n';
}