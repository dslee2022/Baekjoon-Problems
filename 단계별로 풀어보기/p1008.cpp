	#include <iostream>

	int main()
	{
		int A, B = 0;
		std::cin >> A >> B;
		std::cout.precision(10);
		std::cout << (double)A / (double)B;
		return 0;
	}