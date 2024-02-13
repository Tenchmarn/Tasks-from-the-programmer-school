#include <iostream>
using namespace std;
int main() {
	float W, H, R;
	cin >> W >> H >> R; R *= 2;
	if ((R<=W)&&(R<=H)) cout << "YES";
	else cout << "NO";
	return 0;
}