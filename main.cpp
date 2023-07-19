#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int hist[1001] = {0};

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;

		hist[a]++;		
	}

	int lim = n / 2 + (n % 2);
	for (int i = 1; i < 1001; i++) {
		if (hist[i] > lim) {
			cout << "NO";
			return 0;
		}
	}

	cout << "YES";
	return 0;
}
