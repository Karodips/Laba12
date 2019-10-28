#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int i, n, k;
	cin >> n;
	k = 1;
	if (n != 0) {
		if (n % 2 == 1) {
			for (i = 1; i <= n; i += 2) {
				k = k * i;
			}
		}
		else {
			for (i = 2; i <= n; i += 2) {
				k = k * i;
			}
		}
	}
	else k = 0;
	cout << k << endl;
	system("pause");
	return 0;
}
