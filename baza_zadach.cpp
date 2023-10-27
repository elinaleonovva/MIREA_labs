#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <string>
#include <fstream>
#include <sstream>
#include <stdlib.h>
#include <math.h> 
using namespace std;
double minc(double *pa, double *pb)
{
	int c;
	if (*pa > *pb) {
		c = *pa;
		*pa = *pb;
		*pb = c;
	}
	return *pa;
}

bool isPosNum(string number) {
	if (number[0] == '-') {
		printf("Ошибка ввода данных, попробуйте снова\n");
		return false;
	}
	for (int i = 0; i < number.length(); i++)
		if ((number[i] == '.') || (number[i] == ',')) {
			printf("Ошибка ввода данных, попробуйте снова\n");
			return false;
		}
	for (int i = 0; i < number.length(); i++)
		if ((int)number[i] < 48 || (int)number[i] > 57) {
			printf("Ошибка ввода данных, попробуйте снова\n");
			return false;
		}
	return true;
}
void reverse(int *arr, int n)
{
	int start = 0;
	int end = n - 1;
	while (start < end)
	{
		int t = arr[start];
		arr[start] = arr[end];
		arr[end] = t;
		start++;
		end--;
	}
}

void f1()
{
	int* a, n = 10, flag = 0;;
	a = new int[n];
	string* Numbers = new string[n];
	bool f1 = 0;
	while (f1 != 1) {
		cout << "Введите элементы массива" << endl;
		for (int i = 0; i < n; i++)
			cin >> Numbers[i];
		for (int i = 0; i < n; i++)
		{
			if (!(isPosNum(Numbers[i]))) {
				f1 = 0;
				break;
			}
			f1 = 1;
		}
	}
	for (int i = 0; i < n; i++)
		a[i] = stoi(Numbers[i]);
	for (int i = 1; i < n - 2; i++) {
		if (a[0] < a[i] && a[i] < a[n - 1]) {
			cout << i << endl;
			flag = 1;
			break;
		}
	}
	if (flag == 0)
		cout << 0 << endl;
	delete[] a;
	cin.get();
	cin.get();
}

void f2()
{
	int m, n, ** mtrx; //чтобы хранить данные, которые хранят адрес указателя
	bool f = 0;
	while (f != 1)
	{
		string n1, n2;
		cout << "Введите размеры матрицы " << endl;
		cin >> n1 >> n2;
		if (!(isPosNum(n1)) || !(isPosNum(n2)))
			f = 0;
		else
		{
			m = stoi(n1);
			n = stoi(n2);
			f = 1;
		}
	}
	mtrx = new int* [m];
	for (int i = 0; i < m; i++) {
		mtrx[i] = new int[n];
	}
	int cnt = 0, maxcnt = 0, stroka = 0;
	cout << "Введите элементы матрицы" << endl;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> mtrx[i][j];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (mtrx[i][j] == mtrx[i][j + 1]) {
				cnt++;
				if (cnt >= maxcnt)
					maxcnt = cnt;
			}
			if (j == n - 2) {
				if (cnt >= maxcnt) {
					maxcnt = cnt;
					stroka = i;
				}
				cnt = 0;
			}
		}
	}
	cout << "Номер последней строки: " << stroka << endl;
	delete[] mtrx;
	cin.get();
	cin.get();
}

void f3()
{
	double a, b, c, d;
	cout << "Введите 4 числа " << endl;
	if (!(cin >> a >> b >> c >> d)) {
		cout << "Ошибка" << endl;
		return;
	}
	else {
		double minAB = minc(&a, &b);
		double minCD = minc(&c, &d);
		double minAD = minc(&minAB, &minCD);
		cout << minAD << endl;
	}
	cin.get();
	cin.get();
}

void f4()
{
	int n, n1;
	cout << "Введите количество элементов в первой и во второй последовательностях" << endl;
	cin >> n >> n1;
	int* x = new int[n];
	int* y = new int[n1];
	string* Numbers1 = new string[n];
	string* Numbers2 = new string[n1];
	bool f1 = 0;
	while (f1 != 1) {
		cout << "Введите элементы массива x" << endl;
		for (int i = 0; i < n; i++)
			cin >> Numbers1[i];
		for (int i = 0; i < n; i++)
		{
			if (!(isPosNum(Numbers1[i]))) {
				f1 = 0;
				break;
			}
			f1 = 1;
		}
	}
	bool f2 = 0;
	while (f2 != 1) {
		cout << "Введите элементы массива y" << endl;
		for (int i = 0; i < n1; i++)
			cin >> Numbers2[i];
		for (int i = 0; i < n1; i++)
		{
			if (!(isPosNum(Numbers2[i]))) {
				f2 = 0;
				break;
			}
			f2 = 1;
		}
	}
	for (int i = 0; i < n; i++)
		x[i] = stoi(Numbers1[i]);
	for (int i = 0; i < n1; i++)
		y[i] = stoi(Numbers2[i]);

	int** znach = new int*[n + 1];
	for (int i = 0; i <= n; i++) {
		znach[i] = new int[n1 + 1];
		for (int j = 0; j <= n1; j++)
			znach[i][j] = 0;
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n1; j++) {
			if (x[i - 1] == y[j - 1]) 
				znach[i][j] = znach[i - 1][j - 1] + 1;
			else
				znach[i][j]= max(znach[i-1][j], znach[i][j-1]);
		}
	}
	int* result = new int[n * n1];
	for (int i = 0; i < n * n1; i++)
		result[i] = 0;
	int i = n, j = n1, k=-1;
	while (i > 0 && j > 0) {
		if (x[i-1] == y[j-1]) {
			k++;
			result[k]=x[i-1];
			i--;
			j--;
		}
		else if (znach[i - 1][j] >= znach[i][j - 1]) {
			i--;
		}
		else {
			j--;
		}
	}

	if (znach[n][n1] > 0)
	{
		for (int i = k; i >= 0; i--)
			cout << result[i] << " ";
	}
	else
		cout << "Общих подпоследовательностей нет" << endl;
	delete[] znach;
	delete[] result;
	cin.get();
	cin.get();
}

void f5()
{
	int n;
	cout << "Введите количество элементов массива" << endl;
	cin >> n;
	string* Numbers = new string[n];
	bool f1 = 0;
	while (f1 != 1) {
		cout << "Введите элементы массива" << endl;
		for (int i = 0; i < n; i++)
			cin >> Numbers[i];
		for (int i = 0; i < n; i++)
		{
			if (!(isPosNum(Numbers[i]))) {
				f1 = 0;
				break;
			}
			f1 = 1;
		}
	}
	int* v = new int[n];
	for (int i = 0; i < n; i++)
		v[i] = stoi(Numbers[i]);
	cout << "Исходный массив: " << endl;
	for (int i = 0; i < n; i++)
		cout << v[i] << " ";
	cout << endl;
	reverse(v, n);
	cout << "Перевернутый массив: " << endl;
	for (int i = 0; i < n; i++)
		cout << v[i] << " ";
	cout << endl;
	delete[] v;
	cin.get();
	cin.get();
}

int main()
{
	setlocale(LC_ALL, "Russian");
	while (1)
	{
		cout << "Введите номер задания" << endl;
		int q;
		cin >> q;
		switch (q) {
		case 1: // 33
			f1();
			break;
		case 2: //61
			f2();
			break;
		case 3: //67
			f3();
			break;
		case 4: //85
			f4();
			break;
		case 5: //43
			f5();
			break;
		default:
			cout << "Ошибка" << endl;
			break;
		}
		system("cls");
	}
}