#include <iostream>
#include <vector>
using namespace std;

bool balanced(int num, vector<int>& digit) {
	fill(digit.begin(), digit.end(), 0); // reset counts for each call
	int temp = num;
	while (temp) {
		digit[temp % 10]++;
		temp /= 10;
	}
	for (int i = 0; i <= 9; ++i) {
		if (digit[i] != 0 && digit[i] != i) {
			return false;
		}
	}
	return true;
}

int nextBeautifulNumber(int n) {
	vector<int> digit(10, 0);
	for (int i = n + 1; i <= 1224444; ++i) {
		if (balanced(i, digit)) {
			return i;
		}
	}
	return -1; // explicit fallback return so all control paths return a value
}

int main() {
	int n;
	cin >> n;
	cout << nextBeautifulNumber(n) << endl;
	return 0;
}