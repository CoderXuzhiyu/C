#include<stdio.h>
//int Add(int x, int y)
//{
	//int z = 0;
	//z = x + y;
	//return z;

//}
//int main()
//{
	//printf("����\n");
	//int a = 0;
	//int b = 0;
	//int sum = 0;
	//scanf_s("%d %d", &a, &b);
	//sum = a + b;
	//printf("sum=%d\n", sum);
	//printf("%c\n", '\'');
	//printf("\a\a\a");
	//c++ע�ͷ��
	/*c����ע�ͷ��*/
	//int line=0;
	//while (line<30000)
	//{
		//printf("д���룺%d\n", line);
		//line++;
	//}
	//if (line=30000)
	//{
		//printf("��offer\n");
	//}
	//int num1 = 0;
	//int num2 = 0;
	//scanf_s(" %d %d", &num1, &num2);
	//int sum = Add(num1, num2);
	//printf("%d\n", sum);
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//char ch[5] = { 'a','b','c' };
	//int arr[10] = { 0 };
	//printf("%d\n", sizeof(arr));
	//printf("%d\n", sizeof(arr[0]));
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//printf("%d\n", sz);
	//int a = (int)3.14;
	//printf("%d\n", a);
	//int a = 3;
	//int b = 0;
	//int max = 0;
	//int c = a && b;
	//printf("%d\n", c);
	//if (a > b)
		//max = a;
	//else
		//max = b;
	//max = a > b ? a : b;
	//printf("%d\n", max);
	//extern int g;
	//printf("%d\n", g);
	//extern int Add(int x, int y);
	//int a = 2;
	//int b = 4;
	//int sum = Add(a, b);
	//printf("%d\n", sum);
//#define ADD(x,y) ((x)+(y))
	//printf("%d\n", 4*ADD(2, 3));
	//int a = 4;
	//printf("%p\n", &a);
	//int* pa = &a;
	//char ch = 'w';
	//char* pc = &ch;
	//return 0;
//}
	//int main()
//{
		//int a = 0;
		//int* pa = &a;
		//*pa = 20;
		//printf("%d\n", a);
	//return 0;
//}
//int main()
//{
	//printf("%d\n", sizeof(char*));
	//printf("%d\n", sizeof(short*));
	//printf("%d\n", sizeof(int*));
	//printf("%d\n", sizeof(long*));
	//printf("%d\n", sizeof(long long*));
	//printf("%d\n", sizeof(float*));
	//printf("%d\n", sizeof(double*));
	//return 0;
//}



	struct stu
	{
		char name[20];
		int age;
		double score;
	};
	
	//int main()
//{
		//struct stu s = { "b",20,85.5 };
		//printf("1: %s %d %lf\n", s.name, s.age, s.score);

		//struct stu* ps = &s;
		//printf("2: %s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);

		//printf("3: %s %d %lf\n", ps->name, ps->age, ps->score);
		//return 0;
//}
#include<stdio.h>

	///*int main()

	//{

	//	int a = 10;

	//	int b;
	//	int n;
	//	scanf_s("%d %d", &a, &b);

	//	if (a > b)

	//		 n = a;

	//	else

	//		 n = b;

	//	printf("%d\n", n);

	//	return 0;*/

	//}
	/*int main()
	{
		int a = 10;
		if (a >= 18)
			printf("����\n");
		else
		{
			printf("δ����\n");
			printf("����̸����");
		}

		return 0;
}*/
	/*int main()
	{
		int age;
		scanf_s("%d", &age);
		if (age < 18)
			printf("����\n");
		else if (age >= 18 && age <= 26)
			printf("����\n");
		else if (age > 26 && age < 40)
			printf("׳��\n");
		;

		return 0;
}*/
	/*int main()
	{
		int num = 3;
		if (5 == num)
			printf("hehe\n");
		return 0;
	}*/
	/*int main()
	{
		for (int i = 1; i <= 100; i++)
		{
			if (i % 2 == 1)
				printf(" %d ", i);
		}
		return 0;
	}*/
	/*int main()
	{
		int day;
		scanf_s("%d", &day);
		switch (day)
		{
		case 1:
			printf("����1\n");
			break;
		case 2:
			printf("����2\n");
			break;
		case 3:
			printf("����3\n");
			break;
		case 4:
			printf("����4\n");
			break;
		case 5:
			printf("����5\n");
			break;
		case 6:
			printf("����6\n");
			break;
		case 7:
			printf("������\n");
			break;
		
		}
		return 0;
	}*/
