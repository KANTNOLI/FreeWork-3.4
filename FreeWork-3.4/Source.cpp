#include <iostream>
#include <string>

using namespace std;

//���� ����� ����� K(> 0) � ������������� ������ ������� N.�������� �������
//��������� ����� ������� � ��� ����� � ������� K.���� ����� � ������� ������
//K, �� ������� ������ ��� ���������.

int main() {
	setlocale(LC_ALL, "RUS");
	int input, size;
	string msg = "������ ��: ";
	do {
		cout << "������� ����� �����, ������� ������ ����: ";
		cin >> input;
	} while (input <= 0);
	input -= 1;

	cout << "������� ������ �������: ";
	cin >> size;

	int* vector = new int[size];

	cout << "������� ������ �������: ";
	for (int i = 0; i < size; i++) {
		cin >> vector[i];
	}

	system("cls");

	for (int i = 0; i < size; i++)
	{
		msg += to_string(vector[i]) + " ";
	}

	msg += "\n";


	if (input <= size) {
		vector[input] = (input + 1);
	}

	msg += "������ �����: ";
	for (int i = 0; i < size; i++)
	{
		msg += to_string(vector[i]) + " ";
	}

	cout << msg << endl;

	return 0;
}