#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<bool>p(n,true);
	vector<int>ans;
	for(int i = 3;i<n;i += 2)
	{
		if(p[i])
		{
			ans.push_back(i);
			for(int j = i*2;j<n;j += i)
				p[i] = false;
		}
	}
	for(int i = 0;i<ans.size();i++)
		cout << ans[i] << ' ';
	cout << endl;
	return 0;
}
