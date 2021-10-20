#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		double d, u;
		int n;
		cin >> d >> u >> n;
		int plan_id = 0;
		// calculate the total Rokdas using the default plan
		double best_plan = d * u;
		for (int i = 0; i < n; i++) {
			double m, r, c;
			cin >> m >> r >> c;
			// calculate the total Rokdas using the current plan: 'r[i] * [u]'
			// at the end of every 'm' months, we need to pay the cost of the plan so,
			// every month we need to pay: 'c / m' Rokdas (cost)
			// to get the total Rokdas for a single month using the current plan:
			// total Rokdas using the current plan in a single month plus cost of the plan in a single month
			double current_plan = (c / m) + (r * u);
			if (current_plan < best_plan) {
				best_plan = current_plan;
				plan_id = i + 1;
			}
		}
		cout << plan_id << '\n';
	}
	return 0;
}
