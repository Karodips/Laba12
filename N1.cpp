
#include <iostream>
#include "Source.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int a, b, i;
	for (i = 1; i <= 5; i++) {
		cin >> a;
		PowerA3(b, a);
		cout << b << endl;
	}
	cout << endl;
	system("pause");
	return 0;
}

void PowerA3(int &b, int a)
{
	b = a * a * a;
}
