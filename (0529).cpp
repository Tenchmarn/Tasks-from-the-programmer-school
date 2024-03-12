#include <iostream>
using namespace std;
double my_sqrt(double);
int main() {
	int x1, x2, y1, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	cout << my_sqrt(((x2 - x1) * (x2 - x1))+((y2 - y1) * (y2 - y1)));
	return 0;
}
double my_sqrt(double x) {
    if (x < 0) {
        return NAN;
    }
    double left = 0, right = x + 1;
    for (int i = 0; i < 1000; i++) {
        double middle = (left + right) / 2;
        if (middle * middle < x) {
            left = middle;
        }
        else {
            right = middle;
        }
    }

    return left;
}