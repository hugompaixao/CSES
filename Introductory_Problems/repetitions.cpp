#include <iostream>

using namespace std;

int main () {
	string dna;
	cin >> dna;
	char current = dna[0];
	int max = 0, count = 0;
	for (char c : dna) {
		if (current == c) {
			count++;
			max = std::max(count, max);
		} else {
			current = c;
			count = 1;
		}
	}
	cout << max;
  	return 0;
}
