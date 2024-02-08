#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	a += b -= c;
	if (a < (a + c) && (a > 0)) cout << a;
	else cout << "Impossible";
	return 0;
}