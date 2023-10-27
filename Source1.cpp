////ПРАКТИКА 4
//#include <iostream>
//#include <vector>
//#include <iomanip>
//#include <cmath>
//#include <algorithm>
//#include <string>
//#include <fstream>
//#include <map>
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
//		const int n = 8, m = 28;
//		char a[n][m] = { {} };
//		int i, j;
//		for (i = 0; i < n; i++) {
//			for (j = 0; j < m; j++) {
//				if (i < 4 && j < 8)
//					a[i][j] = '*';
//				else
//					a[i][j] = '_';
//			}
//		}
//		for (i = 0; i < n; i++) {
//			for (j = 0; j < m; j++) {
//				cout << a[i][j];
//			}
//			cout << endl;
//		}
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
//		string s;
//		cin >> s;
//		int i, c, c1, chislo = 0, flag;
//		c = SS(s[0]);
//		chislo += c;
//		for (i = 1; i < s.length(); i++)
//		{
//			flag = 0;
//			c1 = SS(s[i]);
//			if ((c1 == 5 || c1 == 10 ) && (c == 1))
//			{
//				chislo += (c1 - 2*c);
//				c = c1;
//			}
//			else if (c1 == 50 && c == 10)
//			{
//				chislo += (c1 - 2 * c);
//				c = c1;
//			}
//			else
//			{
//				if (c1 <= c)
//				{
//					chislo += c1;
//					c = c1;
//				}
//				else
//				{
//					flag = 1;
//					break;
//				}
//			}
//		}
//		if (flag == 1)
//			cout << "Ошибка" << endl;
//		else
//		{
//			if ((count(s.begin(), s.end(), 'M')) > 3 || (count(s.begin(), s.end(), 'V')) > 3 || (count(s.begin(), s.end(), 'X')) > 3 || (count(s.begin(), s.end(), 'L')) > 3 || (count(s.begin(), s.end(), 'C')) > 3 || (count(s.begin(), s.end(), 'D')) > 3 || s.find("IIII") == 1)
//				cout << "Ошибка" << endl;
//			else
//				cout << chislo << endl;
//		}
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
//		vector <double> v;
//		const int l = 4, k = 2, n = 3, m = 4;
//		double C[n][k] = { {0} }, sum1, sum2, Max = -1000, Min = 1e9, maxp, minp, maxk, mink, obsum = 0, obkom = 0, money = 0;
//		double A[n][m] = { 5, 2, 0, 10, 3, 5, 2, 5, 20, 0,0,0 };
//		int i, j;
//		/*for (i = 0; i < n; i++) {
//			for (j = 0; j < m; j++)
//				cout << A[i][j] << " ";
//			cout << endl;*/
//			/*}*/
//		cout << endl;
//		double B[l][k] = { 1.20 , 0.50, 2.80 , 0.40, 5.00, 1.00, 2.00, 1.50 };
//		/*for (i = 0; i < l; i++) {
//			for (j = 0; j < k; j++)
//				cout << B[i][j] << " ";
//			cout << endl;*/
//			/*}*/
//		for (i = 0; i < n; i++) {
//			sum1 = 0;
//			sum2 = 0;
//			for (j = 0; j < m; j++) {
//				sum1 += A[i][j] * B[j][0];
//				sum2 += A[i][j] * B[j][1];
//			}
//			v.push_back(sum1);
//			v.push_back(sum2);
//		}
//		for (i = 0; i < v.size(); i++)
//			C[i / 2][i % 2] = v[i]; //преобразование вектора в матрицу
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
