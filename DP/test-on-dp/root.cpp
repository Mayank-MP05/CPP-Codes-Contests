#include<bits/stdc++.h>
using namespace std;
void print() {
	cout << "HI";
}
int main() {
#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE
	int t, n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		cout << n*n << endl ;
	}
	return 0;
}