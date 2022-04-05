#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	setlocale(0, "");
	int difficult, answer, x, y, count = 0;
	cout << "Мини - игра 'Таблица умножения'" << endl;
	cout << "Введите уровень сложности [1-3]: " << endl;
	cin >> difficult;
	int t = 0;
	while (t != 1) {
		switch (difficult) {
		case(1):
			cout << "Выбранный уровень сложности (1)" << endl;
			for (int i = 0; i < 3; i++) {
				x = rand() % 5 + 1;
				y = rand() % 5 + 1;
				int res = x * y;
				cout << x << "*" << y << "=", cin >> answer;
				if (res == answer) {
					count++;
				}

			}
			t++;
			cout << "Правильных ответов " << count << " из 3!" << endl;
			break;

		case (2):
			cout << "Выбранный уровень сложности (2)" << endl;
			for (int i = 0; i < 5; i++) {
				x = rand() % 7 + 1;
				y = rand() % 7 + 1;
				int res = x * y;
				cout << x << "*" << y << "=", cin >> answer;
				if (res == answer) {
					count++;
				}

			}
			cout << "Правильных ответов " << count << " из 5!" << endl;
			t++;
			break;
		case (3):
			cout << "Выбранный уровень сложности (3)" << endl;
			for (int i = 0; i < 7; i++) {
				x = rand() % 10 + 1;
				y = rand() % 10 + 1;
				int res = x * y;
				cout << x << "*" << y << "=", cin >> answer;
				if (res == answer) {
					count++;
				}

			}
			cout << "Правильных ответов " << count << " из 7! " << endl;
			t++;
			break;
		default:
			cout << "Неправильный ввод сложности!: ";
			cin >> difficult;
			break;
		}



	}
	cout << "Пока, приходи еще!";
	return 0;
}