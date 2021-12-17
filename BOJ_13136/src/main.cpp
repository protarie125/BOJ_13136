#include <iostream>
#include <cmath>

using namespace std;

using ll = long long;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	ll r, c, n;
	cin >> r >> c >> n;

	auto rc = (r / n) + ((0 != r % n) ? 1 : 0);
	auto cc = (c / n) + ((0 != c % n) ? 1 : 0);

	cout << rc * cc;

	return 0;
}