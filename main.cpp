#include<iostream>
using namespace std;


void main() {
	setlocale(LC_ALL, "rus");

	cout << "������� 6. �������." << endl;
	cout << "--------------------------------" << endl << endl;

	float ampl, stop, damp = 8.4;
	int res;

	while (true) {
		cout << "������� ��������� ��������� ��������: ";
		cin >> ampl;

		cout << "������� ���������, ������� ����� ��������� ���������� ��������: ";
		cin >> stop;

		if (ampl == 0 && stop == 0) {
			res = 0;
			break;
		}
		else if (ampl < 0 || stop < 0 || ampl < stop) {
			cout << "������. ����� ��������� ������ ���� �� ������ ����, � �������� ��������� ������ ���� ������ ���������." << endl;
			cout << "��������� �������." << endl;
		}
		else if (ampl > 0 && stop == 0 && ampl > stop) {
			cout << "� ����� ������. �������� ��������� ������ ���� ������ 0. ����� ������� ����� �������� �����." << endl;
			cout << "��������� �������." << endl;
		}
		else {
			break;
		}
	}

	




	for (int i = 0; ampl > stop; ++i) {
		ampl = ampl - (ampl / 100 * damp);
		res = i;
	}

	cout << "������� �������� " << res << " ���(�)." << endl;

}