//int main()
//{
//	int day;
//	scanf_s("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//		{
//			break;
//		}
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	
//	return 0;
//}
//int main()
//{
//	int ch = getchar();
//	//printf("%c\n", ch);
//	putchar(ch);
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}
#include<stdio.h>

//int main()
//{
//	char password[20] = { 0 };
//	printf("��������:");
//	scanf_s("%s", password);
//	printf("ȷ������:");
////���������Ķ���ַ�
//	int t = 0;
//	while ((t = getchar()) != '\n')
//	{
//		;
//	}
//	int ch = getchar();
//	if (ch == 'y')
//		printf("ȷ�ϳɹ�\n");
//	else
//		printf("ȷ��ʧ��\n");
//	return 0;
//}
//int main()
//{
//	
//	for (int i=1;i<=10;i++)
//	{
//		printf ("%d", i);
//	}
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	do
//	{
//		if (i == 5)
//		{
//			break;
//	}
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int n = 0;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right)/2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ���,�±���:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("û��\n");
//	}
//	return 0;
//}
#include<string.h>
#include<windows.h>
//int main()
//{
//	char arr1[] = {"welcome to bit!!!!" };
//	char arr2[] = { "##################"};
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(300);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
//int main()
//{
//	 int i ;
//	 char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������\n");
//		scanf_s("%s", password, sizeof(password));
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��¼�ɹ�");
//			break;
//		}
//		else
//			printf("�������,��������\n");
//	}
//	if (i == 3)
//		{
//			printf("������������˳�����\n");
//		}
//	   
//	return 0;
//}
//int main()
//	{
//	int i;
//	for (i = 1000; i <=2000; i++)
//	{
//		if ((i - 1000) % 4 == 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//	}
//int main()
//{
//	int i;
//	for (int n = 100; n <= 200; n++)
//	{
//		for (i = 2; i < n; i++)
//		{
//			if (n % i == 0)
//			{
//				break;
//			}
//		}
//		if (i == n)
//		{
//			printf("%d\n", n);
//		}
//
//	}
//	return 0;
//}
//int main()
//{
//	int a;
//	int b;
//	int c;
//	int min;
//	int medium;
//	int max;
//	int mid ;
//	scanf_s("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		min = a;
//		medium = b;
//	}
//	else
//	{
//		min = b;
//		medium = a;
//	}
//	if (c < min)
//	{
//		mid = min;
//		min = c;
//		max = medium;
//		
//	}
//	else if (c > min && c < medium)
//	{
//		max = medium;
//		mid = c;
//	}
//	else
//	{
//		max = c;
//		mid = medium;
//	}
//printf("%d %d %d", max, mid, min);
//	return 0;
//}
//int main()
//{
//	int i;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d\n", i);
//	}
//	return 0;
//}
#include <math.h> 
//double pow(double x, double y);
//int main()
//{
//	int i;
//	double sum=0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += (pow(-1,(i-1))) * 1.0/ i;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
	//int main()
	//{
	//	int i = 0;
	//	double sum = 0;
	//	int flag = 1;
	//	for (i = 1; i <= 100; i++)
	//	{
	//		sum = sum + flag * (1.0 / i);
	//		flag = -flag;
	//	}
	//	printf("%lf ", sum);

	//	return 0;
	//}
//int main()
//{
//	int i;
//	int max;
//	int arr[10] = { 0 };
//	for (i = 0; i <= 9; i++)
//	{
//		scanf_s("%d\n", &arr[i]);
//	}
//	max = arr[0];
//	for (i = 1; i <= 9; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("%d\n", max);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	//��������
//	for (i = 1; i <= 9; i++)
//	{
//		//��ӡÿһ�����ݣ�ÿ����i�����ʽ
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int d = 0;
//	int x = 0;
//	int l = 0;
//	int p = 0;
//	int k = 0;
//
//
//	int v = 0;
//	int g = 0;
//	int y = 0;
//
//	int j = 0;
//	int u = 0;
//	int t = 0;
//	return 0;
//}
//
// 
// {int get_max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//	{
//		z = x;
//	}
//	else z = y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}}

