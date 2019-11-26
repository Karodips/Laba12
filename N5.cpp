#include <iostream>

using namespace std;

int Fact2(int n);

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	cin >> n;
	if (n != 0) {
		cout << Fact2(n) << endl;
	}
	//cout << Fa << endl;
	system("pause");
	return 0;
}

int Fact2(int n)
{
	int k=1;

	for (
		int i = (n % 2 == 1)?1:2;
		i <= n;
		i += 2
		) 
	{
		k = k * i;
	}

	return k;
}
