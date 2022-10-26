#include <iostream>

int main()
{

	int N = 0;
	int result = 0;
	std::cin >> N;
	int* input = new int[N];
	for (int i = 0; i < N; i++)
		std::cin >> input[i];
	for (int i = 0; i < N; i++)
	{
		int tmp = 0;
		for (int j = 1; j <= input[i]; j++)
		{
			if (input[i] % j == 0)
				tmp++;
		}
		if (tmp == 2)
			result++;
	}
	std::cout << result << std::endl;
	delete input;
	return 0;
}