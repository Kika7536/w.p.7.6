#include<iostream>
using namespace std;


void main() {
	setlocale(LC_ALL, "rus");

	cout << "Задание 6. Маятник." << endl;
	cout << "--------------------------------" << endl << endl;

	float ampl, stop, damp = 8.4;
	int res;

	while (true) {
		cout << "Ввежите амплитуду колебания маятника: ";
		cin >> ampl;

		cout << "Введите амплитуду, которая будет считаться остановкой маятника: ";
		cin >> stop;

		if (ampl == 0 && stop == 0) {
			res = 0;
			break;
		}
		else if (ampl < 0 || stop < 0 || ampl < stop) {
			cout << "Ошибка. Любая амплитуда должна быть не меньше нуля, а конечная амплитуда должна быть меньше стартовой." << endl;
			cout << "Повторите попытку." << endl;
		}
		else if (ampl > 0 && stop == 0 && ampl > stop) {
			cout << "В целом ошибка. Конечная амплитуда должна быть больше 0. Иначе маятник будет качаться вечно." << endl;
			cout << "Повторите попытку." << endl;
		}
		else {
			break;
		}
	}

	




	for (int i = 0; ampl > stop; ++i) {
		ampl = ampl - (ampl / 100 * damp);
		res = i;
	}

	cout << "Маятник качнется " << res << " раз(а)." << endl;

}