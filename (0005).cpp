#include <iostream>
using namespace std;
int main() {
	int arrEER;
	cin >> arrEER;
	int* arr = new int[arrEER];
	int p = 0, r = 0;
	for (int i = 0; i < arrEER; i++) 
	{
		cin >> arr[i];
	}
	cout << endl;
	for (int i = 0; i < arrEER; i++) 
	{
		if (arr[i] % 2 == 1) 
		{
			cout << "\t" << arr[i];
			r++;
		}
	}
	cout << endl;
	for (int i = 0; i < arrEER; i++) 
	{
		if (arr[i]%2 == 0) 
		{
			cout << "\t" << arr[i];
			p++;
		}
	}
	cout << endl;
	if (p > r) {
		cout << endl << "\tYES";
	}
	else {
		cout << "\tNO";
	}
	return 0;
}