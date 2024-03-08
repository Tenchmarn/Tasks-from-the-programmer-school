#include <iostream>
using namespace std;
int main() {
	const int S_0 = 4;
	char a1[S_0];
	for (int i = 0; i < S_0; i++) cin >> a1[i];
	if (a1[0] == a1[3] && a1[1] == a1[2]) cout << "YES";
	else cout << "NO";
	return 0;
}