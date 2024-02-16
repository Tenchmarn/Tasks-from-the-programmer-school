#include <iostream>
using namespace std;
int main() {
	int M_1, M_2, M_3;
	cin >> M_1 >> M_2 >> M_3;
	int min = M_1, max = M_1;
	if (M_2 < min) min = M_2;
	if (M_3 < min) min = M_3;
	if (M_2 > max) max = M_2;
	if (M_3 > max) max = M_3;
	if ((max > 94) && (max < 727)) cout << max;
	else  cout << "Error";

	return 0;
}