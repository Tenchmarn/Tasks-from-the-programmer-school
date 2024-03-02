#include <iostream>
using namespace std;
int main() {
	int C, H, O;
	cin >> C >> H >> O;
	C /= 2;
	H /= 6;
	cout << min(C, min(H, O));

	return 0;
}