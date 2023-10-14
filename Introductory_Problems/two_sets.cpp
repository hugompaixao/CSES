#include <iostream>

using namespace std;

void print(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}

int main() {
	int n;
	cin >> n;
	if (n < 2) {
		cout << "NO";
		return 0;
	}
	int a[n];
	int b[n];
	int sum_a = 0;
	int sum_b = 0;
	int aa = 0;
	int bb = 0;
	for (int i = n; i > 1; i--) {
		if (i % 2 == 0) {
			a[aa++] = i;
			sum_a += i;
		}
		else {
			b[bb++] = i;
			sum_b += i;
		}
	}
	if (sum_a > sum_b) {
		b[bb++] = 1;
	}
	else {
		a[aa++] = 1;
	}
	if (sum_a == sum_b) {
		if (n % 2 == 0) {
			cout << "YES" << endl;
			cout << sum_a << endl;
			print(a, aa);
			cout << endl << sum_b << endl;
			print(b, bb);
		}
		else {
			cout << "YES" << endl;
			cout << sum_b << endl;
			print(b, bb);
			cout << endl << sum_a << endl;
			print(a, aa);
		}
	}
	else {
		cout << "NO";
	}

	return 0;
}
