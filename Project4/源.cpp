#include<stdio.h>
//int Add(int x, int y)
//{
	//int z = 0;
	//z = x + y;
	//return z;

//}
//int main()
//{
	//printf("比特\n");
	//int a = 0;
	//int b = 0;
	//int sum = 0;
	//scanf_s("%d %d", &a, &b);
	//sum = a + b;
	//printf("sum=%d\n", sum);
	//printf("%c\n", '\'');
	//printf("\a\a\a");
	//c++注释风格
	/*c语言注释风格*/
	//int line=0;
	//while (line<30000)
	//{
		//printf("写代码：%d\n", line);
		//line++;
	//}
	//if (line=30000)
	//{
		//printf("好offer\n");
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
			printf("成年\n");
		else
		{
			printf("未成年\n");
			printf("不能谈恋爱");
		}

		return 0;
}*/
	/*int main()
	{
		int age;
		scanf_s("%d", &age);
		if (age < 18)
			printf("少年\n");
		else if (age >= 18 && age <= 26)
			printf("青年\n");
		else if (age > 26 && age < 40)
			printf("壮年\n");
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
			printf("星期1\n");
			break;
		case 2:
			printf("星期2\n");
			break;
		case 3:
			printf("星期3\n");
			break;
		case 4:
			printf("星期4\n");
			break;
		case 5:
			printf("星期5\n");
			break;
		case 6:
			printf("星期6\n");
			break;
		case 7:
			printf("星期天\n");
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
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
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
//	printf("输入密码:");
//	scanf_s("%s", password);
//	printf("确认密码:");
////清理缓冲区的多个字符
//	int t = 0;
//	while ((t = getchar()) != '\n')
//	{
//		;
//	}
//	int ch = getchar();
//	if (ch == 'y')
//		printf("确认成功\n");
//	else
//		printf("确认失败\n");
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
//			printf("找到了,下标是:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("没有\n");
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
//		printf("请输入密码\n");
//		scanf_s("%s", password, sizeof(password));
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登录成功");
//			break;
//		}
//		else
//			printf("密码错误,重新输入\n");
//	}
//	if (i == 3)
//		{
//			printf("三次密码错误，退出程序\n");
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
//	//控制行数
//	for (i = 1; i <= 9; i++)
//	{
//		//打印每一行内容，每行有i个表达式
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int d = 0;
	int x = 0;
	int l = 0;
	int p = 0;
	int k = 0;


	return 0;
}