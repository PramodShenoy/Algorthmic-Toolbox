#include <bits/stdc++.h>
using namespace std;
#define ll long long
using std::vector;
using std::cin;
using std::cout;

int MaxPairwiseProduct(const vector<int>& numbers) {
  int result = 0;
  int n = numbers.size();
  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; ++j) {
      if (numbers[i] * numbers[j] > result) {
        result = numbers[i] * numbers[j];
      }
    }
  }
  return result;
}

int main() {
    ll n;
    cin >> n;
    vector<ll> numbers(n);
    for (ll i = 0; i < n; ++i) {
        cin >> numbers[i];
    }
	
    //int result = MaxPairwiseProduct(numbers);
sort(numbers.begin(),numbers.end(),greater<ll>());
ll res = numbers[0]*numbers[1];
    cout << res << "\n";
    return 0;
}
