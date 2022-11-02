/*
영문 대문자를 입력받다가 대문자 이외의 문자가 입력되면 입력을 중단하고

영문 대문자들에 대하여 1번 이상 입력된 각 문자와 그 문자의 개수를 사전 순으로 출력하는 프로그램을 작성하시오.

입력되는 문자의 개수는 2개 이상 100개 이하이다.

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
