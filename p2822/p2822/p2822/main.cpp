#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template<typename T>
std::vector<T> create_copy(std::vector<T> const& vec)
{
	std::vector<T> v(vec);
	return v;
}

struct compare
{
	int key;
	compare(int const& i) : key(i) {}

	bool operator()(int const& i) {
		return (i == key);
	}
};

template<typename T>
int find_index_from_vector(std::vector<T> const& v, int key)
{
	auto itr = std::find_if(v.cbegin(), v.cend(), compare(key));

	if (itr != v.cend()) {
		return std::distance(v.cbegin(), itr);
	}
	else {
		return -1;
	}
}


int main()
{
	vector<int> v{};
	int tmp = 0;
	int result = 0;
	for (int i = 0; i < 8; i++)
	{
		cin >> tmp;
		v.push_back(tmp);
	}

	vector<int> v2 = { v.begin(), v.end() };
	vector<int> prob_num;
	sort(v2.begin(), v2.end(), greater<int>());

	for (int i = 0; i < 5; i++)
		result += v2.at(i);
	cout << result << endl;
	for (int i = 0; i < 5; i++)
	{
		prob_num.push_back(find_index_from_vector(v, v2.at(i)) + 1);
	}
	sort(prob_num.begin(), prob_num.end());
	for (int i = 0; i < prob_num.size(); i++)
		cout << prob_num.at(i) << " ";
	return 0;
}