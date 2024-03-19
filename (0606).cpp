#include <iostream>
using namespace std;
int main() {
	int X, Y, Z;
	cin >> X >> Y >> Z;
	if (X <= Y + Z && Y <= X + Z && Z <= Y + X) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}