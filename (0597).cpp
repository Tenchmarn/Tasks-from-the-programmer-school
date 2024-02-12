#include <iostream>
using namespace std;
int main() {
	int r1, r2, r3;
	cin >> r1 >> r2 >> r3;
	if ((r1 == r2 && r3) || (r2 == r1 && r3) || (r3 == r1 && r2)) cout << "NO";
	else cout << "YES";
	return 0;
}