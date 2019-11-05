#include <iostream>
#include "Source.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	float r1, r2;
	cin >> r1 >> r2;
	if (r1 > r2) {
		cout << Ring(r1, r2) << endl;
	}
	else cout << "Nope" << endl;
	system("pause");
	return 0;
}

float Ring(float r1, float r2)
{
	r1 = r1 * r1 * 3.14;
	r2 = r2 * r2 * 3.14;
	return r1-r2;
}
