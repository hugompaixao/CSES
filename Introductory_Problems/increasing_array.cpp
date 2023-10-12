#include <iostream>
 
using namespace std;
 
int main () {
	int size;
	cin >> size;
	long moves = 0;
	long a;
	cin >> a;
	for (int i = 1; i < size; i++) {
		long b;
		cin >> b;
		if (b < a) {
			long tmp = a - b;
			b = b + tmp;
			moves += tmp;
		}
		a = b;
	}
	cout << moves;
	return 0;
