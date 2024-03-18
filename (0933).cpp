#include <iostream>
using namespace std;
int main() {
	int A, B, C, T, sum;
	cin >> A >> B >> C >> T;
	if (A < T) {
		sum = B * A;
		T -= A;
		sum += T * C;
		cout << sum;
	}
	else cout << T * B;
	return 0;
}