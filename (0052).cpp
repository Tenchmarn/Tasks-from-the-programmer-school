#include <iostream>
#include <string>
using namespace std;
int main() {
	string a1;
	int sum1=0, sum2=0;
	cin >> a1;
	for (int i = 0; i < 3; i++) {
		sum1 += a1[i] - '0';
	}
	for (int j = 3; j < 6; j++) {
		sum2 += a1[j] - '0';
	}
	if (sum1 == sum2) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}