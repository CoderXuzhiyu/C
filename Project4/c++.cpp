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
//#include<iostream>
//#include<stdio.h>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	if (n != 1 && n != 3 && n != 5)
//	{
//		printf("YES");
//	}
//	else
//		printf("NO");
//	return 0;
//}
//#include<iostream>
//#include<stdio.h>
//using namespace std;
//int main()
//{
//	double t1, t2, s;
//	cin >> s;
//	t1 = 27 + 23 + s / (double)3;
//	t2 = s / (double)1.2;
//	if (t1 > t2)
//		printf("Walk");
//	if (t1 < t2)
//		printf("Bike");
//	if (t1 == t2)
//		printf("All");
//	return 0;
//}
//#include<iostream>
//#include<stdio.h>
//using namespace std;
//int main()
//{
//	int x;
//	char c;
//	cin >> x >> c;
//	int k;
//	if (x <= 1000 && c == 'y')
//		k = 8 + 5;
//	if (x <= 1000 && c == 'n')
//		k = 8;
//	if (x > 1000)
//	{
//		if (c =='y')
//		{
//			if (((double)(x - 1000) / 500 - (x - 1000) / 500) != 0)
//				k = 8 + 5 + (((x - 1000) / 500 + 1) * 4);
//		}
//		else
//			k = 8 + 5 + (x - 1000) / 500 * 4;
//	
//	if (c == 'n')
//	{
//		if (((double)(x - 1000) / 500 - (x - 1000) / 500) != 0)
//			k = 8 + (((x - 1000) / 500 + 1) * 4);
//	}
//	else
//		k = 8 + (x - 1000) / 500 * 4;
//}
//	printf("%d", k);
//return 0;
//}
//int main()1
//{
//	int x=1370;
//	double y = (double)(x - 1000) / 500 - (x - 1000) / 500;
//	cout << y;
//	return 0;
//}
//using namespace std;
//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//	if (a >= b && a >= c)
//	{
//		printf("%d", a);
//			return 0;
//	}
//	else if (b >= a && b >= c)
//	{
//		printf("%d", b);
//		return 0;
//	}
//	else
//	{
//		printf("%d", c);
//		return 0;
//	}
//}
//
//using namespace std;
//int main()
//{
//	int x, y;
//	cin >> x, y;
//	if (x >= -1 && x <= 1 && y >= -1 && y <= 1)
//		printf("yes");
//	else
//		printf("no");
//	return 0;
//}
//#include<iostream>
//#include<stdio.h>
//using namespace std;
//int main()
//{
//	double a, b, c;
//	cin >> a >> b >> c;
//	if (b * b - 4 * a * c > 0)
//	{
//		double x1 = (-b + sqrt(b * b - 4 * a * c)) / 2 / a;
//		double x2 = (-b - sqrt(b * b - 4 * a * c)) / 2 / a;
//		printf("x1=%.5lf;", x2);
//		printf("x2=%.5lf", x1);
//	}
//	else if (b * b - 4 * a * c == 0)
//	{
//		double x1 = (-b + sqrt(b * b - 4 * a * c)) / 2 / a;
//		printf("x1=x2=%.5lf", x1);
//	}
//	else
//		printf("No answer!");
//	return 0;
//}
//int main()
//{
//	cout << sqrt(4);
//	return 0;
//}

//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		int k;
//		cin >> k;
//		sum += k;
//	}
//	double k = sum / n;
//	printf("%.2lf", k);
//	return 0;
//}
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	double sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		float a;
//		cin >> a;
//		sum += a;
//	}
//	printf("%.lf", (double)sum / n);
//
//	return 0;
//}

//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	long long sum=0;
//	for (int i = 0; i < n; i++)
//	{
//		int k;
//		cin >> k;
//		sum += k;
//	}
//	cout << sum;
//	printf(" %.5lf", (double)sum / n);
//	return 0;
//}

//using namespace std;
//int main()
//{
//	int sumg=0, sums=0, sumb=0;
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		int g, s, b;
//		cin >> g >> s >> b;
//		sumg += g;
//		sums += s;
//		sumb += b;
//	}
//	printf("%d %d %d %d", sumg, sums, sumb, sumg + sums + sumb);
//	return 0;
//}


//using namespace std;
//int main()
//{
//	int m, n;
//	cin >> m >> n;
//	int sum = 0;
//	for (int i = m; i <= n; i++)
//	{
//		if (i % 2 != 0)
//		{
//			sum += i;
//		}
//	}
//	cout << sum;
//	return 0;
//}

//using namespace std;
//int main()
//{
//    int k;
//    cin >> k;
//    int sum1 = 0;
//    int sum5 = 0;
//    int sum10 = 0;
//    for (int i = 0; i < k; i++)
//    {
//        int n;
//        scanf_s("%d", &n);
//        switch (n)
//        {
//        case 1:
//            sum1 += 1;
//            break;
//        case 5:
//            sum5 += 1;
//            break;
//        case 10:
//            sum10 += 1;
//            break;
//        }
//    }
//    cout << sum1 << endl << sum5 << endl << sum10;
//    return 0;
//}

//using namespace std;
//int main()
//{
//	int x, n;
//	double k = x;
//	cin >> x >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		k = k * (1.001);
//	}
//	printf("%.4lf", k);
//	return 0;
//}

//int fib(int x)
//{
//	if (x <= 2)
//	{
//		return 1;
//	}
//	else
//		return fib(x - 1) + fib(x - 2);
//}
//
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		int k;
//		cin >> k;
//		cout << fib(k)<<endl;
//	}
//	return 0;
//}


//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int c, d;
//	scanf_s("%d %d", &c, &d);
//	double k = (double)c / d;
//	for (int i = 0; i < n - 1; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		if ((double)a / b - k > 0.05)
//		{
//			printf("worse\n");
//		}
//		else if (k - (double)a / b > 0.05)
//		{
//			printf("better\n");
//		}
//		else
//			printf("same\n");
//	}
//	return 0;
//}


//
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int sum = 0;
//	for (int i = 0; i <= n - 1; i++)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		double t = (double)sqrt(a * a + b * b) / 50 * 2 + 1.5 * c;
//		if (t > (int)t)
//		{
//			int k = (int)t + 1;
//			sum += k;
//		}
//		else
//		{
//			sum += t;
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}


