#include <iostream>
using namespace std;
int main() {
	int L, W, H, S, A=16;
	cin >> L >> W >> H;
	S = 2 * H * (W + L);
	if ((S % 16) == 0) { cout << S / 16; }
	else cout << (S / 16) + 1;
	return 0;
}