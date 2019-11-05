#include <iostream>
#include "Source.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int a, x, b;
	x = 0;
		cin >> a;
		cin >> b;
		x= Sign(a)+ Sign(b);

	cout << x << endl;
	system("pause");
	return 0;
}

int Sign(int a)
{
	if (a > 0) return 1;
	else if (a < 0) return -1;
	else return 0;
}