//using namespace std;
//int main()
//{
//	int m, n;
//	cin >> m >> n;
//	int count = 0;
//	for (int i = 0; i < n; i++)
//	{
//		int k;
//      cin>>k;
//		if (m - k >= 0)
//		{
//			m -= k;
//		}
//		else
//			count++;
//	}
//	cout << count << endl;
//	return 0;
//}



//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	double sum = 0;
//	if (n > 1)
//	{
//		sum = (double)(2 + 1.5);
//		int a = 2, b = 3, c;
//		int d = 1, e = 2, f;
//		for (int i = 1; i <= n - 2; i++)
//		{
//			c = a + b;
//			f = d + e;
//			sum += (double)c / f;
//			a = b;
//			b = c;
//			d = e;
//			e = f;
//		}
//	}
//	else
//	{
//		sum = 2;
//	}
//	printf("%.4lf", sum);
//	return 0;
//}


//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	double sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		sum += 1 / i * (pow(-1, i + 1));
//	}
//	printf("%.4lf", sum);
//	return 0;
//}
//using namespace std;
//int main()
//{
//	int a = 1;
//	cout <<1.0/2.0 * a;
//	return 0;
//}

//using namespace std;
//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//	for (long long i = 2; i <= 1000000; i++)
//	{
//		if (a % i == b % i && b % i == c % i)
//		{
//			cout << i;
//			break;
//		}
//	}
//}
//
//using namespace std;
//int main()
//{
//	int a, b, n;
//	cin >> a >> b >> n;
//	double k = (double)a / b;
//	for (int i = 1; i <= n; i++)
//	{
//		k = (double)k * 10;
//	}
//	int f = (int)k % 10;
//	cout << f;
//	return 0;
//	}


//using namespace std;
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	long long ret = 1;
//	for (int i = 1; i <= b; i++)
//	{
//		ret *= a;
//	}
//	
//	switch (ret % 7)
//	{
//	case 0:
//		printf("Sunday");
//		break;
//	case 1:
//		printf("Monday");
//		break;
//	case 2:
//		printf("Tuesday");
//		break;
//	case 3:
//		printf("Wednesday");
//		break;
//	case 4:
//		printf("Thursday");
//		break;
//	case 5:
//		printf("Friday");
//		break;
//	case 6:
//		printf("Saturday");
//		break;
//	}
//	return 0;
//}



//using namespace std;
//int main()
//{
//	int a, b;
//	int ret = 1;
//	cin >> a >> b;
//	for (int i = 1; i <= b; i++)
//	{
//		ret *= a;
//		ret %= 1000;
//	}
//	if (ret >= 100)
//	{
//		cout << ret;
//	}
//	else if (ret < 100 && ret >= 10)
//	{
//		cout << "0" << ret;
//	}
//	else
//		cout << "00" << ret;
//	return 0;
//}



//using namespace std;
//int main()
//{
//	int h;
//	cin >> h;
//	double sum = -h;
//	for (int i = 1; i <= 10; i++)
//	{
//		sum += h * 2;
//		h /= 2;
//	}
//	cout << sum << endl;
//	cout << h;
//	return 0;
//}

//int main()
//{
//	long long m;
//	cin >> m;
//	cout << m / 10;
//	return 0;
//}


//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	double sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		int k = 1;
//		for (int j = 1; j <= n + 1 - i; j++)
//		{
//			k *= j;
//		}
//		sum += (double)1 / k;
//
//	}
//	printf("%.10lf", sum);
//	return 0;
//}
//using namespace std;
//int main()
//{
//	float x;
//	int n;
//	cin >> x>>n;
//	double sum = 0;
//	double k = 1;
//	for (int i = 0; i <= n; i++)
//	{
//
//		sum += k;
//		k *= x;
//	}
//	printf("%.2lf", sum);
//	return 0;
//}


//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	long long ret = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (i % 7 != 0 && i % 10 != 7 && (i / 10) % 10 != 7)
//		{
//			ret += i * i;
//		}
//	}
//	cout << ret;
//	return 0;
//}


//
//using namespace std;
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	int count = 0;
//	for (int i = n; i <= m; i++)
//	{
//		while (i != 0)
//		{
//			if (i % 10 == 2)
//			{
//				count++;
//			}
//			i /= 10;
//		}
//	}
//	cout << count;
//	return 0;
//}


//int prime(int x)
//{
//	for (int j = 2; j <= x / 2; j++)
//	{
//		if (x % j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//using namespace std;
//int main()
//{
//	long long n;
//	cin >> n;
//	for (int i = 2; i <= n / 2; i++)
//	{
//		double k;
//		k = (double)n / i;
//		if (k - (int)k == 0)
//		{
//			if (prime(k) == 1)
//			{
//				printf("%d", (int)k);
//				break;
//			}
//		}
//	}
//	return 0;
//}

//int prime(int x)
//{
//	for (int j = 2; j <= x / 2; j++)
//	{
//		if (x % j == 0)
//			return 0;
//	}
//	return 1;
//}
//using namespace std;
//int main()
//{
//	int n;
//	int count = 0;
//	cin >> n;
//	for (int i = 2;; i++)
//	{
//		if (prime(i) == 1)
//		{
//			count++;
//		}
//		if (count == n)
//		{
//			printf("%d", i);
//			break;
//		}
//	}
//	return 0;
//}


//using namespace std;
//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//	int count = 0;
//	for (int i = 1; i <= c / a; i++)
//	{
//		double k = (double)(c - a * i) / b;
//		if (k - (int)k == 0)
//		{
//			count++;
//		}
//	}
//	cout << count;
//	return 0;
//}

//
//using namespace std;
//int main()
//{
//	int n;
//	int arr[101];
//	cin >> n;
//	for (int i = 0; i <= n - 1; i++)
//	{
//		cin >> arr[i];
//	}
//	int k;
//	cin >> k;
//	int sum = 0;
//	for (int i = 0; i <= n - 1; i++)
//	{
//		if (arr[i] == k)
//			sum++;
//	}
//	cout << sum;
//	return 0;
//}


//using namespace std;
//int main()
//{
//	double sum = 0;
//	for (int i = 0; i <= 9; i++)
//	{
//		double k;
//		cin >> k;
//		sum += k;
//	}
//	printf("%.1lf", sum);
//	return 0;
//}


