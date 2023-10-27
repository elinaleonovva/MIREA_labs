//#include <iostream> //ШАРИКИ
//#include <vector>
//#include <cmath>
//#include <algorithm>
//#include <map>
//#include <string>
//#include <fstream>
//#include <math.h> 
//using namespace std;
//int cnt = 0;
//void Perestanovka(int a[], int n, int step)
//{
//	if (step == n + 1) {
//		for (int i=1; i<=n; i++)
//			if (a[i] == i)
//			{
//				cnt++;
//				//for (int j = 1; j <= n; j++)
//				//	cout << a[j] << " ";
//				//cout << endl;
//				break;
//			}
//	}
//	else
//	{
//		for (int i = 1; i <= n; i++) {
//			if (a[i] == 0) {
//				a[i] = step;
//				Perestanovka(a, n, step + 1);
//				a[i] = 0;
//			}
//		}
//	}
//}
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	int n, * a, step;
//
//	cout << "Введите количество шариков" << endl;
//	cin >> n;
//	a = new int[n+1];
//	for (int i = 0; i < n + 1; i++)
//		a[i] = 0;
//	Perestanovka(a, n, 1);
//	cout << cnt << endl;
//}
//
//
////int main()
////{
////	//шарики
////    int n, * a, * b, i, sum = 0;
////    cin >> n;
////    a = new int[n];
////    b= new int[n];
////    for (i = 1; i <= n; i++)
////    {
////        a[i] = i;
////        b[i] = i;
////    }
////    do {
////        for (i = 0; i < n; i++)
////            if (a[i] == b[i])
////            {
////                sum++;
////                break;
////            }
////    } while (next_permutation(b, b+n));
////    cout << sum << endl;
////}