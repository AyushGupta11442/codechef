#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i=0;i<n;i++)
			cin >> a[i];
		sort(a.rbegin(),a.rend());
		int min = a[0] - a[1];
		for (int i = 0; i < (n-1); i++)
		{
			int b = a[i] - a[i + 1];
			if (min > b)
				min = b;
		}
		cout << min << endl;

	}
}