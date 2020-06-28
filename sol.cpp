#include <bits/stdc++.h>

using namespace std;

typedef long long ll; 

void decode() {
	int s, v1, v2, t1, t2;
	cin >> s >> v1 >> v2 >> t1 >> t2;
	int tmp = 2 * t1 + v1 * s;
	int tmp2 = 2 * t2 + v2 * s;
	if(tmp < tmp2) cout << "First";
	else if(tmp > tmp2) cout << "Second";
	else cout << "Friendship";
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	decode();
	return 0;
}