//using namespace std;
//int main()
//{
//    int n;
//    cin >> n;
//    int arr[100];
//    for (int i = 0; i <= n - 1; i++)
//    {
//        cin >> arr[i];
//    }
//    for (int i = 0; i <= n - 2; i++)
//    {
//        for (int j = n - 1 ; j >= 1+i; j--)
//        {
//            if (arr[j] <= arr[j - 1])
//            {
//                int tmp = arr[j];
//                arr[j] = arr[j - 1];
//                arr[j - 1] = tmp;
//            }
//        }
//    }
//    for (int i = 0; i <= n - 1; i++)
//    {
//        printf("%d ",arr[i]);
//    }
//    return 0;
//}


//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int arr[100];
//	int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;
//	for (int i = 0; i <= n - 1; i++)
//	{
//		cin >> arr[i];
//	}
//	for (int i = 0; i <= n - 1; i++)
//	{
//		if (arr[i] <= 18)
//			sum1++;
//		else if (arr[i] > 18 && arr[i] <= 35)
//			sum2++;
//		else if (arr[i] > 35 && arr[i] <= 60)
//			sum3++;
//		else
//			sum4++;
//	}
//	printf("%.2lf%%\n", (double)sum1 / n * 100);
//	printf("%.2lf%%\n", (double)sum2 / n * 100);
//	printf("%.2lf%%\n", (double)sum3 / n * 100);
//	printf("%.2lf%%", (double)sum4 / n * 100);
//	return 0;
//}


//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int arr1[1000];
//	int arr2[1000];
//	int sum = 0;
//
//	for (int i = 0; i <= n - 1; i++)
//	{
//		cin >> arr1[i];
//	}
//	 for (int j = 0; j <= n - 1; j++)
//		{
//			cin >> arr2[j];
//		}
//	  for (int i = 0; i <= n - 1; i++)
//		{
//			sum += arr1[i] * arr2[i];
//		}
//	
//	printf("%d", sum);
//	return 0;
//}



//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int arr[5000];
//	for (int i = 1; i <= n; i++)
//	{
//		arr[i] = 1;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			if (j % i == 0)
//			{
//				switch (arr[j])
//				{
//				case 1:
//					arr[j] = 0;
//					break;
//				case 0:
//					arr[j] = 1;
//					break;
//				}
//			}
//		}
//	}
//			for (int i = 1; i <= n; i++)
//			{
//				if (arr[i] == 1)
//				{
//
//				}
//				else
//					printf("%d ", i);
//			}
//
//			return 0;
//}



//using namespace std;
//int main ()
//{
//int n;
//cin >> n;
//int arr[10000];
//int b = 2;
//for (int i = 0; i <= n - 1; i++)
//{
//cin >> arr[i];
//}
//int c;
//cin >> c;
//for (int i = 0; i <= n - 1; i++)
//{
//	if (arr[i] == c)
//	{
//		printf("%d", i);
//		b = 1;
//		break;
//	}
//}
//if (b == 2)
//printf("%d",-1);
//
//}

//
//using namespace std;
//int main()
//{
//	int N;
//	cin >> N;
//	int arr[100];
//	long long sum = 0;
//	for (int i = 0; i <= N - 1; i++)
//	{
//		cin >> arr[i];
//	}
//	for (int j = 0; j <= N - 2; j++)
//	{
//		if (arr[j] >= arr[j + 1])
//		{
//			int tmp = arr[j+1];
//			arr[j + 1] = arr[j];
//			arr[j] = tmp;
//		}
//	}
//	for (int i = 0; i <= N - 1; i++)
//	{
//		if (arr[i] != arr[N - 1])
//		{
//			sum += arr[i];
//		}
//	}
//	cout << sum;
//	return 0;
//}


//using namespace std;
//int main()
//{
//	int arr[300];
//	int n;
//	cin >> n;
//	int sum1 = 0;
//	for (int i = 0; i <= n - 1; i++)
//	{
//		cin >> arr[i];
//		sum1 += arr[i];
//	}
//	int sum2 = 0;
//	for (int i = 0; i <= n - 2; i++)
//	{
//		if (arr[i] >= arr[i + 1])
//		{
//			int tmp = arr[i];
//			arr[i] = arr[i + 1];
//			arr[i + 1] = tmp;
//		}
//	}
//	for (int i = n - 2; i >= 1; i--)
//	{
//		if (arr[i] <= arr[i - 1])
//		{
//			int tmp = arr[i];
//			arr[i] = arr[i - 1];
//			arr[i - 1] = tmp;
//		}
//	}
//	for (int i = 1; i <= n - 2; i++)
//		sum2 += arr[i];
//	double c = (double)sum2/(n-2) - (double)sum1 / n;
//	printf("%.2lf %.2lf", (double)sum2 / (n-2), abs(c));
//	return 0;
//}


//#include<algorithm>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int arr[100000];
//	for (int i = 0; i <= n - 1; i++)
//	{
//		cin >> arr[i];
//	}
//	sort(arr, arr + n);
//	for (int i = 0; i <= arr[n - 1]; i++)
//	{
//		int count = 0;
//		for (int j = 0; j <= n - 1; j++)
//		{
//			if (arr[j] > i)
//				break;
//			if (arr[j] == i)
//				count++;
//		}
//		cout << count << endl;
//	}
//	return 0;
//}


//
//using namespace std;
//int a[100001];
//int n, x, m = 0;
//int main()
//{
//	cin >> n;//数组大小 
//	for (int i = 1; i <= n; i++)//读入数组 
//	{
//		cin >> x;
//		a[x]++;
//		if (m < x)
//			m = x;//找出最大数
//	}
//	for (int i = 0; i <= m; i++)
//		cout << a[i] << endl;
//	return 0;
//}

//using namespace std;
//int x, n, m=0;
//int a[100001];
//int main()
//{
//	
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//
//		cin >> x;
//		a[x]++;
//		if (x > m)
//			m = x;
//	}
//	for (int i = 0; i <= m; i++)
//	{
//		cout << a[i] << endl;
//	}
//	return 0;
//}