//�����������͵ĵط�д�ɣ�void����ʾ��������������κ�ֵ��Ҳ����Ҫ���ء�

//{void Swap(int* pa, int* pb)
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//    *pb= z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("����ǰ��a=%d,b=%d\n", a,b);
//	Swap(&a, &b);
//	printf("������: a=%d,b=%d\n", a,b);
//	return 0;
//}}
//
// 
// 
// {int prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <=sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int count=0;
//	int i;
//	for (i = 100; i <= 200; i++)
//	{
//		if (prime(i) == 0)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}}
//
// 
// 
// {int run(int x)
//{
//	if ((x % 4 == 0 && x%100!=0) || x % 400 == 0)
//	{
//		return 0;
//	}
//	else
//
//	return 1;
//}
//int main()
//{
//	int s;
//	scanf_s("%d", &s);
//	if (run(s) == 0)
//	{
//		printf("%d������\n", s);
//	}
//	else
//		printf("%d��������\n", s);
//	return 0;
//}}



//int binary_search(int a[], int k, int s)
//{
//	int left = 0;
//	int right = s - 1;
//	while (left <= right)
//	{
//		int mid = (left + right)/2;
//		if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (a[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, key, sz);
//	if (-1 == ret)
//	{
//		printf("�Ҳ�����\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}

// return 0;
//}
//void print(unsigned int n)
//{
//	if (n > 9)
//		print(n / 10);
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf_s("%d", &num);
//	print(num);
//	return 0;
//}
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//int main()
//{   
//	char arr[] = "bite";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}
//int Fib(int n)
//{
	/*if (n <= 2)
		return 1;
	else 
		return Fib(n - 1) + Fib(n - 2);*/
//	int c = 1;
//	int a = 1;
//	int b = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//int main()
//{
//	//int arr[8];
//	//char ch[5];
//	/*char ch5[] = "bit";
//	char ch6[] = { 'b','i','t' };
//	printf("%s\n",ch5);
//	printf("%s\n", ch6);*/
//	int arr[10] = { 1 };
//	arr[4] = 5;
//	//printf("%d\n", arr[4]);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;



// int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	///*printf("%x\n", 0x12);
//	//printf("%p\n", 0x12);*/
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	printf("&arr[%d]=%p\n", i, &arr[i]);
//	//}
//	int* p = arr;
//	for (int i = 0; i <= 9; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}
//int main()
//{
//	//int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	//int arr[3][4] = { 1,2,3,4,5,6,7 };
//	//int arr[3][4] = { {1,2},{3,4},{5,6} };
//	int arr[][4] = { {1,2},{3,4},{5,6} };
//	int i;
//	int j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//		/*	printf("%d ", arr[i][j]);*/
//			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);
//		}
//		/*printf("\n");*/
//	}
//	return 0;



//void bubble_sort(int arr[], int sz)
//{
//	int i;
//	for (i = 0; i < sz - 1; i++)
//	{   
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j+1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	return 0;
//}
//int main()
//{
//	return 0;
//}



// int prime(int x)
//{
//	for (int i = 2; i <= x / 2; i++)
//	{
//		if (x % i == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	for (int i = 100; i <= 200; i++)
//	{
//		if(prime(i)==0)
//			printf("%d\n",i);
//	}
//	return 0;
//}



// void runnian(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0)
//		printf("%d������\n", x);
//	else
//		printf("%d��������\n", x);
//}
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	runnian(n);
//	return 0;
//}



// void change(int* x, int* y)
//{
//	int tmp;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//
//}
//int main()
//{
//	int x, y;
//	scanf_s("%d %d", &x, &y);
//	printf("%d %d\n", x, y);
//	change(&x, &y);
//	printf("%d %d\n", x, y);
//	return 0;
//}



//void  multiplication_table(int x)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= x; i++)
//	{
//		for (j = 1; j<= i; j++)
//		{
//			printf("%-2d*%-2d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf_s("%d", &x);
//	multiplication_table(x);
//	return 0;
//}



