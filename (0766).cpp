#include <iostream>
using namespace std;
int main() {
	int N, M, K;
	cin >> N >> M >> K;
	N *= M;
	if (N >= K)cout << "YES";
	if (N < K) cout << "NO";
	return 0;
}