//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int arr[100];
//	int count = 0;
//	int sum1 = 1;
//	int sum2 = 0;
//	cin >> arr[0];
//	for (int i = 1; i <= n - 1; i++)
//	{
//		cin >> arr[i];
//		if (arr[i] == arr[i - 1])
//		{
//			sum1++;
//		}
//		else
//		{
//			if (sum1 > count)
//			{
//				count = sum1;
//			}
//			sum1 = 1;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//int arr[20000];
//int repeatment(int x)
//{
//	for (int j = 0; j < x; j++)
//	{
//		if (arr[x] == arr[j])
//			return 1;
//	}
//
//	return 0;
//}
//
//
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i <= n - 1; i++)
//	{
//		cin >> arr[i];
//	}
//	for (int i = 0; i <= n - 1; i++)
//	{
//		if (repeatment(i) == 0)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}

//
//using namespace std;
//int main()
//{
//	int a[5][5];
//	int* p = &a[0][0];
//	for (int i = 0; i <= 24; i++)
//	{
//		cin >> *p;
//		p++;
//	}
//	int m, n;
//	cin >> m >> n;
//	for (int i = 0; i <= 4; i++)
//	{
//		int* t = &a[0][0];
//		int tmp = *(t + 5 * m - 5 + i);
//		*(t + 5 * m - 5 + i) = *(t + 5 * n - 5 + i);
//		*(t + 5 * n - 5 + i) = tmp;
//	}
//	for (int i = 0; i <= 4; i++)
//	{
//		for (int j = 0; j <= 4; j++)
//		{
//			cout << a[i][j] <<" ";
//		}
//		cout << endl;
//	}
//	return 0;
//}

//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int a, b;
//	cin >> a >> b;
//	for (int i = 1; i <= n; i++)
//	{
//		printf("(%d,%d) ", a, i);
//	}
//	cout << endl;
//	for (int i = 1; i <= n; i++)
//	{
//		printf("(%d,%d) ", i, b);
//	}
//	cout << endl;
//	for (int i = -n+1,  j = -n+1; i <= n-1, j <= n-1; i++, j++)
//	{
//		if (a + i >= 1 && b + j >= 1 && a + i <= n && b + j <= n)
//		{
//			printf("(%d,%d) ", a + i, b + j);
//		}
//	}
//	cout << endl;
//	for (int i = n-1,  j = n-1; i >=-n+1, j >=-n+1; i--, j--)
//	{
//		if (a + i >= 1 && b - j >= 1 && a + i <= n && b - j <= n)
//		{
//			printf("(%d,%d) ", a + i, b - j);
//		}
//	}
//	return 0;
//}


//using namespace std;
//int main()
//{
//	int m, n;
//	cin >> m >> n;
//	int sum = 0;
//	for (int i = 0; i <= m - 1; i++)
//	{
//		for (int j = 0; j <= n - 1; j++)
//		{
//			int k;
//			cin >> k;
//			if (i == 0 || j == 0 || i == m - 1 || j == n - 1)
//				sum += k;
//			
//		}
//	}
//	cout << sum;
//	return 0;
//}

//#include<stdio.h>
//using namespace std;
//int main()
//{
//	int a[5][5];
//	int c=0;
//	for (int i = 0; i <= 4; i++)
//	{
//		for (int j = 0; j <= 4; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//	for (int i = 0; i <= 4; i++)
//	{
//		int g = 1;
//		for (int j = 0; j <= 4; j++)
//		{
//			if (a[i][c] < a[i][j])
//			{
//				c = j;
//			}
//			
//		}
//		for (int f = 0; f <= 4; f++)
//		{
//			if (a[f][c] < a[i][c])
//				g = 0;
//		}
//		if (g == 1)
//		{
//			printf("%d %d %d", i+1, c+1, a[i][c]);
//			return 0;
//		}
//	}
//	printf("not found");
//	return 0;
//}
//
//using namespace std;
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	int a[100][100];
//	int b[100][100];
//	int sum = 0;
//	for (int i = 0; i <= n - 1; i++)
//	{
//		for (int j = 0; j <= m - 1; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//	for (int i = 0; i <= n - 1; i++)
//	{
//		for (int j = 0; j <= m - 1; j++)
//		{
//			cin >> b[i][j];
//		}
//	}
//	for (int i = 0; i <= n - 1; i++)
//	{
//		for (int j = 0; j <=m - 1; j++)
//		{
//			if (a[i][j] == b[i][j])
//			{
//				sum++;
//			}
//		}
//	}
//	printf("%.2lf", (double)sum / (n * m)*100);
//	return 0;
//}

//
//int a[100][100];
//int b[100][100];
//using namespace std;
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 0; i <= n - 1; i++)
//	{
//		for (int j = 0; j <= m - 1; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//	for (int i = 0; i <= n - 1; i++)
//	{
//		for (int j = 0; j <= m - 1; j++)
//		{
//			cin >> b[i][j];
//		}
//	}
//	for (int i = 0; i <= n - 1; i++)
//	{
//		for (int j = 0; j <= m - 1; j++)
//		{
//			a[i][j] += b[i][j];
//		}
//	}
//	for (int i = 0; i <= n - 1; i++)
//	{
//		for (int j = 0; j <= m - 1; j++)
//		{
//			printf("%d ", a[i][j]);
//		}
//		cout << endl;
//	}
//	return 0;
//}

//using namespace std;
//int a[100][100];
//int b[100][100];
//int c[100][100];
//int main()
//{
//	int n, m, k;
//	cin >> n >> m >> k;
//	for (int i = 0; i <= n - 1; i++)
//	{
//		for (int j = 0; j <= m - 1; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//	for (int i = 0; i <= m - 1; i++)
//	{
//		for (int j = 0; j <= k - 1; j++)
//		{
//			cin >> b[i][j];
//		}
//	}
//	for (int i = 0; i <= n - 1; i++)
//	{
//		for (int j = 0; j <= k - 1; j++)
//		{
//			for (int p = 0; p <= m - 1; p++)
//			{
//				c[i][j] += a[i][p] * b[p][j];
//
//			}
//		}
//	}
//	for (int i = 0; i <= n - 1; i++)
//	{
//		for (int j = 0; j <= k - 1; j++)
//		{
//			printf("%d ", c[i][j]);
//		}
//		cout << endl;
//	}
//	return 0;
//}

