#include <iostream>
int main() {
	int a;
	std::cin >> a;
	if ((a < 12) && (a > 0)) {
		if (a == 1 || a==2 || a==12) std::cout << "WINTER";
		if (a == 3 || a==4 || a==5) std::cout << "SPRING";
		if (a == 6 || a==7 || a==8) std::cout << "SUMMER";
		if (a == 9 || a==10 || a==11) std::cout << "AUTUMN";}
	else std::cout << "Error";
}