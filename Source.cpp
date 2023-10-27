////ПРАКТИКА 1
//#include <iostream>
//#include <vector>
//#include <cmath>
//#include <algorithm>
//#include <string>
//#include <fstream>
//#include <math.h> //sqrt(a+b), pow(a,2)
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	int q;
//	cout << "Введите номер задания" << endl;
//	cin >> q;
//	if (q == 1)
//	{
//		cout << "Elina" << endl;
//	}
//	else if (q == 2)
//	{
//		float a, b;
//		cin >> a >> b;
//		if (b != 0)
//			cout << a + b << " " << a - b << " " << a * b << " " << a / b << endl;
//		else
//			cout << a + b << " " << a - b << " " << a * b << " " << "Невозможно" << endl;
//		cout << endl;
//	}
//	else if (q == 3)
//	{
//		float b, c;
//		cin >> b >> c;
//		if (b == 0) {
//			if (c == 0)
//				cout << "Беск много реш" << endl;
//			else
//				cout << "Нет реш" << endl;
//		}
//		else
//		{
//			float y = (c * (-1)) / b;
//			if (y == -0)
//				cout << 0 << endl;
//			else
//				cout << (c * (-1)) / b << endl;
//		}
//	}
//	else if (q == 4)
//	{
//		float a, b, c;
//		cin >> a >> b >> c;
//		if (a == 0) {
//			if (b == 0) {
//				if (c == 0)
//					cout << "Беск много реш" << endl;
//				else
//					cout << "Нет решений" << endl;
//			}
//			else
//			{
//				float y = (c * (-1)) / b;
//				if (y == -0)
//					cout << 0 << endl;
//				else
//					cout << (c * (-1)) / b << endl;
//			}
//
//		}
//		else
//		{
//			float D = (b * b) - 4 * a * c;
//			if (D < 0)
//				cout << "Нет решений" << endl;
//			else if (D == 0)
//			{
//				float y = (b * (-1)) / (2 * a);
//				if (y == -0)
//					cout << 0 << endl;
//				else
//					cout << (b * (-1)) / (2 * a) << endl;
//			}
//			else
//			{
//				float y = ((b * (-1)) + sqrt(D)) / (2 * a);
//				float v = ((b * (-1)) + sqrt(D)) / (2 * a);
//				if (y == -0)
//					cout << 0 << endl;
//				else if (v == -0)
//					cout << 0 << endl;
//				else
//					cout << ((b * (-1)) + sqrt(D)) / (2 * a) << " " << ((b * (-1)) + sqrt(D)) / (2 * a) << endl;
//			}
//		}
//	}
//	else if (q == 5)
//	{
//		cout << "1- Да, 2- Нет" << endl;
//		cout << "На улице день?" << endl;
//		int a;
//		cin >> a;
//		if (a == 1)
//		{
//			cout << "Шторы раздвинуты?" << endl;
//			int w;
//			cin >> w;
//			if (w == 1)
//				cout << "Светло" << endl;
//			else
//				cout << "Темно" << endl;
//		}
//		else
//		{
//			cout << "Лампа включены?" << endl;
//			int w;
//			cin >> w;
//			if (w == 1)
//				cout << "Светло" << endl;
//			else
//				cout << "Темно" << endl;
//		}
//	}
//}



////ПРАКТИКА 2
//#include <iostream>
//#include <vector>
//#include <cmath>
//#include <algorithm>
//#include <string>
//#include <fstream>
//#include <math.h> //sqrt(a+b), pow(a,2)
//const double PI = 3.14159265;
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	int q;
//	cout << "Введите номер задания" << endl;
//	cin >> q;
//	if (q == 1)
//	{
//		double R, r, h, l;
//		cin >> R >> r >> h;
//		if ((R == r) || (R==0 && r==0 && h==0) || (r>R))
//			cout << "Не выполниться" << endl;
//		else
//		{
//			cout << "V=" <<  (3.14159265*h*(2*R+R*r+2*r))/3 << endl;
//			l = sqrt(r * r + h * h);
//			cout << "S=" << PI * (R * 2 + (R + r) * l + r * 2) << endl;
//		}
//	}
//	else if (q == 2)
//	{
//		double a, x;
//		cin >> a >> x;
//		if (abs(x) < 1)
//			cout << a * log(abs(x)) << endl;
//		else {
//			if ((a - (x * x)) < 0)
//				cout << "Некорректно" << endl;
//			else
//				cout << sqrt(a - (x * x)) << endl;
//		}
//	}
//	else if (q == 3)
//	{
//		float x, y, b;
//		cin >> x >> y >> b;
//		if ((b-y)<0)
//			cout << "Некорректно" << endl;
//		else if ((b-x)<0)
//			cout << "Некорректно" << endl;
//		else
//			cout << log(b - y) * sqrt(b - x) << endl;
//	}
//	else if (q == 4)
//	{
//		float a;
//		cin >> a;
//		if (a > 0)
//		{
//			if (int(a) == a)
//			{
//				for (int i = 0; i <= 9; i++)
//					cout << a + i << " ";
//				cout << endl;
//			}
//			else
//				cout << "Некорректно" << endl;
//		}
//		else
//			cout << "Некорректно" << endl;
//	}
//	else if (q == 5)
//	{
//		double x;
//		for (x = -4; x <= 4; x += 0.5)
//		{
//			if ((x - 1) == 0)
//				cout << "Некорректно" << endl;
//			else
//				cout << (x * x - 2 * x + 2) / (x - 1) << endl;
//		}
//	}
//}


