#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

#define ll long long

using namespace std;

int main()
{
	string s = "";
	string t = "";
	cout << "s = ?" << endl;
	cin >> s;
	cout << "t = ?" << endl;
	cin >> t;
	vector<int>arr(t.length());	// create kmp failure 
	arr[0] = -1; // set a initliaze point
	int j = -1;	// set a tracking pointer
	for(int i = 1;i<t.length();i++)
	{
		while(j >= 0 && t[i-1] != t[j])	
			j = arr[j];
		j += 1;
		arr[i] = j;
	}
	j = 0;	// reset j 
	for(int i = 0;i<s.length();i++)
	{
		while(j >=0 && s[i] != t[j])
			j = arr[j];
		j += 1;
		if(j == t.length())
		{
			cout << (i-t.length()+1) << endl;
			break;
		}
	}
}
