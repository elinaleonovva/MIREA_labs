////ПРАКТИКА 4
//#include <iostream>
//#include <vector>
//#include <iomanip>
//#include <cmath>
//#include <algorithm>
//#include <string>
//#include <fstream>
//#include <map>
//#include <windows.h>
//#include <math.h> //sqrt(a+b), pow(a,2)
//#define _USE_MATH_DEFINES
//#define M_PI
//const double PI = 3.14159265;
//using namespace std;
//int f(int x)
//{
//	if (x > 0)
//		return 1;
//	else if (x == 0)
//		return 0;
//	else
//		return -1;
//}
//double P(double a, double b)
//{
//	return a * b;
//}
//double T(double a, double b, double c)
//{
//	double p=(a+b+c)/2;
//	if (a+b>c && b+c>a && a+c>b)
//		return sqrt(p * (p - a) * (p - b) * (p - c));
//	else
//		return -1;
//}
//double K(double r)
//{
//	return PI * r * r;
//}
//int SS(char x)
//{
//	switch (x)
//	{
//	case 'I':
//		return 1;
//	case 'V':
//		return 5;
//	case 'X':
//		return 10;
//	case 'L':
//		return 50;
//	case 'C':
//		return 100;
//	case 'D':
//		return 500;
//	case 'M':
//		return 1000;
//	}
//}
//
//int f(int num, int m, int b, int c)
//{
//	if (num == 0)
//		return 0;
//	else
//		return ((m * f(num - 1, m, b, c) + b) % c);
//}
//int Ten(string s, int k)
//{
//	long long int i = 0, t = 0, j = s.size() - 1, c = 0; //i-число в 10сс, t-степень, c-число, k-основание сс
//	string x;
//	while (j >= 0)
//	{
//		x = s[j];
//		if (c >= k)
//			return 0;
//		if (x == "A")
//		{
//			c = 10;
//			i += c * pow(k, t);
//			t++;
//			j--;
//			continue;
//		}
//		if (x == "B")
//		{
//			c = 11;
//			i += c * pow(k, t);
//			t++;
//			j--;
//			continue;
//		}
//		if (x == "C")
//		{
//			c = 12;
//			i += c * pow(k, t);
//			t++;
//			j--;
//			continue;
//		}
//		if (x == "D")
//		{
//			c = 13;
//			i += c * pow(k, t);
//			t++;
//			j--;
//			continue;
//		}
//		if (x == "E")
//		{
//			c = 14;
//			i += c * pow(k, t);
//			t++;
//			j--;
//			continue;
//		}
//		if (x == "F")
//		{
//			c = 15;
//			i += c * pow(k, t);
//			t++;
//			j--;
//			continue;
//		}
//		c = stoi(x);
//		i += c * pow(k, t);
//		t++;
//		j--;
//	}
//	return i;
//}
//string Perevod(int x, int p)
//{
//	string str = "";
//	int i;
//	while (x > 0)
//	{
//		i = x % p;
//		if (i == 10)
//			str += "A";
//		if (i == 11)
//			str += "B";
//		if (i == 12)
//			str += "C";
//		if (i == 13)
//			str += "D";
//		if (i == 14)
//			str += "E";
//		if (i == 15)
//			str += "F";
//		if (i >= 0 && i < 10)
//			str += to_string(i);
//		x /= p;
//	}
//	return str;
//}
//
//struct Num {
//	string rom;
//	int arab;
//};
//
//string Roman(int number)
//{
//	Num* Numb = new Num[13];
//	Numb[0].rom = "M";
//	Numb[0].arab = 1000;
//	Numb[1].rom = "CM";
//	Numb[1].arab = 900;
//	Numb[2].rom = "D";
//	Numb[2].arab = 500;
//	Numb[3].rom = "CD";
//	Numb[3].arab = 400;
//	Numb[4].rom = "C";
//	Numb[4].arab = 100;
//	Numb[5].rom = "XC";
//	Numb[5].arab = 90;
//	Numb[6].rom = "L";
//	Numb[6].arab = 50;
//	Numb[7].rom = "XL";
//	Numb[7].arab = 40;
//	Numb[8].rom = "X";
//	Numb[8].arab = 10;
//	Numb[9].rom = "IX";
//	Numb[9].arab = 9;
//	Numb[10].rom = "V";
//	Numb[10].arab = 5;
//	Numb[11].rom = "IV";
//	Numb[11].arab = 4;
//	Numb[12].rom = "I";
//	Numb[12].arab = 1;
//	string result;
//	for (int i = 0; i <13; i++) {
//		while (number >= Numb[i].arab) {
//			result += Numb[i].rom;
//			number -= Numb[i].arab;
//		}
//	}
//	return result;
//}
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	int q;
//	cout << "Введите номер задания" << endl;
//	cin >> q;
//	if (q == 1)
//	{
//		ofstream fout("in.txt");
//		double n = 10, i, x, sum = 0;
//		for (i = 0; i < n; i++)
//		{
//			if (!(cin >> x))
//			{
//				cout << "Ошибка ввода";
//				return 0;
//			}
//
//			fout << x << endl;
//		}
//		fout.close();
//		ifstream in("in.txt");
//		for (i = 0; i < n; i++)
//		{
//			in >> x;
//			sum += x;
//		}
//		cout << setprecision(10) << sum << endl;
//	}
//	else if (q == 2)
//	{
//		int x;
//		if (!(cin >> x))
//		{
//			cout << "Ошибка" << endl;
//			return 0;
//		}
//		cout << f(x) << endl;
//		cout << char(x);
//	}
//	else if (q == 3)
//	{
//		cout << "Прямоугольник - 1" << endl;
//		cout << "Треугольник - 2" << endl;
//		cout << "Круг - 3" << endl;
//		double a, b, c;
//		int x;
//		cin >> x;
//		switch (x)
//		{
//		case 1:
//			cout << "Введите 2 стороны" << endl;
//			if (!(cin >> a >> b))
//			{
//				cout << "Ошибка" << endl;
//				return 0;
//			}
//			else
//			{
//				if (a > 0 && b > 0)						
//					cout << setprecision(10) << P(a, b) << endl;
//				else
//					cout << "Ошибка ввода данных" << endl;
//			}
//			break;
//		case 2:
//			cout << "Введите 3 стороны" << endl;
//			if (!(cin >> a >> b >> c))
//			{
//				cout << "Ошибка" << endl;
//				return 0;
//			}
//			else
//			{
//				if (a > 0 && b > 0 && c > 0)
//					cout << setprecision(10) << T(a, b, c) << endl;
//				else
//					cout << "Ошибка ввода данных" << endl;
//			}
//			break;
//		case 3:
//			cout << "Введите радиус" << endl;
//			double a;
//			if (!(cin>>a))
//			{
//				cout << "Ошибка" << endl;
//				return 0;
//			}
//			else
//			{
//				if (a > 0)
//					cout << setprecision(10) << K(a) << endl;
//				else
//					cout << "Ошибка ввода данных" << endl;
//			}
//			break;
//		default:
//			cout << "Некорректное значение" << endl;
//		}
//	}
//	else if (q == 4)
//	{
//		HANDLE hConsole;
//		hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
//		for (int i = 1; i <= 2; i++)
//		{
//			SetConsoleTextAttribute(hConsole, 23);
//			cout << "************";
//			SetConsoleTextAttribute(hConsole, 255);
//			cout << "----------------------" << endl;
//			SetConsoleTextAttribute(hConsole, 23);
//			cout << "************";
//			SetConsoleTextAttribute(hConsole, 196);
//			cout << "----------------------" << endl;
//		}
//		for (int i = 1; i <= 3; i++)
//		{
//			SetConsoleTextAttribute(hConsole, 255);
//			cout << "----------------------------------" << endl;
//			SetConsoleTextAttribute(hConsole, 196);
//			cout << "----------------------------------" << endl;
//		}
//		SetConsoleTextAttribute(hConsole, 0);
//	}
//	else if (q == 5)
//	{
//		int sinx, x;
//		vector<string> mtx(50);
//		for (int i = 0; i < 50; ++i) {
//			mtx[i] = "                                                                                                    ";
//		}
//
//		for (int i = 0; i < 100; ++i) {
//			x = i - 50;
//			sinx = floor(sin(x / 10.) * 10.) + 25;
//			mtx[49 - sinx][i] = '*';
//		}
//
//		for (int i = 0; i < 50; ++i) {
//			mtx[i][50] = '|';
//		}
//		for (int i = 0; i < 100; ++i) {
//			mtx[25][i] = '_';
//		}
//
//		for (int i = 0; i < 50; ++i) {
//			cout << mtx[i] << endl;
//		}
//	}
//	else if (q == 6)
//	{
//		string chisl;
//		cin >> chisl;
//		int res = 0;
//		int col = 0;
//		map <char, int> roman;
//		roman['I'] = 1;
//		roman['V'] = 5;
//		roman['X'] = 10;
//		roman['L'] = 50;
//		roman['C'] = 100;
//		roman['D'] = 500;
//		roman['M'] = 1000;
//		string alp = "IVXLCDM";
//		int f = 0;
//		char last = 'I';
//		int I = 0;
//		int V = 0;
//		int X = 0;
//		int L = 0;
//		int C = 0;
//		int D = 0;
//		int M = 0;
//
//		int p = 0;
//		if (chisl[0] == '-') {
//			p = 1;
//		}
//		//for (int i = 0; i < chisl.length(); i++) {
//		//	if (chisl[i] == 'I') {
//		//		I += 1;
//		//	}
//		//	if (chisl[i] == 'V') {
//		//		V += 1;
//		//	}
//		//	if (chisl[i] == 'X') {
//		//		X += 1;
//		//	}
//		//	if (chisl[i] == 'L') {
//		//		L += 1;
//		//	}
//		//	if (chisl[i] == 'C') {
//		//		C += 1;
//		//	}
//		//	if (chisl[i] == 'D') {
//		//		D += 1;
//		//	}
//		//	if (chisl[i] == 'M') {
//		//		M += 1;
//		//	}
//		//}
//		//if (I > 3 || V > 1 || X > 3 || L > 1 || C > 3 || D > 1 || M > 3) {
//		//	cout << "error1";
//		//	return 0;
//		//}
//
//		for (int i = p; i < chisl.length() - 1; i++) {
//			if (roman[chisl[i]] < roman[chisl[i + 1]] && alp.find(chisl[i]) != -1) {
//				res -= roman[chisl[i]];
//			}
//			else if (alp.find(chisl[i]) != -1) {
//				if (chisl[i] == chisl[i + 1] && col < 3) {
//					col++;
//					last = chisl[i];
//					res += roman[chisl[i]];
//				}
//				else if (chisl[i] == chisl[i + 1] && col >= 3) {
//					//cout << "error 2";
//					f = 1;
//					break;
//				}
//				else {
//					res += roman[chisl[i]];
//					last = chisl[i];
//					col = 0;
//				}
//			}
//			//else {
//			//	cout << "error 3";
//			//	f = 1;
//			//	break;
//			//}
//		}
//		if (last == chisl[chisl.length() - 1] || alp.find(chisl[chisl.length() - 1]) == -1) {
//			if (col >= 3) {
//				//cout << "error 4";
//				f = 1;
//			}
//			else
//				res += roman[chisl[chisl.length() - 1]];
//		}
//		else
//			res += roman[chisl[chisl.length() - 1]];
//
//		string s2 = Roman(res);
//		if (s2 == chisl)
//		{
//			cout << res << endl;
//		}
//		else
//			cout << "error" << endl;
//
//	}
//	else if (q == 7)
//	{
//		int i, num, m = 37, b = 3, c = 64, m1 = 25173, b1 = 13849, c1 = 65537;
//		cout << "Введите количество чисел, сколько нужно сгенерировать" << endl;
//		if (!(cin >> num))
//		{
//			cout << "Ошибка" << endl;
//			return 0;
//		}
//		else
//		{
//			for (i = 0; i < num; i++)
//				cout << f(i, m, b, c) << " ";
//			cout << endl;
//			for (i = 0; i < num; i++)
//				cout << f(i, m1, b1, c1) << " ";
//		}
//	}
//	else if (q == 8)
//	{
//		const int l = 4, k = 2, n = 3, m = 4;
//		double C[n][k] = { {0} }, sum1, sum2, Max = -1000, Min = 1e9, maxp, minp, maxk, mink, obsum = 0, obkom = 0, money = 0;
//		double A[n][m] = { 5, 2, 0, 10, 3, 5, 2, 5, 20, 0,0,0 };
//		int i, j;
//		cout << endl;
//		double B[l][k] = { 1.20 , 0.50, 2.80 , 0.40, 5.00, 1.00, 2.00, 1.50 };
//		double* v;
//		v = new double[2*n];
//		int h = 0;
//		for (i = 0; i < n; i++) {
//			sum1 = 0;
//			sum2 = 0;
//			for (j = 0; j < m; j++) {
//				sum1 += A[i][j] * B[j][0];
//				sum2 += A[i][j] * B[j][1];
//			}
//			v[h] = sum1;
//			h++;
//			v[h]=sum2;
//			h++;
//		}
//		for (i = 0; i < 2*n; i++)
//			C[i / 2][i % 2] = v[i]; //преобразование вектора (динамического массива) в матрицу
//		for (i = 0; i < 3; i++) {
//			for (j = 0; j < 2; j++)
//				cout << C[i][j] << " ";
//			cout << endl;
//		}
//		cout << endl;
//		for (i = 0; i < 3; i++)
//		{
//			if (C[i][0] > Max)
//			{
//				Max = C[i][0];
//				maxp = i;
//			}
//			if (C[i][0] < Min)
//			{
//				Min = C[i][0];
//				minp = i;
//			}
//		}
//		cout << "Выручил больше всего денег с продажи продавец " << maxp + 1 << endl;
//		cout << "Выручил меньше всего денег с продажи продавец " << minp + 1 << endl;
//		Max = -1000;
//		Min = 1e9;
//		for (i = 0; i < 3; i++)
//		{
//			if (C[i][1] > Max)
//			{
//				Max = C[i][1];
//				maxk = i;
//			}
//			if (C[i][1] < Min)
//			{
//				Min = C[i][1];
//				mink = i;
//			}
//		}
//		cout << "Выручил больше всего комиссионных получил продавец " << maxk + 1 << endl;
//		cout << "Выручил меньше всего комиссионных получил продавец " << mink + 1 << endl;
//		for (i = 0; i < 3; i++)
//			obsum += C[i][0];
//		for (i = 0; i < 3; i++)
//			obkom += C[i][1];
//		cout << "Общая сумма за проданные товары " << obsum << endl;
//		cout << "Общая сумма комисионных " << obkom << endl;
//		for (i = 0; i < 3; i++)
//			for (j = 0; j < 2; j++)
//				money += C[i][j];
//		cout << "Всего денег, прошедших через руки продавцов " << money << endl;
//	}
//	if (q == 9)
//	{
//		long long int k, p, i, j;
//		string n, s;
//		cout << "Ведите число" << endl;
//		cin >> n;
//		cout << "Введите основание системы счисления введенного числа " << endl;
//		cin >> k;
//		cout << "Введите основание системы счисления, в которую переводим " << endl;
//		cin >> p;
//		j = Ten(n, k);
//		s = Perevod(j, p);
//		reverse(s.begin(), s.end());
//		cout << s << endl;
//	}
//}