//void print(int x)
//{
//	if (x > 9)
//	{
//		printf("%d ", x % 10);
//		print(x / 10);
//	}
//	else
//		printf("%d ", x);
//}
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	print(n);
//	return 0;
//}



//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	int ret=1;
//	for (int i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}



//int ret(int n)
//{   
//	if (n > 1)
//	{   
//		return n* ret(n - 1);
//	}
//	return n;
//}
//int main()
//{
//	int n;
//    scanf_s("%d", &n);
//	printf("%d\n",ret(n));
//	return 0;
//}



//int strlen1(char* p)
//{
//	int count = 0;
//	while (*p != '\0')
//	{
//		count++;
//			p++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "bite";
//	printf("%d\n", strlen1(arr));
//	return 0;
//}


//
//int strlen1(char* p)
//{
//	if (*p != '\0')
//	{
//		return 1 + strlen1(p + 1);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bite";
//	printf("%d\n", strlen1(arr));
//	return 0;
//}



//void reverse_string(char* string,int sz)
//{
//	int i = 0;
//	for (i = 0; i < (sz-1) / 2; i++)
//	{
//		char tmp;
//		tmp = *(string+i);
//		*(string + i) = *(string + sz - 2 - i);
//		*(string + sz - 2 - i) = tmp;
//
//
//	}
//}
//int main()
//{   
//	char arr[] = "abcdef";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse_string(arr, sz);
//	printf("%s\n", arr);
//	return 0;
//}



//void reverse_string(char* string,char* p)
//{ 
//	if (string < p)
//	{   
//		char tmp;
//		tmp = *string;
//		*string = *p;
//		*p = tmp;
//		reverse_string((string + 1), (p - 1));
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	char* p = &arr[sz - 2];
//	reverse_string(arr,p);
//	printf("%s\n", arr);
//}



//int digitsum(int n)
//{
//	if (n > 9)
//	{   
//		return n%10 + digitsum(n / 10);
//	}
//	else
//	{
//		return n;
//	}
//
//}
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	printf("%d\n", digitsum(n));
//	return 0;
//}



// //int pow1(int n, int k)
//{
//	int ret = 1;
//	while (k > 1)
//	{
//		ret *= n;
//		k--;
//	}
//	if (k == 1)
//	{
//		ret *= n;
//		return ret;
//	}
//	return 0;
//}
//int main()
//{
//	int n, k;
//	scanf_s("%d%d", &n, &k);
//	printf("%d\n", pow1(n, k));
//	return 0;
//}


//void init(int* p)
//{
//	for (int i = 0; i <= 9; i++)
//	{
//		*(p + i) = 0;
//	}
//}
//void print(int* p)
//{
//	for (int i = 0; i <= 9; i++)
//	{
//		printf("%d\n", *(p+i));
//	}
//}
//int main()
//{
//	int arr[10] = {1};
//	init(arr);
//	print(arr);
//}



//void change(int* x, int* y)
//{
//	for (int i = 0; i <= 2; i++)
//	{
//		int tmp;
//		tmp = *(x+i);
//		*(x + i) = *(y + i);
//		*(y + i) = tmp;
//	} 
//}
//int main()
//{
//	int arr[3] = { 1,2,3 };
//	int arr1[3] = { 4,5,6 };
//	change(arr, arr1);
//	for (int i = 0; i <= 2; i++) 
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	for (int i = 0; i <= 2; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}
void menu()
{
	printf("**********************\n*");
	printf("*****  1.play  ********\n");
	printf("*****  0.exit  ********\n");
	printf("***********************\n");
}
////int main()
////{
////	int input = 0;
////	do
////	{
////		menu();
////		printf("��ѡ��");
////		scanf_s("%d", &input);
////		switch (input)
////		{
////		case 1:
////			game();
////			break;
////		case 0:
//			printf("��Ϸ����\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
//			break;
//		}
//	} while (input);
//	return 0;
//void function(int x)
//{
//
//}
//void function2(char arr[])
//{
//
//}
//int main()
//{
//	
//	return 0;
//}
int main()
{
	int a = 6 / 5;
	 a = 6.0 / 5.0;
	printf("%f\n", a);
	return 0;
	a = a >> 3;
	a >>= 3;
	printf("%d\n", a);
}
