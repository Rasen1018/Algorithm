/*
���� �빮�ڸ� �Է¹޴ٰ� �빮�� �̿��� ���ڰ� �ԷµǸ� �Է��� �ߴ��ϰ�

���� �빮�ڵ鿡 ���Ͽ� 1�� �̻� �Էµ� �� ���ڿ� �� ������ ������ ���� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�ԷµǴ� ������ ������ 2�� �̻� 100�� �����̴�.

A B C F F F B Z !
*/

#include <vector>
#include <set>
#include <string>
#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	string a = "";
	multiset<string> alpha;
	while (a != "!") {
		cin >> a;
		alpha.insert(a);
	}

	int i = 0;
	for (multiset<string>::iterator itr = alpha.begin(); itr != alpha.end(); itr++) {
		cout << *itr << " : " << i << endl;
	}

#if 0
#if 0
	for (vector<string>::size_type i = 0; i < alpha.size()-1; i++) {
		cout << alpha.at(i) << " : " << i << endl;
	}
#else
	for (const auto& i : alpha) {
		cout << i << " : " << endl;
	}
#endif
	for (vector<string>::iterator itr = alpha.begin(); itr != alpha.end()-1; itr++) {
		cout << *itr << " : " << endl;
	}
#endif
}
