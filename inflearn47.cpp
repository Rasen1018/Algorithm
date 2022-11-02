#include <iostream>
#include <cstdbool>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int dx[4] = { -1, 0, 1, 0 };
	int dy[4] = {0, 1, 0, -1};
	int n, cnt =0;
	bool flag = true;

	cin >> n;
	vector<vector<int>> summit(n+2, vector<int>(n+2));

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> summit[i][j];
		}
	}
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			flag = true;
			for (int k = 0; k <= 3; k++) {
				if (summit[i][j] <= summit[i + dx[k]][j + dy[k]]) {
				flag = false;
				break;
				}
			}
			if (flag) cnt++;
		}
	}
	cout << cnt;
	return 0;
}