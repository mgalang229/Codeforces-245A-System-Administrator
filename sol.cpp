#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> t(n), x(n), y(n);
	for (int i = 0; i < n; i++) {
		cin >> t[i] >> x[i] >> y[i];
	}
	// create 2-arrays one for the server (half) and packets (full)
	// index 0 = ping a
	// index 1 = ping b
	vector<int> server(2, 2), packets(2, 2);
	for (int i = 0; i < n; i++) {
		// add the corresponding x packets (half packets) to the server
		server[t[i] - 1] += x[i];
		// add the total packets that the server have
		packets[t[i] - 1] += (x[i] + y[i]);
	}
	for (int i = 0; i < 2; i++) {
		// check if the total packets in a server is at least half the
		// packets that it should have
		cout << (server[i] >= packets[i] / 2 ? "LIVE" : "DEAD") << '\n';
	}
	return 0;
}
