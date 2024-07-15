//杭州电子科技大学 -1001

#include<iostream>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		long long sum = 0;
		for (int i = 1; i <= n; i++)
		{
			sum += i;
		}
		cout << sum << endl << endl;
	}
}