//int a[100][100];
//using namespace std;
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 0; i <= n - 1; i++)
//	{
//		for (int j = 0; j <= m - 1; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//	for (int i = 0; i <= m - 1; i++)
//	{
//		for (int j = 0; j <= n - 1; j++)
//		{
//			printf("%d ", a[j][i]);
//		}
//		cout << endl;
//	}
//	return 0;
//}

//int a[100][100];
//using namespace std;
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 0; i <= n - 1; i++)
//	{
//		for (int j = 0; j <= m - 1; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//	for (int j = 0; j <= m - 1; j++)
//	{
//		for (int i = n - 1; i >= 0; i--)
//		{
//			printf("%d ", a[i][j]);
//		}
//		cout << endl;
//	}
//	return 0;
//}


//int a[100][100];
//int b[100][100];
//using namespace std;
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	
//	for (int i = 0; i <= n - 1; i++)
//	{
//		for (int j = 0; j <= m - 1; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//	for (int i = 0; i <= n - 1; i++)
//	{
//		for (int j = 0; j <= m - 1; j++)
//		{
//			b[i][j] = a[i][j];
//		}
//	}
//	for (int i = 1; i <= n - 2; i++)
//	{
//		for (int j = 1; j <= m - 2; j++)
//		{
//		   int c = round((double)(a[i - 1][j] + a[i][j - 1] + a[i][j + 1] + a[i + 1][j] + a[i][j])/5);
//		   b[i][j] = c;
//		}
//	}
//	for (int i = 0; i <= n - 1; i++)
//	{
//		for (int j = 0; j <= m - 1; j++)
//		{
//			printf("%d ", b[i][j]);
//		}
//		cout << endl;
//	}
//	
//	return 0;
//}

//using namespace std;
//int main()
//{
//	int n = round(1.6);
//	cout << n;
//	return 0;
//}



//using namespace std;
//int main()
//{
//	string a;
//	getline(cin, a);
//	int sum = 0;
//	int sz = sizeof(a) / sizeof(a[0]);
//	for (int i = 0; i <= a.length() - 1; i++)
//	{
//		if (a[i] >= '0' && a[i] <= '9')
//		{
//			sum++;
//		}
//	}
//	cout << sum << endl;
//	return 0;
//}


//using namespace std;
//int main()
//{
//	string a;
//	cin >> a;
//	char* p = &a[0];
//	for (int i = 0; i <= a.length() - 1; i++)
//	{
//		int k = 0;
//		for (int j = i + 1; j <= a.length() - 1; j++)
//		{
//			
//			if (*(p + i) == *(p + j))
//			{
//				k = 1;
//			}
//
//		}
//		for (int j = 0; j <= i-1; j++)
//		{
//
//			if (*(p + i) == *(p + j))
//			{
//				k = 1;
//			}
//
//		}
//		if (k == 0)
//		{
//			printf("%c", a[i]);
//			return 0;
//		}
//	}
//	printf("no");
//	return 0;
//}


//using namespace std;
//int main()
//{
//	float n;
//	cin >> n;
//	string a;
//	string b;
//	string c;
//	getline(cin, c);
//	getline(cin, a);
//	getline(cin, b);
//	int count = 0;
//	for (int i = 0; i <= a.length() - 1; i++)
//	{
//		if (a[i] == b[i])
//			count++;
//	}
//	double k = (double)count / a.length();
//	if (k >= n)
//		printf("yes");
//	else
//		printf("no");
//	return 0;
//}


//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	string c;
//	
//	for (int i = 0; i <= n - 1; i++)
//	{
//		getline(cin, c);
//		string a, b;
//		getline(cin, a);
//		getline(cin, b);
//		if ((a == "Rock" && b == "Scissors") || (a == "Scissors" && b == "Paper") || (a == "Paper" && b == "Rock"))
//		{
//			printf("Player1\n");
//		}
//		else if ((b == "Rock" && a == "Scissors") || (b == "Scissors" && a == "Paper") || (b == "Paper" && a == "Rock"))
//		{
//			printf("Player2\n");
//		}
//		else
//			printf("Tie\n");
//	}
//	return 0;
//}


//using namespace std;
//string a;
//string b;
//int main()
//{
//	cin >> a;
//	for (int i = 0; i <= a.size() - 2; i++)
//	{
//
//		b[i] = a[i] + a[i + 1];
//	}
//	b[a.size() - 1] = a[a.size() - 1] + a[0];
//	for (int i = 0; i < a.size(); i++)
//		cout << b[i];
//	return 0;
//}

////using namespace std;
//int main()
//{
//	int c = 101;
//	char b = (int)c;
//	printf("%c", b);
//	return 0;
//}


//using namespace std;
//
//int main()
//{
//	string a, b[255];
//	cin >> a;
//	for (int i = 0; i <= a.length() - 1; i++)
//	{
//		if (a[i] == 'A')
//			b[i] = 'T';
//		else if (a[i] == 'G')
//			b[i] = 'C';
//		else if (a[i] == 'T')
//			b[i] = 'A';
//		else if (a[i] == 'C')
//			b[i] = 'G';
//	}
//	for (int i = 0; i <= a.length() - 1; i++)
//		cout << b[i];
//	return 0;
//}

//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i <= n - 1; i++)
//	{
//		string a;
//		cin >> a;
//		if (a[0] >= 'a'&&a[0]<='z')
//		{
//			a[0] -= 32;
//		}
//		for (int j = 1; j <= a.size() - 1; j++)
//		{
//			if (a[j] <= 'Z'&&a[j]>='A')
//			{
//				a[j] += 32;
//			}
//		}
//		for (int j = 0; j <= a.size() - 1; j++)
//			cout << a[j];
//	}
//	return 0;
//}


//using namespace std;
//int main()
//{
//	string a;
//	cin >> a;
//	int k = a.size() - 1;
//	if (k + 1 > 2&&a[k] == 'r' && a[k - 1] == 'e' && k + 1 > 2)
//	{
//		a[k] = '\0';
//		a[k - 1] = '\0';
//	}
//	else if (k + 1 > 3&&a[k] == 'g' && a[k - 1] == 'n' && a[k - 2] == 'i' && k + 1 > 3)
//	{
//		a[k] = '\0';
//			a[k - 1] = '\0';
//			a[k - 2] = '\0';
//	}
//	else if (k + 1 > 2&&a[k] == 'y' && a[k - 1] == 'l' && k + 1 > 2)
//	{
//		a[k] = '\0';
//		a[k - 1] = '\0';
//	}
//	cout << a;
//	return 0;
//}


