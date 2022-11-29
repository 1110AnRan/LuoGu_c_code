#define _CRT_SECURE_NO_WARNINGS 1
//字母转换
//#include <stdio.h>
//using namespace std;
//int main()
//{
//	char ch;
//	scanf("%c", &ch);
//	printf("%c", char(int(ch) - 32));
//	return 0;
//}
//三角形面积
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	double a, b, c, p, s;
//	scanf("%lf %lf %lf", &a, &b, &c);	
//	p = (a + b + c) / 2;
//	s = sqrt(p * (p - a) * (p - b) * (p - c));
//	printf("%.1f", s);
//	
//	return 0;
//}
// 小玉买文具
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	double c = 0;
//	double d = 1.9;
//	int  ret = 0;
//	scanf("%d %d", &a, &b);
//	c = (a * 1.0) + (b * 0.1);
//	ret = c / d;
//	printf("%d",ret);
//	
//
//
//	return 0;
//}
//普及成绩
//#include <stdio.h>
//int main()
//{
//	int grade1 = 0;
//	int grade2 = 0;
//	int grade3 = 0;
//	scanf("%d %d %d", &grade1, &grade2, &grade3);
//	int totle = 0;
//	totle = grade1 * 0.2 + grade2 * 0.3 + grade3 * 0.5;
//	printf("%d", totle);
//	return 0;
//}
//上学迟到
#include<stdio.h>
int main()
{
	char ch;
	scanf("%c", &ch);
	printf("  %c  \n ", ch);
	printf("%c%c%c \n", ch, ch, ch);
	printf("%c%c%c%c%c", ch, ch, ch, ch, ch);
	return 0;
}