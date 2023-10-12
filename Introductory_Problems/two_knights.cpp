#include <iostream>

using namespace std;

long long ways (int n) {
	long long p = n*n;
	long long all = (p*(p-1)) / 2;
	long long attack = 4*(n-1)*(n-2);
	return all - attack;
}

int main () {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cout << ways(i) << endl;
	}
	return 0;
}