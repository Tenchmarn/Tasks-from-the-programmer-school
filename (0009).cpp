#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int A_1;
	cin >> A_1;
	int *arr = new int[A_1];
	int sum_Pos = 0, TP_0 = 1, max_Ind = 0, min_Ind = 0;
	for (int i = 0; i < A_1; i++) {
		cin >> arr[i];
		if (arr[i] > 0) sum_Pos += arr[i];
		if (arr[i] > arr[max_Ind]) max_Ind = i;
		if (arr[i] < arr[min_Ind]) min_Ind = i;
	}
	for (int i = fmin(min_Ind, max_Ind); i < fmax(min_Ind, max_Ind); i++) {
		TP_0 *= arr[i];
	}
	cout << sum_Pos << " " << TP_0 << endl;
	return 0;
}