//using namespace std;
//int main()
//{
//	string a;
//	getline(cin, a);
//	int sum = 0;
//	for (int i = 0; i <= a.size() - 2; i++)
//	{
//		if (a[i] != ' ')
//		{
//			sum++;
//		}
//		else if(a[i]==' '&&a[i+1]!=' ')
//		{
//			printf("%d,", sum);
//			
//			sum = 0;
//		}
//	}
//	printf("%d", sum + 1);
//	return 0;
//}





//using namespace std;
//int main()
//{
//	string a;
//	getline(cin, a);
//	int sum = 0;
//	int length1 = 0;
//	int length2 = 0;
//	char* p=NULL;
//	for (int i = 0; i <= a.size() - 1; i++)
//	{
//		if (a[i] != ' ' && a[i] != ',' && a[i] != '.')
//		{
//			sum++;
//		}
//		else
//		{
//			if (sum > length1)
//			{
//				p = &a[i];
//				length1 = sum;
//			}
//			sum = 0;
//		}
//	}
//	for (int i =length1; i >= 1; i--)
//	{
//		printf("%c", *(p-i));
//	}
//	cout << endl;
//	length2 = length1;
//	for (int i = 0; i <= a.size() - 1; i++)
//	{
//		if (a[i] != ' ' && a[i] != ',' && a[i] != '.')
//		{
//			sum++;
//		}
//		else
//		{
//			if (sum < length2)
//			{
//				p = &a[i];
//				length2 = sum;
//			}
//			sum = 0;
//		}
//	}
//	for (int i = length2; i >= 1; i--)
//	{
//		printf("%c", *(p - i));
//	}
//	return 0;
//}
//
//
//using namespace std;
//int main()
//{
//	string a;
//	getline(cin, a);
//	int sum = 0;
//	for (int i = 0; i <= a.length() - 1; i++)
//	{
//		if (a[i] != ' ' && a[i] != '.' && a[i] != '\0' && i != a.length() - 1)
//		{
//			sum++;
//		}
//		else
//		{
//			if (i == a.length() - 1)
//			{
//				sum++;
//				i++;
//			}
//			for (int j = 1; j <= sum; j++)
//			{
//				if(a[i-j]!='.')
//				cout << a[i - j];
//			}
//			printf("\n");
//			sum = 0;
//		}
//	}
//	return 0;
//}



//using namespace std;
//int main()
//{
//	int b[10]={0};
//	string a;
//	cin >> a;
//	for (int i = 0; i <= a.length() - 1; i++)
//	{
//		b[(int)a[i]-48]++;
//	}
//	for (int i = 0; i <= 9; i++)
//	{
//		if(b[i]!=0)
//		cout << b[i] << i;
//	}
//	return 0;
//}

//
//
//using namespace std;
//int main()
//{
//	string a;
//	string b;
//	cin >> a;
//	cin >> b;
//	cout << b[]
//}

//using namespace std;
//int main()
//{
//	string a;
//	cin >> a;
//	int sum = 1;
//	for (int i = 0; i <= a.length() - 2; i++)
//	{
//		if (a[i] == a[i + 1])
//		{
//			sum++;
//		}
//		else
//		{
//			printf("%d", sum);
//			cout << a[i];
//			sum = 1;;
//		}
//	}
//	if (a[a.length() - 2] == a[a.length() - 1])
//	{
//		cout << sum << a[a.length() - 1];
//	}
//	return 0;
//}

//using namespace std;
//int main()
//{
//	string a;
//	string b;
//	cin >> a;
//	for (int i = 0; i <= a.length() - 1; i++)
//	{
//		if (a[i] == a[a.length() - 1 - i])
//		{
//
//		}
//		else
//		{
//			printf("no");
//			return 0;
//		}
//	}
//	printf("yes");
//	return 0;
//}
//
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int m = -1;
//	string a;
//	for (int i = 0; i <= n - 1; i++)
//	{
//		int g;
//		string name;
//		cin >> g;
//		cin >> name;
//		if (m < g)
//		{
//			m = g;
//			a = name;
//		}
//	}
//	cout << a;
//	return 0;
//}



//using namespace std;
//int main()
//{
//	int k;
//	cin >> k;
//	string a;
//	cin >> a;
//	int sum = 1;
//	for(int i=0;i<=a.length() - 2; i++)
//	{ 
//		if (a[i] == a[i + 1])
//		{
//			sum++;
//	    }
//		if (sum == k)
//		{
//			cout << a[i];
//			return 0;
//		}
//		if (a[i] != a[i + 1])
//		{
//			sum = 1;
//		}
//		
//	}
//	printf("No");
//	return 0;
//}
//
//
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 2; i <= n; i++)
//	{   
//		int sum = 0;
//		for (int j = 1; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				sum += j;
//				sum += i / j;
//			}
//		}
//		sum -= i;
//		if (sum == i)
//		{
//			printf("%d", i);
//			cout << endl;
//		}
//	}
//	return 0;
//}



//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int sum = 0;
//	for (int i = 2; i <= n; i++)
//	{
//		int a = 0;
//		for (int j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				a = 1;
//				break;
//			}
//		}
//		if (a == 0)
//		{
//			sum++;
//		}
//	}
//	cout << sum;
//	return 0;
//}


//using namespace std;
//int main()
//{
//	int a, b, c;
//	cin >> a >>b>>c;
//	int d = max(max(a, b), c);
//	int e = max(max(a + b, b), c);
//	int f = max(max(a, b), b + c);
//	double m = (double)d / e / f;
//	printf("%.3lf",m );
//	return 0;
//}

//using namespace std;
//int main()
//{
//	int a, c;
//	char b;
//	cin >> a >> b >> c;
//	if (b == '+')
//	{
//		cout << a + c;
//	}
//	else if (b == '-')
//	{
//		cout << a - c;
//	}
//	else if (b== '*')
//	{
//		cout << a * c;
//	}
//	else if (b == '/')
//	{
//		cout << a / c;
//	}
//	else
//		cout << a % c;
//	return 0;
//}

