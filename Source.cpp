#include <iostream>
using namespace std;
int main() {
	//Дан массив из 5 элементов ввести с клавиатуры данные.Вывести элементы в обратном порядке от элемента с номером 4
	/*const int n = 5;
	int mas[n];
	for (int i = 0; i <= n; i++) {
		cin >> mas[i];

	}
	for (int i = n - 1; i >= 0; i--) {
cout << mas[i] << ' '; 
	}
	cout << endl;*/

	//дан массив из 15 элементов заполнить его случайными числами из диапозона 0-20. подсчитать колиличество четных чисел в массиве .
	/*const int n = 15;
	int arr[n];
	for (int i = 0; i <= n; i++) {
		arr[i] = rand() % 21;
		cout << arr[i] << " ";
	}
	cout << endl;
	int kol_vo = 1;
	for (int i = 0; i <= n; i++) {
		if (arr[i] % 2 == 0) {
			kol_vo++;
		}
	}
	cout << kol_vo << endl;*/

	//1 Дан массив из 15 элементов.Заполнить его случаными числами из диапазона 0 - 20. Подсчитать кол-во чисел в массиве, которые не делятся на 5
	/*
	const int n = 15;
	int arr[n];
	for (int i = 0; i <= n; i++) {
		arr[i] = rand() % 21;
		cout << arr[i] << " ";
	}
	cout << endl;
	int kol_vo = 1;
	for (int i = 0; i <= n; i++) {
		if (arr[i] % 5 != 0) {
			kol_vo++;
		}
	}
	*/

		//2 Дан массив из 20 элементов.Заполнить его случайными числами из диапазона 0 - 30. Подсчитать сумму тех чисел в массиве, которые делятся на 3 И на 5
	/*const int n = 20;
	int arr[n];
	int sum = 0;
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 31;
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 5 == 0 && arr[i] % 3 == 0)
			sum += arr[i];
	}
	cout << sum << endl;*/
	//3 Дан массив из 17 элементов. Заполнить его случайными числами из диапазона 0 - 45. Подсчитать произведение тех чисел в массиве, которые делятся на 2 ИЛИ на 3
	const int n = 20;
	int arr[n];
	int proiz = 0;
	long long p = 1;
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 31;
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0 && arr[i] % 3 == 0)
			proiz += arr[i];
	}
	cout << proiz << endl;
}