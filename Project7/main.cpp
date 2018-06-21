#include <iostream>
#include <cstdlib>

int main()
{
	int Q = 1;
	int V = 0;
	while (Q > 0) {
		V = ((rand() % 6) + 1);
		std::cout << ("The value is ");
		std::cout << V << std::endl;
		std::cout << ("1 to continue || 0 to quit") << std::endl;
		std::cin >> Q;
	}
  return 0;
}