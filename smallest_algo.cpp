#pragma GCC optimize("Ofast")

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

#define ll long long

using namespace std;


int main()
{
	int n;
	cin >> n;
	vector<int>arr(n);
	ll sum = 0;
	for(int i =0;i<n;i++)
	{
		cin >> arr[i];
		sum += pow(2,arr[i]);
	}
	int ans = log2((sum&-sum));
	cout << ans << endl;
	return 0;
}


