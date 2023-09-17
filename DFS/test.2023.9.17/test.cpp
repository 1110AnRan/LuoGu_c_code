

//B3625 ÃÔ¹¬Ñ°Â·
//#include<bits/stdc++.h>
//using namespace std;
//const int N = 105;
//int n, m;
//char grid[N][N];
//bool IsPath(int x, int y)
//{
//	if (x >= 1 && x <= n && y >= 1 && y <= m && grid[x][y] != '#' && grid[x][y] != '1')
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//bool FindCurPath(int x,int y)
//{
//	if (x == n && y == m)
//	{
//		return true;
//	}
//
//	grid[x][y] = '1';
//	int nextx = x - 1;
//	int nexty = y;
//	if (IsPath(nextx,nexty))
//	{
//		if (FindCurPath(nextx, nexty))
//		{
//			return true;
//		}
//	}
//	
//	nextx = x + 1;
//	nexty = y;
//	if (IsPath(nextx, nexty))
//	{
//		if (FindCurPath(nextx, nexty))
//		{
//			return true;
//		}
//	}
//
//	nextx = x;
//	nexty = y - 1;
//	if (IsPath(nextx, nexty))
//	{
//		if (FindCurPath(nextx, nexty))
//		{
//			return true;
//		}
//	}
//
//	nextx = x;
//	nexty = y + 1;
//	if (IsPath(nextx, nexty))
//	{
//		if (FindCurPath(nextx, nexty))
//		{
//			return true;
//		}
//	}
//	return false;
//}
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			cin >> grid[i][j];
//		}
//	}
//	if (FindCurPath(1, 1))
//	{
//		cout << "Yes";
//	}
//	else
//	{
//		cout << "No";
//	}
//	return 0;
//}

