#define _CRT_SECURE_NO_WARNINGS 1
//小学数学 N合一
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//using namespace std;
//int main() {
//    int T;
//    cin >> T;
//    if (T == 1) {
//        cout << "I love Luogu!";
//    }
//    else if (T == 2) {
//        cout << 2 + 4 << " " << 10 - 2 - 4;
//    }
//    else if (T == 3) {
//        cout << 3 << endl << 12 << endl << 2 << endl;
//    }
//    else if (T == 4) {
//        printf("%.3lf\n", 500.0 / 3.0);
//    }
//    else if (T == 5) {
//        cout << 15 << endl;
//    }
//    else if (T == 6) {
//        cout << sqrt(6 * 6 + 9 * 9) << endl;
//    }
//    else if (T == 7) {
//        cout << 110 << endl << 90 << endl << 0 << endl;
//    }
//    else if (T == 8) {
//        double const pi = 3.141593;
//        double const r = 5;
//        cout << pi * r * 2 << endl << pi * r * r << endl << 4.0 / 3 * pi * r * r * r << endl;
//    }
//    else if (T == 9) {
//        cout << 22 << endl;
//    }
//    else if (T == 10) {
//        cout << 9 << endl;
//    }
//    else if (T == 11) {
//        cout << 100.0 / (8 - 5) << endl;
//    }
//    else if (T == 12) {
//        cout << 13 << endl << "R" << endl;
//    }
//    else if (T == 13) {
//        double const pi = 3.141593;
//        double V = pi * 4 * 4 * 4 * 4 / 3 + pi * 10 * 10 * 10 * 4 / 3;
//        cout << floor(pow(V, 1.0 / 3)) << endl;
//    }
//    else if (T == 14) {
//        cout << 50 << endl;
//    }
//    return 0;
//}
//// 苹果和虫子
//int max(int m, int n)
//{
//	if (m > n)
//	{
//		return m;
//	}
//	else
//	{
//		return n;
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int m, t, s,a;	
//	scanf("%d %d %d", &m, &t, &s);
//	if (t == 0)
//	{
//		printf("0");
//		return 0;
//	}
//	if (t != 0)
//	{
//		if (s % t == 0)
//		{
//			int a = max(m - s / t, 0);
//			printf("%d", a);
//		}
//		else
//		{
//			int a = max(m - s / t - 1, 0);
//			printf("%d", a);
//		}
//	}
//	return 0;
//}
// 清华
//int max(int m, int n)
//{
//	if (m > n)
//	{
//		return m;
//	}
//	else
//	{
//		return n;
//	}
//}
//#include<stdio.h>
//int main() {
//	int  m, t, s;
//	scanf("%d%d%d", &m, &t, &s);
//	if (t == 0)printf("0");
//	if (t != 0)
//	{
//		if (s % t == 0)
//		{ 
//			int a = max(m - s / t, 0);
//			printf("%d", a);
//		}
//		else
//		{ 
//			int a = max(m - s / t - 1, 0);
//			printf("%d", a);
//		}
//	}
//	return 0;
//}
//数的性质
//#include <stdio.h>
//int main()
//{
//	int x;
//	scanf("%d", &x);
//	if (x > 4 && x <= 12 && x % 2 == 0)
//	{
//		printf("1 ");
//	}
//	else if (x % 2 != 0)
//	{
//		printf("0 ");
//	}
//	else if (x <= 4 || x > 12)
//	{
//		printf("0 ");
//	}
//	//
//	if (x > 4 && x <= 12)
//	{
//		printf("1 ");
//	}
//	else if (x % 2 == 0)
//	{
//		printf("1 ");
//	}
//	else
//	{
//		printf("0 ");
//	}
//	//
//	if (x > 4 && x <= 12 && x % 2 == 0)
//	{
//		printf("0 ");
//	}
//	else if (x <= 4 || x > 12 && x % 2 != 0)
//	{
//		printf("0 ");
//	}
//	else if(x > 4 && x<=12&&x%2!=0)
//	{
//		printf("1 ");
//	}
//	else if (x <= 4 || x > 12 && x % 2 == 0)
//	{
//		printf("1 ");
//	}
//	//
//	if (x % 2 != 0 && x <= 4 || x > 12)
//	{
//		printf("1");
//	}
//	else
//	{
//		printf("0");
//	}
//
//	return 0;
//}
//闰年判断
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n >= 1582 && n <= 2020)
//	{
//		if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
//		{
//			printf("1");
//		}
//		else
//		{
//			printf("0");
//		}
//	}
//	return 0;
//}
//Apples
//#include <stdio.h>
//int main()
//{
//	int x;
//	scanf("%d", &x);
//	if (x == 0)
//	{
//		printf("Today, I ate 0 apple.");
//	}
//	else if(x==1)
//	{
//		printf("Today, I ate 1 apple.");
//	}
//	else if (x > 1 && x <= 100)
//	{
//		printf("Today, I ate %d apples.", x);
//	}
//	return 0;
//}
//洛谷团队系统
//#include <stdio.h>
//int main()
//{
//	int i, j, n;
//	scanf("%d", &n);
//	i = n * 5;
//	j = 11 + n * 3;
//	if (i > j)
//	{
//		printf("Luogu");
//	}
//	else
//	{
//		printf("Local");
//	}
//	return 0;
//}
//肥胖问题
//#include <stdio.h>
//int main()
//{
//	float m, n,BMI;
//	scanf("%f %f", &m, &n);
//	BMI = m / (n * n);
//	if (BMI < 18.5)
//	{
//		printf("Underweight\n");
//	}
//	else if (BMI >= 18.5 && BMI < 24)
//	{
//		printf("Normal\n");
//	}
//	else
//	{
//		printf("%g\n",BMI);
//		printf("Overweight");
//	}
//	return 0;
//}
////三位数排序
//#include <stdio.h>
//int main()
//{
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//    if (a < b && a < c)
//    {
//        printf("%d ", a);
//        if (b > c)
//        {
//            printf("%d %d", c, b);
//        }
//        else
//        {
//            printf("%d %d", b, c);
//        }
//    }
//    if (b < a && b < c)
//    {
//        printf("%d ", b);
//        if (a > c)
//        {
//            printf("%d %d", c, a);
//        }
//        else
//        {
//            printf("%d %d", a, c);
//        }
//    }
//    if (c < b && c < a)
//    {
//        printf("%d ", c);
//        if (a > b)
//        {
//            printf("%d %d", b, a);
//        }
//        else
//        {
//            printf("%d %d", a, b);
//        }
//    }
//    if (a == b && a == c)
//    {
//        printf("%d %d %d", a, b, c);
//    }
//    return 0;
//}
//月份天数
//#include <stdio.h>
//int main()
//{
//	int a,b;
//	
//	scanf("%d %d", &a, &b);
//	if (a >= 1583 && a <= 2020 && b >= 1 && b <= 12)
//	{
//
//
//		if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
//		{
//			if (b == 2)
//			{
//				printf("29");
//			}
//			else if (b >= 1 && b <= 7 && b % 2 == 1 || b >= 8 && b <= 12 && b % 2 == 0)
//			{
//				printf("31");
//			}
//			else 
//			{
//				printf("30");
//			}
//
//		}
//		else
//		{
//			if (b == 2)
//			{
//				printf("28");
//			}
//			else if (b >= 1 && b <= 7 && b % 2 == 1 || b >= 8 && b <= 12 && b % 2 == 0)
//			{
//				printf("31");
//			}
//			else
//			{
//				printf("30");
//			}
//		}
//	}
//	return 0;
//}
//不高兴的津津
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int c = 7;
//	int time1 = 0;
//	int time2 = 0;
//	int time3 = 0;
//	int max = 0;
//	int count = 0;
//	for (a = 0; a < c; a++)
//	{
//		scanf("%d %d", &time1,&time2);
//		time3 = time1 + time2;
//		if(time3>8)
//		{
//			if (time3 > max)
//			{
//				count = a + 1;
//				max = time3;
//			}
//			
//
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
// 清华
//#include<stdio.h>
//int main() {
//	int a[7], b[7], c[7], i, n=0, max = 0;
//	for (i = 0; i < 7; i++)
//	{
//		scanf("%d %d\n", &a[i], &b[i]);
//		c[i] = a[i] + b[i];
//		if (c[i] > 8)
//		{
//			if (c[i] > max)
//			{
//				n = i + 1;
//				max = c[i];
//			}
//		}
//	}
//	printf("%d", n);
//	//for (i = 6; i >= 0; i--)
//	//{
//	//	if (c[i] > max) max = c[i];
//	//}
//	//for (i = 6; i >= 0; i--)
//	//{
//	//	if (max > 8 && max == c[i])n = i;
//	//	else  printf("0");
//	//}
//	//printf("%d", n + 1);
//	return 0;
//}

