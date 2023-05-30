#include <iostream>
#include <string>

using namespace std;

//Дано целое число K(> 0) и целочисленный массив размера N.Поменять местами
//последнюю серию массива и его серию с номером K.Если серий в массиве меньше
//K, то вывести массив без изменений.

int main() {
	setlocale(LC_ALL, "RUS");
	int input, size;
	string msg = "Массив до: ";
	do {
		cout << "Введите целое число, которое больше нуля: ";
		cin >> input;
	} while (input <= 0);
	input -= 1;

	cout << "Введите размер массива: ";
	cin >> size;

	int* vector = new int[size];

	cout << "Введите данные массива: ";
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

	msg += "Массив после: ";
	for (int i = 0; i < size; i++)
	{
		msg += to_string(vector[i]) + " ";
	}

	cout << msg << endl;

	return 0;
}