////ПРАКТИКА 3
//#include <iostream>
//#include <vector>
//#include <cmath>
//#include <algorithm>
//#include <string>
//#include <fstream>
//#include <math.h> //sqrt(a+b), pow(a,2)
//#include <stdio.h>
//#include <stdlib.h>
//const double PI = 3.14159265;
//using namespace std;
//bool comp(int a, int b)
//{
//	return a < b;
//}
//void Swap(int &a, int &b)
//{
//	int c;
//	c=a;
//	a=b;
//	b=c;
//}
//typedef struct tree
//{
//	int a;              
//	struct tree* left;  
//	struct tree* right; 
//} TREE;
//TREE* add_to_tree(TREE* root, int new_value)
//{
//	if (root == NULL)  
//	{
//		root = (TREE*)malloc(sizeof(TREE));
//		root->a = new_value;
//		root->left = root->right = 0;
//		return root;
//	}
//	if (root->a < new_value)          
//		root->right = add_to_tree(root->right, new_value);
//	else
//		root->left = add_to_tree(root->left, new_value);
//	return root;
//}
//
//void tree_to_array(TREE* root, int a[]) 
//{
//	int static max2 = 0;                      
//	if (root == NULL) return;             
//	tree_to_array(root->left, a);       
//	a[max2++] = root->a;
//	tree_to_array(root->right, a);      
//	free(root);
//}
//void sort_tree(int a[], int elem_total)        
//{
//	TREE* root;
//	int i;
//
//	root = NULL;
//	for (i = 0; i < elem_total; i++)        
//		root = add_to_tree(root, a[i]);
//	tree_to_array(root, a);             
//}
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	int q;
//	cout << "Введите номер задания" << endl;
//	cin >> q;
//	if (q == 1)
//	{
//		double S, p, n, m, r;
//		cin >> S >> p >> n;
//		r = p / 100;
//		if (S == p && p == n)
//			cout << "Ошибка" << endl;
//		else if ((((S * r) * pow((1 + r), n)) / (12 * (pow(1 + r, n) - 1)))==0)
//			cout << "Не выполниться" << endl;
//		else
//			cout << ((S * r) * pow((1 + r), n)) / (12 * (pow(1 + r, n) - 1)) << endl;
//	}
//	else if (q == 2)
//	{
//		double S, p, n, m, r, m1=0;
//		cin >> S >> m >> n;
//		for (p=1;  p<100 ; p++)
//		{
//			r = p / 100.0;
//			m1 = (((S * r) * pow((1 + r), n)) / (12 * (pow(1 + r, n) - 1)));
//			m1 = round(m1 * pow(10, 2)) / pow(10, 2);
//			if (m1 == m)
//				cout << p << "%" << endl;
//		}
//	}
//	else if (q == 3)
//	{
//		ofstream fout("31.txt");
//		string s1,s;
//		do
//		{
//			fout << s1;
//			cin >> s1;
//			s1 += " ";
//
//		} while (s1 != "// ");
//		fout.close();
//		ifstream in("31.txt");
//		while (!in.eof())
//		{
//			string a;
//			getline(in,a);
//			cout << a << endl;
//		}
//	}
//	else if (q == 4)
//	{
//		ofstream fout("4.txt");
//		string s2;
//		do
//		{
//			fout << s2;
//			cin >> s2;
//			s2 += " ";
//
//		} while (s2 != "// ");
//		fout.close();
//		ifstream in("4.txt");
//		int i, flag = 0;
//		string s, s1 = "";
//		getline(in, s);
//		for (i = 0; i < s.length(); i++)
//		{
//			if (s[i] >= 48 && s[i] <= 57)
//			{
//				flag = 1;
//				s1 += s[i];
//			}
//			else
//			{
//				if (flag == 1)
//					cout << s1 << endl;
//				s1 = "";
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//			cout << s1 << endl;
//	}
//	else if (q == 5)
//	{
//		ofstream fout("5.txt");
//		string s2;
//		cin >> s2;
//		fout << s2;
//		fout.close();
//		int i, j, n, n1;
//		string s, s1="";
//		ifstream in("5.txt");
//		getline(in, s);
//		n1 = s.size();
//		vector <int> v;
//		for ( i = 0; i < n1; i++)
//		{
//			v.push_back(int(s[i]));
//		}
//		n = v.size();
//		/*for (i=0; i<n-1; i++) 
//			for (j=n-1; j>i; j--) 
//				if (v[j]<v[j-1])
//					Swap(v[j], v[j-1]);*/
//		//sort(v.begin(), v.end(), comp);
//		int A[30] = {};
//		for (i = 0; i < 30; i++)
//		{
//			A[i]=v[i];
//		}
//		sort_tree(A, 30);
//		for (i = 0; i < 30; i++)
//		{
//			s1 += char(A[i]);
//		}
//		cout << s1;
//	}
//}







