#include <iostream>
int main() {
	int a1, a2;
	std::cin >> a1 >> a2;
	std::cout << a1 * (a2 - 1) + a2 * (a1 - 1) - (a2 * a1 - 1);
	return 0;
}