#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	string str;
	cin >> str;
	int az[26] = {};
	int count = 0;
	for (char c : str) {
		++az[c - 'A'];
	}
	for (int i = 0; i < 26; ++i) {
		count += az[i] & 1;
	}
	if (count > 1) {
		cout << "NO SOLUTION" << endl;
		return 0;
	}
	string str1;
	for (int i = 0; i < 26; ++i) {
		if (az[i] & 1 ^ 1) {
			for (int j = 0; j < az[i] / 2; ++j) {
				str1 += (char)('A' + i);
			}
		}
	}
	cout << str1;
	for (int i = 0; i < 26; ++i) {
		if (az[i] & 1) {
			for (int j = 0; j < az[i]; ++j) {
				cout << (char)('A' + i);
			}
		}
	}
	reverse(str1.begin(), str1.end());
	cout << str1;
	return 0;
}