#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n = 9, num;
	vector<vector<int>> avg(n, vector<int>(n));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> avg[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		int sum = 0, min=101;
		for (int j = 0; j < n; j++) {
			sum += avg[i][j];
		}

		for (int j = 0; j < n; j++) {
			double mean = round(sum) / n;

			if (abs(mean - avg[i][j]) < min) {
				min = abs(mean - avg[i][j]);
				num = avg[i][j];
			}
			else if (abs(mean - avg[i][j]) == min) {
				if (avg[i][j] > num)
					num = avg[i][j];
			}
		}
		printf("%.f %d\n", round(sum) / n, num);
	}

	return 0;
}