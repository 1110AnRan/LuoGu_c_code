#define _CRT_SECURE_NO_WARNINGS 1
//自动修正
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char ch[100];
//	scanf("%s", ch);
//	int str = strlen(ch);
//	int i = 0;
//	for (i = 0; i < str; i++)
//	{
//		if (ch[i] >= 'a' && ch[i] <= 'z')
//		{
//			printf("%c", ch[i] + 'A' - 'a');
//		}
//		else
//		{
//			printf("%c", ch[i]);
//		}
//	}
//	return 0;
//}
//小书童——凯撒密码
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int n = 0;
//	char ch[50];
//	scanf("%d %s", &n, ch);
//	int str = strlen(ch);
//	int i = 0;
//	for (i = 0; i < str; i++)
//	{
//		//printf("%c", (int)(ch[i]) + n);
//		if ((int)(ch[i]) + n > 122)
//		{
//			printf("%c", 96+((int)(ch[i]+n)%122));
//		}
//		else
//		{
//			printf("%c", (int)(ch[i]) + n);
//		}
//	}
//	return 0;
//}
//////口算练习题
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int j = 0;
//	for (j = 0; j < i; j++)
//	{
//		char ch[5];
//		scanf("%s", ch);
//		int str = strlen(ch);
//		if (ch[0] == 'a')
//		{
//			printf("%d+%d=%d", (int)(ch[2]), (int)(ch[4]), (int)(ch[2] + ch[4]));
//		}
//	}
//	return 0;
//}
//标题统计
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char ch[10];
//	scanf("%s", ch);
//	int i = 0;
//	int str = strlen(ch);
//	//int count = 0;
//	for (i = 0; i < str; i++)
//	{
//		//if (ch[i] >= '0' && ch[i] <= '9')
//		//{
//		//	count++;
//		//}
//		//if (ch[i] >= 'a' && ch[i] <= 'z')
//		//{
//		//	count++;
//		//}
//		//if (ch[i] >= 'A' && ch[i] <= 'Z')
//		//{
//		//	count++;
//		//}
//		if (ch[i] == ' ' || ch[i] == '\n')
//		{
//			str++;
//		}
//	}
//	printf("%d", str);
//	return 0;
//}
