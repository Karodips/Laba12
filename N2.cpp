#include <iostream>
#include "Source.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int a, x, i;
	x = 0;
	for (i = 0; i != 2; i++) {
		cin >> a;
		Sign(a);
		x = x + a;
	}
	cout << x << endl;
	system("pause");
	return 0;
}

void Sign(int &a)
{
	if (a > 0) a = 1;
	else if (a < 0) a = -1;
	else a = 0;
}
