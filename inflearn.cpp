#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int height, width, h, w;
int map[101][101] = { 0 };

void check() {
	int max = -1;
	int area = 0, maxArea = 0;
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			if (max <= map[i][j]) max = map[i][j];
		}
	}
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			if (max == map[i][j]) {
				area = 0;
				for (int x = 0; x < h; x++) {
					for (int y = 0; y < w; y++) {
						area += map[i + x][j + y];
					}
				} // 영지 하사 끝
				if (maxArea <= area)
					maxArea = area;
			} // max if 문

		} // j for문
	}
	cout << maxArea;
}


int main() {

	cin >> height >> width;

	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			cin >> map[i][j];
		}
	}

	cin >> h >> w;

	check();

	return 0;

}

/*
6 7
3 5 1 3 1 3 2
1 2 1 3 1 1 2
1 3 1 5 1 3 4
5 1 1 3 1 3 2
3 1 1 3 1 1 2
1 3 1 3 1 2 2
2 3
*/