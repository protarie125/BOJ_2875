#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, m, k;
	cin >> n >> m >> k;

	auto team = n / 2 < m ? n / 2 : m;

	n -= team * 2;
	m -= team;

	while (n + m < k) {
		team -= 1;
		n += 2;
		m += 1;
	}

	cout << team;

	return 0;
}