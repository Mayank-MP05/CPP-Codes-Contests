#include<iostream>
using namespace std;

void solve(char* str) {
	cout << str;
}

int main() {
	int t = 1;
	cin >> t;
	char* str;
	while (t--) {
		cin >> str;
		solve(str);
	}

	return 0;
}

