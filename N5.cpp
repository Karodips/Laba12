#include <iostream>
#include "Source.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int i, n, k;
	cin >> n;
	k = 1;
	if (n != 0) {
		Fact2(n, i, k);
	}
	else k = 0;
	cout << k << endl;
	system("pause");
	return 0;
}

void Fact2(int n, int &i, int &k)
{
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
