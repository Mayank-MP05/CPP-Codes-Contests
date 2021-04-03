#include<bits/stdc++.h>
using namespace std;

int main() {
	long long x, r, n;
	cin >> x >> r >> n;
	cout << x + (r * (n - 1));
	return 0;
}

answer = intialEnergy + (rate * (timeN - 1));

-------------------------------------- -
answer.size = salesRecord.row;
answer.data = malloc(  salesRecord.row * sizeof( int ) )
for (int i = 0 ; i < salesRecord.row ; i++ ) {
	int mx = INT_MIN;
	for (int j = 0 ; j < salesRecord.col ; j++ ) {
		if (salesRecord.data[i][j] > mx) {
			mx = salesRecord.data[i][j];
		}
	}
	answer.data[i] = mx;
}


-------------------------------------- -
int i = 0;

while (true) {
	if (stringSent.str[i] == stringRec.str[i]) {
		i++;
	} else {
		answer = stringSent.str[i];
		break;
	}
}