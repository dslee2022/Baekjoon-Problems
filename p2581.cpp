#include <iostream>
using namespace std;

int IsDecimal(int n)
{
	int tmp = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			tmp++;
	}
	if (tmp == 2)
		return 1;
	else
		return 0;
}

int main()
{	
	int M, N = 0;
	int sum = 0, min = 0;
	cin >> M >> N;
	for (int i = M; i <= N; i++)
	{
		if (IsDecimal(i))
		{
			if (min == 0)
				min = i;
			sum += i;
		}
	}
	if (sum != 0 && min != 0)
		cout << sum << endl << min;	
	else
		cout << "-1";
	return 0;
}