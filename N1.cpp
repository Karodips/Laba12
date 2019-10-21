#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int a, b, i;
	for (i = 1; i <= 5; i++) {
		cin >> a;
		b = a * a * a;
		cout << b << endl;
	}
	cout << endl;
	system("pause");
	return 0;
}
