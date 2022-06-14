#include <iostream>
using namespace std;

int main()
{
	int n, max = 0, min = 1001;

	cin >> n;
	for (int i = 0; i < n; i++) 
	{
		int input;
		cin >> input;
		if (max < input)
			max = input;
		if (min > input)
			min = input;
	}

	cout << max - min;

	return 0;
}