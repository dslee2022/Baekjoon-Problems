#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector <int> v{};
	int N = 0;
	cin >> N;
	for (int i = 0; i < N; i++)\
	{
		int tmp = 0;
		scanf("%d", &tmp);
		v.push_back(tmp);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++)
		printf("%d\n", v.at(i));
	return 0;
}