//
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int sum == 0;
//	for (int i = 0; i <= n - 1; i++)
//	{
//		string n;
//		float t;
//		int c;
//		cin >> n >> t >> c;
//		if (t >= 37.5 && c == 1)
//		{
//			sum++;
//			cout << n << endl;
//		}
//	}
//	cout << sum;
//	return 0;
//}

//using namespace std;
//int main()
//{
//	int a = 0;
//	int c=0;
//	int b = 0;
//	int n;
//	cin >> n;
//	for (int i = 3; i <= n; i += 2)
//	{
//		a = 0;
//		for (int j = 3; j <= sqrt(i); j += 2)
//		{
//			if (i % j == 0)
//			{
//				a = 1;
//				break;
//			}
//		}
//		if (a == 0)
//		{
//			if (i - c == 2)
//			{
//				printf("%d %d", c, i);
//				cout << endl;
//				c = i;
//				b = 1;
//			}
//			else
//			{
//				c = i;
//			}
//		}
//	}
//	if (b == 0)
//		printf("empty");
//	return 0;
//}


//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1;; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			if ((i + 1) * i == 2 * n + 6*j)
//			{
//				cout << j << " " << i << endl;
//				return 0;
//			}
//		}
//	}
//	return 0;
//}

//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 3; i <= sqrt(n); i += 2)
//	{
//		if (n % i == 0)
//		{
//			int k=
//		}
//	}
//	return 0;
//}

//using namespace std;
//int main()
//{
//	string s[200];
//	string a, b;
//	int sum = 0;
//	cin >> s[sum];
//	while (getchar() == ' ')
//	{
//		sum++;
//		cin>> s[sum];
//	}
//	cin >> a >> b;
//	for (int i = 0; i <= sum; i++)
//	{
//		if (s[i] == a)
//		{
//			s[i] = b;
//			break;
//		}
//	}
//	for (int i = 0; i <= sum; i++)
//		cout << s[i] << " ";
//	return 0;
//}


//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int sum1 = 0;
//	for (int i = 11; i <= n; i++)
//	{   
//		int d = 0;
//		int sum = 0;
//		for (int j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				sum = 1;
//				break;
//			}
//		}
//		if (sum == 0)
//		{   
//			int c = i;
//			int f = 0;
//			while (c)
//			{
//				f = c % 10 + f * 10;
//				c /= 10;
//			}
//			
//			if(f==i)
//				sum1++;
//		}
//
//	}
//	cout << sum1;
//	return 0;
//}
//
//
//using namespace std;
//int main()
//{
//	long long n, m;
//	cin >> n >> m;
//	int sum1 = 0;
//	for (int i = n; i <= m; i++)
//	{
//		int sum = 0;
//		for (int j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				sum = 1;
//				break;
//			}
//		}
//		if (sum == 0)
//			sum1++;
//	}
//	if (n == 1)
//		cout << sum1 - 1;
//	else
//		cout << sum1;
//	return 0;
//}

//using namespace std;
//int main()
//{
//	int n, m;
//	cin >> m >> n;
//	int c = 0;
//	for (int i = m; i <= n; i++)
//	{
//		c = 0;
//		for (int j = 2; j <= i; j++)
//		{
//			int a = 0;
//			if (i % j == 0)
//			{
//				for (int k = 2; k <= sqrt(j); k++)
//				{
//					if (j % k == 0)
//					{
//						a = 1;
//						break;
//					}
//				}
//				if (a == 0 && j > c)
//				{
//					c = j;
//				}
//			}
//		}
//		if (i != n)
//			cout << c << ",";
//		else
//			cout << c;
//	}
//	return 0;
//}


#include <algorithm>
//using namespace std;
//int b[1000000];
//int main()
//{
//	int p = 0;
//	int m, n;
//	cin >> m >> n;
//	for (int i = m; i <= n; i++)
//	{
//		int a = 0;
//		for (int j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				a = 1;
//				break;
//			}
//		}
//		int d = 0;
//		if (a == 0)
//		{
//			int c = i;
//			while (c)
//			{
//				d = d * 10 + c % 10;
//				c /= 10;
//			}
//			for (int j = 2; j <= sqrt(d); j++)
//			{
//				if (d % j == 0)
//				{
//					a = 1;
//					break;
//				}
//			}
//		}
//		if (a == 0)
//		{
//			if (i >= m && i <= n)
//			{
//				b[p] = i;
//				if (d <= n&&d>=m)
//				{
//					b[++p] = d;
//				}
//				p++;
//			}
//		}
//	}
//	sort(&b[0], &b[p]);
//	for (int i = 0; i <= p - 2; i++)
//		if (b[i] != b[i + 1] && b[i] != 0)
//			cout << b[i] << ",";
//	if (b[p - 1] != 0)
//		cout << b[p - 1];
//	else
//		cout << "No";
//	return 0;
//}


//using namespace std;
//int main()
//{
//	int n,A=0,B=0;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{   
//		int a = 0;
//		int b = 0;
//		int count = 0;
//		int c = i;
//		while (c)
//		{
//			count = c & 1;
//			c=c >> 1;
//			if (count)
//				a++;
//			else
//				b++;
//		}
//		a > b ? A++ : B++;
//	}
//	cout << A << " " << B;
//	return 0;
////}
//
//
//using namespace std;
//int main()
//{
//	int p, q, r;
//	cin >> p >> q >> r;
//	for (int i = 2; i <= 16; i++)
//	{
//		int p2 = p;
//		int q2 = q;
//		int r2 = r;
//		int p1 = 0;
//		int q1 = 0;
//		int r1 = 0;
//		int j = 0;
//		while (p2 != 0 && (p2%10) <= i - 1)
//		{
//			p1 += (p2 % 10) * pow(i, j);
//			j++;
//			p2 /= 10;
//		}
//		if (p2 % 10 > i - 1)
//			continue;
//		j = 0;
//		while (q2 != 0 && (q2%10) <= i - 1)
//		{
//			q1 += (q2 % 10) * pow(i, j);
//			j++;
//			q2 /= 10;
//		}
//		if (q2 % 10 > i - 1)
//			continue;
//		j = 0;
//		while (r2 != 0 && (r2%10) <= i - 1)
//		{
//			r1 += (r2 % 10) * pow(i, j);
//			j++;
//			r2 /= 10;
//		}
//		if (r2 % 10 > i - 1)
//			continue;
//		if (p1 * q1 == r1)
//		{
//			cout << i;
//			return 0;
//		}
//	}
//	cout << 0;
//	return 0;
//}

