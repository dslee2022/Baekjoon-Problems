#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n = 0;
	double avg = 0;
	double sum = 0;
	vector <int> v{};
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	vector<int>::iterator it = max_element(v.begin(), v.end());
	int max = *it;

	for (int i = 0; i < n; i++)
	{
		float tmp = (float)v.at(i) / (float)max * 100.f;
		sum += tmp;
	}
	avg = sum / n;
	cout << avg;
	return 0;
}