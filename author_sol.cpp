#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int a_reached = 0;
	int a_lost = 0;
	int b_reached = 0;
	int b_lost = 0;
	for (int i = 1; i <= n; i++) {
		int t, x, y;
		cin >> t >> x >> y;
		if (t == 1) {
			a_reached += x;
			a_lost += y;
		} else {
			b_reached += x;
			b_lost += y;
		}
	}
	cout << (a_reached >= a_lost ? "LIVE" : "DEAD") << '\n';
	cout << (b_reached >= b_lost ? "LIVE" : "DEAD") << '\n';
	return 0;
}
