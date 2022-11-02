#include <iostream>
#include <cstdbool>
#include <algorithm>
#include <vector>

/*
11 12 2 24 10
16 1 13 3 25
6 20 5 21 17
19 4 8 14 9
22 15 7 23 18
5 10 7 16 2
4 22 8 17 13
3 18 1 6 25
12 19 23 14 21
11 24 9 20 15
*/

void correct(int num, int&);

using namespace std;
vector<vector<int>> bingo(5, vector<int>(5));
bool flag = false;		// 3줄 빙고되면 true

int main()
{
	vector<vector<int>> answer(5, vector<int>(5));
	vector<int> mc_num;
	int cnt = 0;
	// 빙고판 입력
	for (int i=0; i <= 4; i++) {
		for (int j = 0; j <= 4; j++) {
			cin >> bingo[i][j];
		}
	}
	// 사회자 숫자 비교
	for (int i = 0; i <= 4; i++) {
		for (int j = 0; j <= 4; j++) {
			cin >> answer[i][j];

			if (flag == true) break;
			correct(answer[i][j], cnt);		// 숫자 하나당 빙고판과 비교하는 함수
		}
		if (flag == true) break;
	}
	cout << endl;
	for (int i = 0; i <= 4; i++) {
		for (int j = 0; j <= 4; j++) {
			cout << bingo[i][j] << " ";
		}
		cout << endl;
	}

	cout << cnt;

	return 0;
}

void correct(int num, int& cnt) {
	int dx = 0, dy = 0, dp = 0, dm = 0;		// 네 방향

		for (int i = 0; i <= 4; i++) {
			for (int j = 0; j <= 4; j++) {
				if (num == bingo[i][j]) {
					bingo[i][j] = 0;
				}
				dx += bingo[i][j];		// 가로
				dy += bingo[j][i];		// 세로
				dp += bingo[j][j];		// 윗 대각선
				dm += bingo[j][4 - j];	// 아래 대각선
			}
			cnt = 0;
			if (dx == 0) cnt++;	// 가로 빙고 
			if (dy == 0) cnt++;	// 세로 빙고
			if (dp == 0) cnt++; // 윗 대각선 빙고
			if (dm == 0) cnt++; // 아래 대각선 빙고

			dx = 0, dy = 0, dp = 0, dm = 0;
		}
		if (cnt >= 3) flag = true;
}