#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int i, x, y;
	for (i = 0; i < 3; i++) {
		cin >> x >> y;
		if (x > 0 && y > 0) cout << "Первая четверть\n";
		else if (x < 0 && y > 0) cout << "Вторая четверть\n";
		else if (x < 0 && y < 0) cout << "Третья четверть\n";
		else if (x > 0 && y < 0) cout << "Четвёртая четверть\n";
		else cout << "Nope\n";

	}
	system("pause");
	return 0;
}