//买铅笔
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int box1, price1, box2, price2, box3, price3;
//	int m1, m2, m3;
//	scanf("%d", &n);
//	scanf("%d %d", &box1, &price1);
//	scanf("%d %d", &box2, &price2);
//	scanf("%d %d", &box3, &price3);
//	if (n % box1 < box1)
//	{
//		m1 = price1 * (n / box1 + 1);
//	}
//	if (n % box2 < box2)
//	{
//		m2 = price2 * (n / box2 + 1);
//	}
//	if (n % box3 < box3)
//	{
//		m3 = price3 * (n / box3 + 1);
//	}
//	if (n % box1==0)
//	{
//		m1 = price1 * (n / box1 );
//	}
//	if (n % box2 ==0)
//	{
//		m2 = price2 * (n / box2 );
//	}
//	if (n % box3 ==0)
//	{
//		m3 = price3 * (n / box3 );
//	}
//	if (m1 < m2 && m1 < m3)
//	{
//		printf("%d",m1);
//	}
//	else if (m2 < m1 && m2 < m3)
//	{
//		printf("%d", m2);
//	}
//	else if (m3 < m1 && m3 < m2)
//	{
//		printf("%d", m3);
//	}
//	return 0;
//}
//三角形分类
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n = 0;
//	int arr[3];
//	int i = 0;
//	for (n = 0; n <= 3; n++)
//	{
//		scanf("%d ", &arr[n]);
//	}
//	for (n = 0; n < 3; n++)
//	{
//		int flag = 1;
//		for (i = 0; i < 2 - n; i++)
//		{
//			int tmp = 0;
//			if (arr[i] > arr[i + 1])
//			{
//				tmp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//	if (arr[0] + arr[1] <= arr[2])
//	{
//		printf("Not triangle\n");
//		return 0;
//	}
//	if ((arr[0] * arr[0]) + (arr[1] * arr[1]) == arr[2] * arr[2])
//	{
//		printf("Right triangle\n");
//	}
//	else if ((arr[0] * arr[0]) + (arr[1] * arr[1]) > arr[2] * arr[2])
//	{
//		printf("Acute triangle\n");
//	}
//	else if ((arr[0] * arr[0]) + (arr[1] * arr[1]) < arr[2] * arr[2])
//	{
//		printf("Obtuse triangle\n");
//	}
//	if (arr[0] == arr[1] || arr[0] == arr[2] || arr[1] == arr[2])
//	{
//		printf("Isosceles triangle\n");
//	}
//	if (arr[0] == arr[1] && arr[1] == arr[2])
//	{
//		printf("Equilateral triangle\n");
//	}
//	return 0;
//}
//小玉家的电费
//#include <stdio.h>
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	if (x <= 150)
//	{
//		printf("%.1f", x * 0.4463);
//	}
//	if (x > 150 && x <= 400)
//	{
//		printf("%.1f", 150 * 0.4463 + (x - 150) * 0.4663);
//	}
//	if (x > 400)
//	{
//		printf("%.1f", 150 * 0.4463 + 250 * 0.4663 + (x - 400) * 0.5663);
//	}
//	return 0;
//}
//小鱼的航程
//#include <stdio.h>
//int main()
//{
//	int x, n,i,sum=0;
//	scanf("%d %d", &x, &n);
//	for (i = 0; i < n; i++)
//	{
//		if (x != 6 && x != 7)
//		{
//			sum += 250;
//		}
//		else if (x == 7)
//		{
//			x = 0;
//		}
//		x++;
//	}
//	printf("%d", sum);
//	return 0;
//}
//三角函数
//#include <stdio.h>
//int qsort(int x, int y)
//{
//	int z = 0;
//	while (x % y)
//	{
//		z = x % y;
//		x = y;
//		y = z;
//	}
//	return y;
//}
//void bottle_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//			
//		}
//		if (flag ==1 )
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[3];
//	int i = 0;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d ", &arr[i]);
//	}
//	//求最大公约数
//
//	//冒泡排序
//
//	bottle_sort(arr, sz);
//	ret = qsort(arr[0], arr[2]);
//	printf("%d/%d", arr[0] / ret, arr[2] / ret);
//	return 0;
//}
//陶陶摘苹果
//#include <stdio.h>
//int main()
//{
//	int arr[10];
//	int n = 0;
//	int count = 0;
//	int i, j;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d ", &arr[i]);
//	}
//
//	printf("\n");
//	scanf("%d", &n);
//	for (j = 0; j < 10; j++)
//	{
//		if (n + 30 >= arr[j])
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//ABC
//#include <stdio.h>
//int main()
//{
//	int arr[3];
//	char A, B, C;
//	for (int i = 0; i < 3; i++)
//	{
//		scanf("%d ", &arr[i]);
//	}
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	scanf("%c%c%c", &A, &B, &C);
//	bottle_sort(arr, sz);
//	if (arr[0] == arr[1] && arr[1] == arr[2])
//	{
//		printf("%d %d %d", arr[0], arr[1], arr[2]);
//	}
//	else
//	{
//		if (A == 'A')
//		{
//			if (B == 'B')
//			{
//				printf("%d %d %d", arr[0], arr[1], arr[2]);
//			}
//			else if (B == 'C')
//			{
//				printf("%d %d %d", arr[0], arr[2], arr[1]);
//			}
//		}
//		else if (A == 'B')
//		{
//			if (B == 'A')
//			{
//				printf("%d %d %d", arr[1], arr[0], arr[2]);
//			}
//			else if (B == 'C')
//			{
//				printf("%d %d %d", arr[1], arr[2], arr[0]);
//			}
//		}
//		else if (A == 'C')
//		{
//			if (B == 'A')
//			{
//				printf("%d %d %d", arr[2], arr[0], arr[1]);
//			}
//			else if (B == 'B')
//			{
//				printf("%d %d %d", arr[2], arr[1], arr[0]);
//			}
//		}
//	}
//	return 0;
//}
//ISBN 号码
//#include <stdio.h>
//int main()
//{
//	char ch[14];
//	scanf("%s", ch);
//	int i = 0;
//	int j = 1;
//	int sum = 0;
//	char mod[12] = "0123456789X";
//	for (i = 0; i < 12; i++)
//	{
//		if (ch[i] == '-')
//		{
//			continue;
//		}
//		else
//		{
//			sum += (ch[i] - 48) * j;
//			j++;
//		}
//	}
//	if (mod[sum % 11] == ch[12])
//	{
//		printf("Right");
//	}
//	else
//	{
//		ch[12] = mod[sum % 11];
//		printf("%s", ch);
//	}
//	return 0;
//}
