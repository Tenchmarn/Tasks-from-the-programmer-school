#include <iostream>
using namespace std;

bool cor(string s) {
	if (s.size() != 5) return false;
	if (s[2] != '-') return false;
	if (s[1] < '1' || s[1] > '8') return false;
	if (s[4] < '1' || s[4] > '8') return false;
	if (s[0] < 'A' || s[0] > 'H') return false;
	if (s[3] < 'A' || s[3] > 'H') return false;
	return true;
}

bool step(string s) {
	int x1, y1, x2, y2;
	x1 = s[0] - 'A' + 1;
	x2 = s[3] - 'A' + 1;
	y1 = s[1] - '0';
	y2 = s[4] - '0';
	if (abs(x1 - x2) = 1 && abs(y1 - y2) = 2) return true;
	if (abs(x1 - x2) = 2 && abs(y1 - y2) = 1) return true;
	return false;
]
int main() {
	string s;
	cin >> s;
	if (cor(s)) {
		if (step(s)) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	else {
		cout << "ERROR" << endl;
	}
	return 0;
}