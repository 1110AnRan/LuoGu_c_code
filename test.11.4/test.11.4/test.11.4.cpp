#define _CRT_SECURE_NO_WARNINGS 1
//找最小值
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int min = 0;
//	scanf("%d", &n);
//	int arr[n];
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d ", &arr[i]);
//	}
//	min = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[min] > arr[i])
//		{
//			min = i;
//		}
//	}
//	printf("%d", arr[min]);
//
//	return 0;
//}
//分类平均
//#include <stdio.h>
//int main()
//{
//	int n, k;
//	int a = 0;
//	int b = 0;
//	int count1 = 0;
//	int count2 = 0;
//	int i = 0;
//	scanf("%d %d", &n, &k);
//	for (i = 1; i <= n; i++)
//	{
//		if (i % k == 0)
//		{
//			a += i ;
//			count1++;
//		}
//		else
//		{
//			b += i;
//			count2++;
//		}
//	}
//	printf("%.1f %.1f", a * 1.0 / count1, b * 1.0 / count2);
//	return 0;
//}
//一尺之棰
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int count = 1;
//	scanf("%d", &a);
//	while (a / 2 )
//	{
//		a = a / 2;
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}
//数字直角三角形
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int row = 1;
//	scanf("%d", &n);
//	for (i = n; i > 0; i--)
//	{
//		for (j = 0; j < i; j++)
//		{
//			printf("%02d", row);
//			row++;
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//阶乘之和
//#include <stdio.h>
//int MUL(int n)
//{
//	int i = 0;
//	int j = 0;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//		ret = 1;
//	}
//	return sum;
//}
//int main()
//{	
//	int n = 0;
//	int S = 0;
//	scanf("%d", &n);
//	S = MUL(n);
//	printf("%d", S);
//	return 0;
//}
//计数问题
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int x = 0;
//	int count = 0;
//	int i = 0;
//	int j = 0;
//	scanf("%d %d", &n, &x);
//	for (i = 1; i <= n; i++)
//	{
//		if (i <= 9)
//		{
//			if (i % 10 == x)
//			{
//				count++;
//			}
//		}
//		else
//		{
//			j = i;
//			while (j / 10)
//			{
//				if (j % 10 == x)
//				{
//					count++;
//				}
//				j = j / 10;
//				if (j == x)
//				{
//					count++;
//				}
//
//			}
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//级数求和
//#include <stdio.h>
//int main()
//{
//	double s = 0;
//	int k = 0;
//	int n = 0;
//	scanf("%d",&k);
//	while (s < k)
//	{
//		++n;
//		s += 1.0 / n;
//		
//	}
//	printf("%d", n);
//	return 0;
//}
//金币
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 1;
//	int i = 0;
//	scanf("%d", &a);
//	for (i = 1; i <= a; i++)
//	{
//		a = a - i;
//		b += c * c;
//		c++;
//	}
//	printf("%d", b + a * c);
//	return 0;
//}
//
////
// 数列求和
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret += i;
//	}
//	printf("%d", ret);
//	return 0;
//}
//质数口袋
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int n = 2;
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	int l = 0;
//	int ret = 0;
//	scanf("%d", &l);
//	for (i = 2; i <= n; i++)
//	{
//		for (j = 2; j < sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			ret += i;
//			if (ret <= l)
//			{
//				printf("%d\n", i);
//				count++;
//			}
//			else
//			{
//				break;
//			}
//		}
//		n++;
//	}
//	printf("%d", count);
//	return 0;
//}
//小玉游泳
//#include <stdio.h>
//int main()
//{
//	double a = 2.0;
//	int count = 0;
//	double x = 0;
//	double num = 0;
//	scanf("%lf", &x);
//	while (x > num)
//	{
//		num = num + a;
//		a = a * 0.98;
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}
//数字反转
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int a, b,d;
//	int c = 0;
//	int i = 10;
//	int j = 0;
//	int n = 0;
//	scanf("%d", &a);
//	d = a;
//	while (d)
//	{
//		d = d / 10;
//		j++;
//	}
//	for(n=j-1;n>=0;n--)
//	{
//		b = a % 10;
//		c +=  b * pow(i, n);
//		a = a / 10;
//	}
//	printf("%d", c);
//	return 0;
//}
////斐波那契数列
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int n = 0;
//	double a = 0;
//	double b = 1;
//	double c = 1;
//	scanf("%d", &n);
//	if (n == 0)
//	{
//		printf("0.00");
//		return 0;
//	}
//	for (int i = 3; i <= n; i++)
//	{
//		a = b;
//		b = c;
//		c = a + b;
//	}
//	printf("%.2lf", c);
//	return 0;
//}
//打分
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int arr[1000];
//	int i = 0;
//	int min = 0;
//	int max = 0;
//	double total = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	min = arr[0];
//	max = arr[0];
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] >= max)
//		{
//			max = arr[i];
//		}
//		if (arr[i] <= min)
//		{
//			min = arr[i];
//		}
//		total += arr[i];
//	}
//	total = (total - min - max) / (n-2);
//	printf("%.2lf", total);
//	return 0;
//}
//Davor
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int x = 0;
//	int k = 0;
//	while (n - 364*x - 1092*k != 0 || x>100)
//	{
//		k++;
//		x = (n - 1092 * k)/364;
//		if (n - 364 * x - 1092 * k == 0 && x > +1 && x <= 100)
//		{
//			break;
//		}
//	}
//	printf("%d\n%d", x, k);
//	return 0;
//}
// 求三角形
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	int a = 0;
//	int m = 0;
//	int sum = 1;
//	m = n;
//	for (i = 1; i <= n * n; i++)
//	{
//		printf("%02d", i);
//		if (i % n == 0)
//		{
//			printf("\n");
//		}
//	}
//	printf("\n");
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < 2*(m - 1); j++)
//		{
//			printf(" ");
//		}
//		for (a = 0; a <= i; a++)
//		{
//			printf("%02d", sum);
//			sum++;
//		}
//		printf("\n");
//		m--;
//	}
//	return 0;
//}
////津津的储蓄计划
//#include <stdio.h>
//int main()
//{
//	int arr[12];
//	int i = 0;
//	int sum = 0;
//	int mot = 0;
//	for (i = 0; i < 12; i++)
//	{
//		//sum += 300;
//		scanf("%d", &arr[i]);
//		//sum -= arr[i];
//		//if (sum < 0)
//		//{
//		//	printf("%d",-(i+1));
//		//	i = -(i - 1);
//		//	break;
//		//}
//		//else
//		//{
//		//	if (sum >= 100)
//		//	{
//		//		mot += (sum / 100) * 100;
//		//		sum -= (sum / 100) * 100;
//		//	}
//		//}
//	}
//	for (i = 0; i < 12; i++)
//	{
//		sum += 300;
//		sum -= arr[i];
//		if (sum < 0)
//		{
//			printf("%d",-(i+1));
//			i = -(i - 1);
//			break;
//		}
//		else
//		{
//			if (sum >= 100)
//			{
//				mot += (sum / 100) * 100;
//				sum -= (sum / 100) * 100;
//			}
//		}
//	}
//	if (i > 0)
//	{
//		printf("%.0f", (float)mot * 1.2 + (float)sum);
//	}
//	return 0;
//}
//质因数分解
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 2; i <= n; i++)
//	{
//		if (n % i == 0)
//		{
//			printf("%d", n / i);
//			break;
//		}
//	}
//	return 0;
//}
////最长连号
//#include <stdio.h>
//int main()
//{
//	int arr[1000] = { 0 };
//	int n = 0;
//	int i = 0;
//	int max = 0;
//	int tmp = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < n - 1; i++)
//	{
//		if (arr[i + 1] - arr[i] == 1)
//		{
//			max++;
//		}
//		else
//		{
//			max = 0;
//		}
//		if (tmp < max)
//		{
//			tmp = max;
//		}
//	}
//	printf("%d",++tmp);
//	return 0;
//}