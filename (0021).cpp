#include <iostream>

using namespace std;

int main()
{

	int a, b, c;
	cin >> a >> b >> c;

	cout << max(a, max(b, c)) - min(a, min(b, c));

	return 0;
}

// MinGW GNU C++ 14.2.0
