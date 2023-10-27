////ПРАКТИКА 5
//#include <iostream>
//#include <vector>
//#include <cmath>
//#include <algorithm>
//#include <map>
//#include <string>
//#include <fstream>
//#include <sstream>
//#include <stdlib.h>
//#include <math.h> //sqrt(a+b), pow(a,2)
//using namespace std;
////const int N = 256;
//bool Prime(int a)
//{
//	for (int i = 2; i * i <= a; i++) {
//		if (a % i == 0)
//			return 0;
//	}
//	return 1;
//}
//int SumC(int a)
//{
//	int sum = 0;
//	while (a > 0)
//	{
//		sum += a % 10;
//		a /= 10;
//	}
//	return sum;
//}
//bool Proverka(int n)
//{
//	while (n > 0)
//	{
//		if (n % 10 >= 7)
//			return 0;
//		n /= 10;
//	}
//	return 1;
//}
//int Sem(int n)
//{
//	int T = 0, x = 0;
//	while (n > 0)
//	{
//		x += (n % 10) * pow(7, T);
//		n /= 10;
//		T++;
//	}
//	return x;
//}
//string Tr(int n)
//{
//	string s;
//	while (n > 0)
//	{
//		s += to_string(n % 3);
//		n /= 3;
//	}
//	reverse(s.begin(), s.end());
//	return s;
//}
//bool comp(pair<string, int> a, pair<string, int> b)
//{
//	return a.second < b.second;
//}
//// Структура для хранения информации о студентах
//struct Student {
//	string lastName;
//	int cipher;
//};
//// Функция для сортировки студентов по фамилии
//void sortByLastName(Student* students, int count)
//{
//	string temp;
//	for (int i = 0; i < count - 1; i++) {
//		for (int j = 0; j < count - i - 1; j++) {
//			if (students[j].lastName > students[j + 1].lastName) {
//				temp = students[j].lastName;
//				students[j].lastName = students[j + 1].lastName;
//				students[j + 1].lastName = temp;
//			}
//		}
//	}
//}
//// Функция для сортировки студентов по шифру
//void sortByCipher(Student* students, int count) {
//	int temp;
//	for (int i = 0; i < count - 1; i++) {
//		for (int j = 0; j < count - i - 1; j++) {
//			if (students[j].cipher > students[j + 1].cipher) {
//				temp = students[j].cipher;
//				students[j].cipher = students[j + 1].cipher;
//				students[j + 1].cipher = temp;
//			}
//		}
//	}
//}
//
//bool isPosNum(string number) {
//	if (number[0] == '-') {
//		printf("Ошибка ввода данных, попробуйте снова\n");
//		return false;
//	}
//	for (int i = 0; i < number.length(); i++)
//		if ((number[i] == '.') || (number[i] == ',')) {
//			printf("Ошибка ввода данных, попробуйте снова\n");
//			return false;
//		}
//	for (int i = 0; i < number.length(); i++)
//		if ((int)number[i] < 48 || (int)number[i] > 57) {
//			printf("Ошибка ввода данных, попробуйте снова\n");
//			return false;
//		}
//	return true;
//}
//
//void f1() {
//	int a, b;
//	bool f = 0;
//	while (f != 1)
//	{
//		string n1, n2;
//		cout << "Введите 2 числа " << endl;
//		cin >> n1 >> n2;
//		if (!(isPosNum(n1)) || !(isPosNum(n2)))
//			f = 0;
//		else
//		{
//			a = stoi(n1);
//			b = stoi(n2);
//			f = 1;
//		}
//	}
//	a = abs(a);
//	b = abs(b);
//	int a1 = a, b1 = b;
//	if (a * b == 0)
//	{
//		cout << abs(a - b) << endl;			
//		return;
//	}
//	else
//	{
//		while (a != b)
//		{
//			if (a > b)
//				a -= b;
//			else
//				b -= a;
//		}
//		cout << "Вычитанием: " << a << endl;
//		while (a1 * b1 > 0)
//		{
//			if (a1 > b1)
//				a1 %= b1;
//			else
//				b1 %= a1;
//		}
//		cout << "Делением: " << a1 + b1 << endl;
//	}
//	cin.get();
//	cin.get();
//}
//
//void f2() {
//	int* v, * v1;
//	long long n, i;
//	bool f=0;
//	while (f != 1)
//	{
//		string n1;
//		cout << "Введите значение: " << endl;
//		cin >> n1;
//		if (!(isPosNum(n1)))
//			f = 0;
//		else
//		{
//			n = stoi(n1);
//			f = 1;
//		}
//	}
//	v = new int[n];
//	for (i = 0; i < n; i++)
//		v[i] = i;
//	v[1] = 0;
//	for (i = 2; i < n; i++)
//		if (!Prime(v[i]))
//			v[i] = 0;
//	v1 = new int[n];
//	for (i = 0; i < n; i++)
//		if (v[i] != 0)
//			v1[i] = v[i];
//	for (i = 0; i < n; i++)
//		if (v1[i] > 0)
//			cout << v1[i] << " ";
//	cout << endl;
//	delete[] v;
//	delete[] v1;
//	cin.get();
//	cin.get();
//}
//
//void f3() {
//	ofstream fout("slovo.txt");
//	string s1,s;
//	cout << "Введите текст, в котором надо будет найти слово максимальной длины" << endl;
//	do
//	{
//		fout << s1;
//		cin >> s1;
//		s1 += " ";
//	
//	} while (s1 != "// ");
//	fout.close();
//	ifstream in("slovo.txt");
//	int l = 0, lmax = 0, i;
//	while (!in.eof())
//	{
//		string a;
//		getline(in, a);
//		for (i = 0; i < a.length(); i++)
//		{
//			if (a[i] == ' ')
//			{
//				lmax = max(l, lmax);
//				l = 0;
//			}
//			else
//			{
//				l++;
//				lmax = max(l, lmax);
//			}
//		}
//	}
//	cout << lmax << endl;
//	cin.get();
//	cin.get();
//}
//
//void f4() {
//	ofstream fout("bukva.txt");
//	string s1, s;
//	cout << "Введите текст, в котором надо будет найти самую часто встречающуюся гласную букву" << endl;
//	do
//	{
//		fout << s1;
//		cin >> s1;
//		s1 += " ";
//
//	} while (s1 != "// ");
//	fout.close();
//	ifstream in("bukva.txt");
//	int* A, i, cnt, maxcnt = 0, N = 256;
//	char n;
//	A = new int[N];
//	for (int i = 0; i < N; i++)
//		A[i] = 0;
//	while (!in.eof())
//	{
//		string a;
//		getline(in, a);
//		for (i = 0; i < a.length(); i++)
//		{
//			if (a[i] == ' ' && (a[i] != 'A' * a[i] != 'E' * a[i] != 'I' * a[i] != 'O' * a[i] != 'U' * a[i] != 'Y' * a[i] != 'a' * a[i] != 'e' * a[i] != 'i' * a[i] != 'o' * a[i] != 'u' * a[i] != 'y') != 1)
//				continue;
//			else
//				A[a[i]]++;
//		}
//	}
//	for (i = 0; i < N; i++)
//	{
//		if (A[i] > maxcnt)
//		{
//			maxcnt = A[i];
//			n = i;
//		}
//	}
//	cout << n << endl;
//	delete[] A;
//	cin.get();
//	cin.get();
//}
//
//void f5() {
//	int m, i, n = 1000;
//	int* v;
//	v = new int[n];
//	bool f = 0;
//	while (f != 1)
//	{
//		string m1;
//		cout << "Введите значение: " << endl;
//		cin >> m1;
//		if (!(isPosNum(m1)))
//			f = 0;
//		else if (int k=stoi(m1) >= 27)
//		{
//			cout << "Ошибка ввода данных" << endl;
//			f = 0;
//		}
//		else
//		{
//			m = stoi(m1);
//			f = 1;
//		}
//	}
//	for (i = 100; i < 1000; i++)
//	{
//		if (SumC(i) == m)
//			v[i] = i;
//	}
//	for (i = 0; i < n; i++)
//		if (v[i] > 0)
//			cout << v[i] << " ";
//	cout << endl;
//	delete[] v;
//	cin.get();
//	cin.get();
//}
//
//void f6() {
//	int n;
//	bool f = 0;
//	while (f != 1)
//	{
//		string n1;
//		cout << "Введите количество чисел " << endl;
//		cin >> n1;
//		if (!(isPosNum(n1)))
//			f = 0;
//		else
//		{
//			n = stoi(n1);
//			f = 1;
//		}
//	}
//	string* Numbers = new string[n];
//	bool f1 = 0;
//	while (f1 != 1) {
//		cout << "Введите элементы массива в семеричной системе счисления" << endl;
//		for (int i = 0; i < n; i++)
//			cin >> Numbers[i];
//		for (int i = 0; i < n; i++)
//		{
//			if (!(isPosNum(Numbers[i]))) {
//				f1 = 0;
//				break;
//			}
//			int m = stoi(Numbers[i]);
//			if (!Proverka(m))
//			{
//				cout << "Ошибка ввода данных" << endl;
//				f1 = 0;
//				break;
//			}
//			f1 = 1;
//		}
//	}
//	int* v = new int[n];
//	for (int i = 0; i < n; i++)
//		v[i] = stoi(Numbers[i]);
//	string* C = new string[n];
//	for (int i = 0; i < n; i++)
//	{
//		int a, b;
//		string s;
//		a = Sem(v[i]);
//		s = Tr(a);
//		C[i] = s;
//	}
//	for (auto j = 0; j < n; j++)
//		cout << C[j] << " ";
//	cout << endl;
//	delete[] v;
//	delete[] C;
//	cin.get();
//	cin.get();
//}
//
//void f7() {
//	int n;
//	bool f = 0;
//	while (f != 1)
//	{
//		string n1;
//		cout << "Введите кол-во студентов " << endl;
//		cin >> n1;
//		if (!(isPosNum(n1)))
//			f = 0;
//		else
//		{
//			n = stoi(n1);
//			f = 1;
//		}
//	}
//	Student* students = new Student[n];
//	cout << "Введите фамилию студента и шифр" << endl;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> students[i].lastName >> students[i].cipher;
//	}
//
//	ofstream fout("spisok.txt");
//	for (int i = 0; i < n; i++)
//	{
//		if (fout.is_open())
//			for (int i = 0; i < n; i++)
//				fout << students[i].lastName << " " << students[i].cipher << endl;
//	}
//	fout.close();
//
//	ifstream in("spisok.txt");
//	if (in.is_open())
//	{
//		students = new Student[n];
//		for (int i = 0; i < n; i++)
//			in >> students[i].lastName >> students[i].cipher;
//		in.close();
//	}
//
//	int m;
//	bool f1 = 0;
//	while (f1 != 1)
//	{
//		string n1;
//		cout << "По какому полю сортировать студентов? (1 - фамилия, 2 - шифр): " << endl;
//		cin >> n1;
//		if (!(isPosNum(n1)))
//			f1 = 0;
//		else
//		{
//			m = stoi(n1);
//			if (m != 1 && m != 2) {
//				cout << "Ошибка ввода данных " << endl;
//				f = 0;
//			}
//			else
//				f1 = 1;
//		}
//	}
//	if (m == 1)
//		sortByLastName(students, n);
//	else if (m == 2)
//		sortByCipher(students, n);
//	for (int i = 0; i < n; i++)
//		cout << students[i].lastName << " " << students[i].cipher << endl;
//	delete[] students;
//	cin.get();
//	cin.get();
//}
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	while (1)
//	{
//		cout << "Введите номер задания" << endl;
//		int q;
//		cin >> q;
//		switch (q) {
//		case 1: // Алгоритм Евклида 
//			f1();
//			break;
//		case 2: //Решето Эратосфена
//			f2();
//			break;
//		case 3: //Поиск в тексте слова максимальной длины.
//			f3();
//			break;
//		case 4: //Статистическая обработка текстового файла: поиск наиболее часто встречающейся гласной буквы.
//			f4();
//			break;
//		case 5: //Дано натуральное число т < 27. Получить все трехзначные целые числа, сумма цифр которых равна т (указание: использовать полный перебор).
//			f5();
//			break;
//		case 6: //Задан массив F[1:n] из чисел в семеричной системе счисления. В другом массиве организовать перевод исходного массива в троичную систему счисления.
//			f6();
//			break;
//		case 7: //Ввести с клавиатуры фамилии студентов и их шифры, сохраняя информацию в файле. Упорядочить данные по фамилии или по шифру в зависимости от пожелания пользователя.После ввода данных иметь возможность просмотреть введенную информацию.Программу желательно реализовать с использованием подпрограмм(ы).
//			f7();
//			break;
//		default:
//			cout << "Ошибка" << endl;
//			break;
//		}
//		system("cls");
//	}
//}
//
