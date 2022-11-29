#define _CRT_SECURE_NO_WARNINGS 1
//爱与愁的心痛
//#include <stdio.h>
//int main()
//{
//    int m = 0;
//    int n = 0;
//    scanf("%d %d", &m, &n);
//    int arr[100001];
//    int i = 0;
//    int j = 0;
//    int min = 0;
//    int max = 0;
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < n; i++)
//    {
//        min += arr[i];
//    }
//    for (i = 1; i <= m - n; i++)
//    {
//        max = 0;
//        for (j = i; j < n + i; j++)
//        {
//            max += arr[j];
//        }
//        if (max < min)
//        {
//            min = max;
//        }
//    }
//    printf("%d", min);
//    return 0;
//}
//开灯
//#include <stdio.h>
//int main()
//{
//	int arr[2000005] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	float a = 0;
//	int t = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%f %d", &a, &t);
//		for (j = 1; j <= t; j++)
//		{
//			if (arr[(int)(a * j)] == 0)
//			{
//				arr[(int)(a * j)] = 1;
//			}
//			else
//			{
//				arr[(int)(a * j)] = 0;
//			}
//		}
//	}
//	for (i = 1; i <= 2000005; i++)
//	{
//		if (arr[i] == 1)
//		{
//			printf("%d", i);
//			break;
//		}
//	}
//	return 0;
//}
//插火把
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[9][9];
//	int sum = 1;
//	int i = 0;
//	int j = 0;
//	int m = -1;
//	int a = 0;
//	int b = n;
//	if (b % 2 == 0)
//	{
//		for (i = 0; i < b / 2; i++)
//		{
//
//			while (m < n - 1)
//			{
//				m++;
//				arr[j][m] = sum;
//				sum++;
//			}
//			while (j < n - 1)
//			{
//				j++;
//				arr[j][m] = sum;
//				sum++;
//			}
//			while (m > a)
//			{
//				m--;
//				arr[j][m] = sum;
//				sum++;
//			}
//			while (j > i + 1)
//			{
//				j--;
//				arr[j][m] = sum;
//				sum++;
//			}
//			n--;
//			a++;
//		}
//	}
//	else
//	{
//		for (i = 0; i < b / 2; i++)
//		{
//			while (m < n - 1)
//			{
//				m++;
//				arr[j][m] = sum;
//				sum++;
//			}
//			while (j < n - 1)
//			{
//				j++;
//				arr[j][m] = sum;
//				sum++;
//			}
//			while (m > a)
//			{
//				m--;
//				arr[j][m] = sum;
//				sum++;
//			}
//			while (j > i + 1)
//			{
//				j--;
//				arr[j][m] = sum;
//				sum++;
//			}
//			n--;
//			a++;
//			arr[b / 2][b / 2] = b * b;
//		}
//	}
//	if (b > 1)
//	{
//		for (i = 0; i < b; i++)
//		{
//			for (j = 0; j < b; j++)
//			{
//				printf("%3d", arr[i][j]);
//			}	
//			printf("\n");
//		}
//	}
//	else
//	{
//		printf("1\n");
//	}
//	
//	return 0;
//}
//压缩技术
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr1[200][200];
//	int arr2[200] = { 0 };
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	int m = 0;
//	for (i = 0; i < 200; i++)
//	{
//		scanf("%d", &arr2[i]);
//		sum += arr2[i];
//		if (sum == n * n)
//		{
//			break;
//		}
//	}
//	for (i = 0; i < 200; i++)
//	{
//		m = i;
//		for (j = 0; j < arr2[m]; j++)
//		{
//			arr1[i][j] = 0;
//		}
//		for (j = arr2[m]; j < arr2[m + 1]; j++)
//		{
//			
//		}
//	}
//	return 0;
//}
//小鱼比可爱
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr1[100];
//	int arr2[10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			if (arr1[j] < arr1[i])
//			{
//				arr2[i]++;
//			}
//		}
//		printf("%d ", arr2[i]);
//	}
//
//	return 0;
//}
//小鱼的数字游戏
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	int arr[100];
//	for (i = 0; i < 100; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] == 0)
//		{
//			break;
//		}
//		count++;
//	}
//	for (i = count - 1; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//冰雹猜想
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int count = 0;;
//	int i = 1;
//	scanf("%d", &n);
//	int arr[10000] = { n };
//	while (n != 1)
//	{
//		if (n % 2 == 1)
//		{
//			n = n * 3 + 1;
//			arr[i] = n;
//		}
//		else
//		{
//			n = n / 2;
//			arr[i] = n;
//		}
//		count++;
//		i++;
//	}
//	for (i = count; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	//
//	//	return 0;
//	//}
//	//校门外的树
//#include <stdio.h>
//	int main()
//	{
//
//		return 0;
//	}
//	//爱与愁的心痛
//#include  <stdio.h>
//	int main()
//	{
//		int m = 0;
//		int n = 0;
//		int x = 0;
//		scanf("%d %d", &m, &n);
//		int arr[100001];
//		int i = 0;
//		int j = 0;
//		int min = 0;
//		int max = 0;
//		for (i = 0; i < m; i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		for (i = 0; i < n; i++)
//		{
//			min += arr[i];
//		}
//		for (i = 1; i < m - 4; i++)
//		{
//			for (j = i; j < n + i; j++)
//			{
//				max += arr[j];
//			}
//			if (max < min)
//			{
//				min = max;
//			}
//		}
//		printf("%d", min);
//		return 0;
//	}
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int arr[101];
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	int start = 0;
//	int end = n-1;
//	int count = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d ", &arr[i]);
//	}
//	for (i = 0; i < n - 1; i++)
//	{
//		int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			int temp = 0;
//			if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 1; i < n - 1; j++)
//		{
//			if (arr[start] + arr[j] == arr[end])
//			{
//				count++;
//			}
//		}
//	}
//
//
//	return 0;
//}
