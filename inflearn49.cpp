#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int n, input, sum=0;
	cin >> n;
	vector<vector<int>> front(n, vector<int>(n));
	vector<int> right(n);

	for (int i = 0; i < n; i++) {
		cin >> input;
		for (int j = 0; j < n; j++) {
			front[j][i] = input;
		}
	}
	for (int i = 0; i < n; i++) {
		cin >> right[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (right[i] < front[i][j])
				front[i][j] = right[i];
			sum += front[i][j];
		}
	}
	cout << sum;

	return 0;
}