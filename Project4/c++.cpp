#include <iostream>
using namespace std;
#include<string>
#include<stdio.h>
//int main()
//{
//	/*cout << "hello world"<< endl;
//	system("pause");*/
//	/*cout << "" << sizeof(short) << endl;
//	cout << "" << sizeof(int) << endl;
//	cout << "" << sizeof(long) << endl;
//	cout << "" << sizeof(long long) << endl;
//	short num1 = 10;
//	cout << "" << sizeof(num1) << endl;*/
//	//float f1 = 3.14f;
//	//cout << "" << sizeof(float) << endl; 
//	//cout << "" << sizeof(double) << endl; 
//	//float f2 = 3e2;
//	//float f3 = 3e-2;
//	/*char ch = 'a';
//	char ch1[] = "abcde";
//	cout << ch << endl;
//	cout << (int)ch << endl;
//	cout << "hello world\n" ;
//	cout << "\\\\";*/
//	/*string str2 = "hello world";
//	cout << str2 << endl;*/
//	/*bool flag = true;
//	flag = false;
//	cout << flag << endl;
//	cout << sizeof(bool) << endl;*/
//	/*int a = 0;
//	cout << "请给整形变量赋值：" << endl;
//	cin >> a;*/
//	//char ch = 'a';
//	//cout << "赋值" << endl;
//	//cin >> ch;
//	//cout << "" << ch << endl;
//	/*string str;
//	cin >> str;
//	cout << "" << str << endl;*/
//	//bool flag = false;
//	//cin >> flag;
//	//cout << "" << flag << endl;
//	//cout << (1 != 2) << endl;
//	//int a = 0;
//	//int b = 0;
//	////cout << !a << endl;
//	///*cout << !!a << endl;*/
//	//cout << (a && b) << endl;
//	//cout << (a || b) << endl;
//	int a = 30;
//	int b = 20;
//	int c = 0;
//	c = a > b ? a : b;
//	cout << c << endl;
//	switch (c)
//	{
//	case 20:
//		cout << "c=" << c << endl;
//		break;
//	case 30:
//		cout << "c=" << c << endl;
//		break;
//	default:
//		break;
//	}
//	return 0;
//}
//int main()
//{
//	//cout << "1.xxxx" << endl;
//	//cout << "2.xxxx" << endl;
//	//goto flag;
//	//cout << "3.xxxx" << endl;
//	//cout << "4.xxxx" << endl;
//	//flag:
//	//cout << "5.xxxx" << endl;
//	return 0;
//}
//int main()
//{
//	//int arr[5];
//	//arr[1] = 10;
//	//arr[2] = 1;
//	//arr[3] = 1;
//	//arr[4] = 1;
//	//arr[0] = 1;
//	//cout << arr[1] << endl;
//	//int arr2[5] = { 10,20,30,40,50 };
//	//int arr3[] = { 10,20,30,40,50,60 };
//	//cout << sizeof(arr) / sizeof(arr[0]) << endl;
//	//cout << (int)arr << endl;
//	//cout << (int)&arr[0] << endl;
//	//int arr4[2][2] = { 0,1,2,3 };
//	//cout << sizeof(arr4) << endl;
//	//cout << &arr4 << endl;
//	/*int a = 0;
//	int* p = &a;
//	cout << sizeof(char*) << endl;
//	p = NULL;*/
//	/*int a, b;
//	scanf_s("%d%d", &a, &b);
//	printf("%d %d", a, b);*/
//	cout << sizeof(int);
//	return 0;

//
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	char a;
//	cin >> a;
//	cout << a << endl;
//	cout << a<<a<<a << endl;
//	return 0;
//}
//#include<iostream>
//#include<cstdio>
//int main()
//{
//	int x, a, b, y,z;
//	cin >> x >> a >> b >> y>>z;
//	int k, p, q;
//	p + q * a = x * a * k;
//	p + q * b = y*b*k;
//	z*k = q
//
//
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	double r, d, c, s;
//	cin >> r;
//	d = r * 2;
//	double pi = 3.1415926;
//	c = pi * r * 2;
//	s = pi * r * r;
//	cout << fixed << setprecision(4) << d << " " << c << " " << s;
//	return 0;
//}
//#include<iostream>
//
//using namespace std;
//int main()
//{
//	float x;
//	cin >> x;
//	if (x > 0)
//	{
//		cout << (int)x / 1 << endl;
//	}
//	else if (x < 0)
//	{
//		cout << (int)x / 1 << endl;
//	}
//	else
//		cout << "0" << endl;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	char ch;
//	cin >> ch;
//	cout << (int)ch << endl;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a;
//	bool b;
//	cin >> a;
//	b = a;
//	cout << b << endl;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int arr[5];
//	for (int i = 0; i <= 4; i++)
//	{
//		cin >> arr[i];
//	}
//	arr[1] += arr[0] / 3;
//	arr[4] += arr[0] / 3;
//	arr[0] = arr[0] / 3;
//	arr[2] += arr[1] / 3;
//	arr[0] += arr[1] / 3;
//	arr[1] = arr[1] / 3;
//	arr[3] += arr[2] / 3;
//	arr[1] += arr[2] / 3;
//	arr[2] = arr[2] / 3;
//	arr[4] += arr[3] / 3;
//	arr[2] += arr[3] / 3;
//	arr[3] = arr[3] / 3;
//	arr[0] += arr[4] / 3;
//	arr[3] += arr[4] / 3;
//	arr[4] = arr[4] / 3;
//
//    
//	for (int i = 0; i <= 4; i++)
//	{
//		cout<< arr[i]<<" ";
//	}
//
//	return 0;
//}
//#include<stdio.h>
//using namespace std;
//int main()
//{
//	float x;
//	cin >> x;
//	printf("%.3f", x);
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//double x;
//cout<<x<<endl;
//printf("%.5f\n",x);
//printf("%e\n",x);
//printf("%g\n",x);
//return 0;
//}
//#include<iostream>
//#include<stdio.h>
//using namespace std;
//int main()
//{
//	double x;
//	cin >> x;
//	printf("%f\n", x);
//	printf("%.5lf\n", x);
//	printf("%e\n", x);
//	printf("%g\n", x);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	double a, b;
//	scanf_s("%lf%lf", &a, &b);
//	printf("%lf", (a / b)-(int)(a/b));
//return 0;
//}
//#include<stdio.h>
//using namespace std;
//int main()
//{
//	int r;
//	scanf_s("%d", &r);
//	double V =( 4 / 3) * 3.14 * r * r * r;
//	printf("%.5lf", V);
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	cout << pow(2, n) << endl;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	long long N;
//	if (N > 0)
//	{
//		printf("positive");
//	}
//	else if (N < 0)
//	{
//		printf("negative");
//	}
//	else
//		printf("zero");
//	return 0;
//}
//#include<iostream>
//#include<stdio.h>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	if ((n / 10) != 0 && (n / 100) == 0)
//		printf("1");
//	else
//		printf("0");
//	return 0;
//}
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if (n != 1 && n != 3 && n != 5)
	{
		printf("YES");
	}
	else
		printf("NO");
	return 0;
}