//
//int sum(int x)
//
//{
//	if (x > 1)
//		return x + sum(x - 1);
//	else
//		return 1;
//}
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	cout<<sum(n);
//	return 0;
//}


//string c = "0123456789ABCDEF";
//void change(int x,int y)
//{
//	if (x / y)
//	{
//		change(x / y, y);
//	}
//	cout << c[x % y];
//}
//using namespace std;
//#define ll long long;
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	change(n, m);
//	return 0;
//}


//int akm(int m, int n)
//{
//	if (m == 0)
//	{
//		return n + 1;
//	}
//	else if (m > 0 && n == 0)
//	{
//		return akm(m - 1, 1);
//	}
//	else if (m > 0 && n > 0)
//	{
//		return akm(m - 1, akm(m, n - 1));
//	}
//}
//
//using namespace std;
//int main()
//{
//	int m, n;
//	cin >> m >> n;
//	cout<<akm(m, n);
//	return 0;
//}


//using namespace std;
//int main()
//{
//	int n, k;
//	cin >> n >> k;
//	for (int i = 1; i <= k-1; i++)
//	{
//		n /= 10;
//	}
//	cout << n % 10;
//	return 0;
//}


//int Hermite(int n, int x)
//{
//	if (n == 0)
//	{
//		return 1;
//	}
//	else if (n == 1)
//		return 2*x;
//	else if (n > 1)
//	{
//		return 2 * x * Hermite(n - 1, x) - 2 * (n - 1) * Hermite(n - 2, x);
//	}
//}
//using namespace std;
//int main()
//{
//	int n, x;
//	cin >> n >> x;
//	cout << Hermite(n, x);
//	return 0;
//}


//double function(double x, double n)
//{
//	if (n > 1)
//	{
//		return sqrt(n + function(x, n - 1));
//	}
//	else
//		return sqrt(1 + x);
//}
//using namespace std;
//int main()
//{
//	double x, n;
//	cin >> x >> n;
//	printf("%.2lf", function(x, n));
//	
//	return 0;
//}

//
//double functio(double x, int n)
//{
//	if (n > 1)
//	{
//		return x / (n + functio(x, n - 1));
//	}
//	else 
//	{
//		return x / (1 + x);
//	}
//}
//using namespace std;
//int main()
//{
//	double x;
//	int n;
//	cin >> x;
//	cin >> n;
//	printf("%.2lf", functio(x, n));
//	return 0;
//}


//#include<cmath>
//using namespace std;
//int main()
//{
//	int x1, y1, x2, y2, x3, y3;
//	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
//	double a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
//	double b = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
//	double c = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
//	double s = (a + b + c) / 2;
//	int square = round(sqrt(s * (s - a) * (s - b) * (s - c)));
//	cout << square;
//	return 0;
//}


//using namespace std;
//int a[1001] = { 0 };
//int main()
//{
//	long long n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		int k;
//		cin >> k;
//		if (k != n&&k!=1)
//		{
//			if (a[k + 1] == 0)
//				a[k + 1] = 1;
//			else
//				a[k + 1] = 0;
//			if (a[k] == 0)
//				a[k] = 1;
//			else
//				a[k] = 0;
//			if (a[k - 1] == 0)
//				a[k - 1] = 1;
//			else
//				a[k - 1] = 0;
//		}
//		if (k == n)
//		{
//			if (a[k - 1] == 0)
//				a[k - 1] = 1;
//			else
//				a[k - 1] = 0;
//			if (a[k] == 0)
//				a[k] = 1;
//			else
//				a[k] = 0;
//			if (a[1] == 0)
//				a[1] = 1;
//			else
//				a[1] = 0;
//		}
//		if (k == 1)
//		{
//			if (a[n] == 0)
//				a[n] = 1;
//			else
//				a[n] = 0;
//			if (a[k] == 0)
//				a[k] = 1;
//			else
//				a[k] = 0;
//			if (a[2] == 0)
//				a[2] = 1;
//			else
//				a[2] = 0;
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		cout << a[i] << " ";
//	}
//}



//using namespace std;
//int main()
//{
//	int x;
//	cin >> x;
//	printf("I am %d years old.", x);
//	return 0;
//}



//using namespace std;
//int main()
//{
//	string a;
//	cin >> a;
//	string b = "luogu";
//	int count = 0;
//	for (int i = 0; i <= a.length() - 1; i++)
//	{
//		if (a[i] == 'l')
//		{
//			char * p = &a[i];
//			for (int j = 0; j <= 4; j++)
//			{
//				if (*p == b[j])
//				{
//					p++;
//				}
//				else 
//					break;
//				if (j == 4)
//				{
//					count++;
//				}
//
//			}
//		}
//	}
//	cout << count;
//	return 0;
//}


//int a[10002][10002];
//using namespace std;
//int main()
//{
//	long n, m;
//	cin >> n >> m;
//	int count = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//	int T;
//	cin >> T;
//	for (int i = 0; i <= T - 1; i++)
//	{
//		int x1, y1, x2, y2;
//		cin >> x1 >> y1 >> x2 >> y2;
//		int tmp = a[x1][y1];
//		a[x1][y1] = a[x2][y2];
//		a[x2][y2] = tmp;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			if (a[i][j] > a[i - 1][j] && a[i][j] > a[i + 1][j] && a[i][j] > a[i][j - 1] && a[i][j] > a[i][j + 1])
//			{
//				count++;
//			}
//		}
//	}
//	cout << count << endl;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			if (a[i][j] > a[i - 1][j] && a[i][j] > a[i + 1][j] && a[i][j] > a[i][j - 1] && a[i][j] > a[i][j + 1])
//			{
//				cout << i << " " << j << endl;
//			}
//		}
//	}
//	return 0;
//}

using namespace std;
int main()
{
	return 0;
}