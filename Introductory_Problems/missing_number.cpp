#include <iostream>

using namespace std;

int main () {
	long n;
	cin >> n;
	long sum = 0;
	for (int i = 0; i < n-1; i++) {
		int x;
		cin >> x;
		sum += x;
	}
	cout << ((n * (n+1))/2) - sum;
  	return 0;
}
