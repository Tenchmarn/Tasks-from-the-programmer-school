#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	cout << 2 * (a * b + a * c + b * c) << " " << a * b * c;
	return 0;
}