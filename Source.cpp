#include <iostream>
using namespace std;
int main() {
	//��� ������ �� 5 ��������� ������ � ���������� ������.������� �������� � �������� ������� �� �������� � ������� 4
	/*const int n = 5;
	int mas[n];
	for (int i = 0; i <= n; i++) {
		cin >> mas[i];

	}
	for (int i = n - 1; i >= 0; i--) {
cout << mas[i] << ' '; 
	}
	cout << endl;*/

	//��� ������ �� 15 ��������� ��������� ��� ���������� ������� �� ��������� 0-20. ���������� ������������ ������ ����� � ������� .
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

	//1 ��� ������ �� 15 ���������.��������� ��� ��������� ������� �� ��������� 0 - 20. ���������� ���-�� ����� � �������, ������� �� ������� �� 5
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

		//2 ��� ������ �� 20 ���������.��������� ��� ���������� ������� �� ��������� 0 - 30. ���������� ����� ��� ����� � �������, ������� ������� �� 3 � �� 5
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
	//3 ��� ������ �� 17 ���������. ��������� ��� ���������� ������� �� ��������� 0 - 45. ���������� ������������ ��� ����� � �������, ������� ������� �� 2 ��� �� 3
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