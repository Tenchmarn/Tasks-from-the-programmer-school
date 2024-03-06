#include <iostream>
using namespace std;
int main() {
	string a1 = "qwertyuiopasdfghjklzxcvbnmq";
	char C_0; cin >> C_0;
	cout << a1[a1.find(C_0) + 1];
	return 0;
}