#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	string input = "";
	cin >> input;
	
	//formula....
	int ans = (int)input.length() / (input + input).find(input,1);
	// ans will be how many time of substring pattern repeated;
	// so if the ans is 1 that's mean no repeated...
	
	bool output = ans <= 1?false:true;
	cout << output << endl;
	return 0;
}

