#include <iostream>
#include <string>
using namespace std;
int main() {
	int a1, a2;
	string amrt;
	cin >> a1 >> a2;
	cin >> amrt;
	if(amrt == "freeze")cout << min(a1, a2) << endl;
	if(amrt == "heat")cout << max(a1, a2) << endl;
	if(amrt == "auto")cout << a2 << endl;
	if(amrt == "fan")cout << a1 << endl;
	return 0;
}