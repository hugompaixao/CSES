#include <iostream>

using namespace std;

string pile(long r, long l) {
	if (r == l) {
		if (r == 0) return "YES";
		else if (r % 2 == 0) return "NO";
		else return "YES";
	}
	else {
		if (r == 0 || l == 0) return "NO";
		else if (r - l > 3) return "NO";
		else return "YES";
	}
}


int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		long r, l;
		cin >> r >> l;
		cout << pile(r, l) << endl;
	}
	return 0;
}