#include <iostream>
#include <cmath>

using namespace std;


int main() {
	int n;
	cin >> n;
	long long bits = 1;
	for (int i = 0; i < n; i++) {
		bits = 2 * bits % ((int)1e9 + 7);
	}
	cout << bits;
	return 0;
}