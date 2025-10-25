#include <iostream>
using namespace std;
 
int totalMoney(int n) {
	int prev_monday = 1;
	int curr_monday = 1;
	int total = 0;
	for (int i = 1; i <= n; i++) {
		total = total + curr_monday;
		curr_monday++;
		if (i % 7 == 0) {
			curr_monday = prev_monday + 1;
			prev_monday = curr_monday;
		}
	}
	return total;
}

int main()
{
	int n;
	cin >> n;
	cout << totalMoney(n) << endl;
	return 0;
}