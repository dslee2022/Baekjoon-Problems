#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool IsPalindrome(int num)
{
	string num_str = to_string(num);
	string num_str_org = num_str;
	reverse(num_str.begin(), num_str.end());
	if (num_str == num_str_org)
		return true;
	else
		return false;
}

bool IsPrime(int num)
{
	int cnt = 0;

	if (num == 1)
		return false;
	else if (num == 2)
		return true;
	else
		for (int i = 1; i <= num; i++)
		{
			if (num % i == 0)
				cnt++;
		}
	if (cnt == 2)
		return true;
	else
		return false;
}

int solution(int n)
{
	int i = n;
	for(;;)
	{
		if (IsPalindrome(i) && IsPrime(i))
			return i;
		i++;
	}
	return -1;
}

int main()
{
	int n = 0;
	cin >> n;
	cout << solution(n) << endl;
}