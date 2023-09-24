


//B3636 文字工作
//#include<bits/stdc++.h>
//using namespace std;
//long long n;
//int main()
//{
//	cin >> n;
//	int cnt = 0;
//	while (n != 1)
//	{
//		if (n % 2 == 0)
//		{
//			n /= 2;
//		}
//		else
//		{
//			n -= 1;
//		}
//		cnt++;
//	}
//	cout << cnt;
//	return 0;
//}

//P1002 过河卒
//#include<bits/stdc++.h>
//using namespace std;
//int matrix[25][25];
//int br, bl, horser, horsel;
//int cnt = 0;
//void SetHorseDis()
//{
//	matrix[horser][horsel] = 1;
//	if (horser - 2 >= 0)
//	{
//		if (horsel - 1 >= 0)
//		{
//			matrix[horser - 2][horsel - 1] = 1;
//		}
//		if (horsel + 1 <= bl)
//		{
//			matrix[horser - 2][horsel + 1] = 1;
//		}
//	}
//
//	if (horser - 1 >= 0)
//	{
//		if (horsel - 2 >= 0)
//		{
//			matrix[horser - 1][horsel - 2] = 1;
//		}
//		if (horsel + 2 <= bl)
//		{
//			matrix[horser - 1][horsel + 2] = 1;
//		}
//	}
//
//	if (horser + 1 <= br)
//	{
//		if (horsel - 2 >= 0)
//		{
//			matrix[horser + 1][horsel - 2] = 1;
//		}
//		if (horsel + 2 <= bl)
//		{
//			matrix[horser + 1][horsel + 2] = 1;
//		}
//	}
//
//	if (horser + 2 <= br)
//	{
//		if (horsel - 1 >= 0)
//		{
//			matrix[horser + 2][horsel - 1] = 1;
//		}
//		if (horsel + 1 <= bl)
//		{
//			matrix[horser + 2][horsel + 1] = 1;
//		}
//	}
//	
//}
//
////void Print()
////{
////	for (int i = 0; i <= br; i++)
////	{
////		for (int j = 0; j <= bl; j++)
////		{
////			cout << matrix[i][j] << " ";
////		}
////		cout << endl;
////	}
////}
//bool IsPath(int x, int y)
//{
//	if (x >= 0 && x <= br && y >= 0 && y <= bl && matrix[x][y] == 0)
//	{
//		return true;
//	}
//	return false;
//}
//void CountCorPath(int x,int y)
//{
//	if (x == br && y == bl)
//	{
//		cnt++;
//		return;
//	}
//
//	if (IsPath(x + 1, y))
//	{
//		matrix[x + 1][y] = 1;
//		CountCorPath(x + 1, y);
//		matrix[x + 1][y] = 0;
//	}
//
//	if (IsPath(x, y + 1))
//	{
//		matrix[x][y + 1] = 1;
//		CountCorPath(x, y + 1);
//		matrix[x][y + 1] = 0;
//	}
//	
//}
//int main()
//{
//	cin >> br >> bl >> horser >> horsel;
//	memset(matrix, 0, sizeof(matrix));
//	matrix[0][0] = 1;
//	SetHorseDis();
//	CountCorPath(0, 0);
//	cout << cnt;
//	return 0;
//}


//#include<bits/stdc++.h>
//using namespace std;
//const int N = 30;
//int m, n, x, y;
//unsigned long long dp[N][N];
//bool board[N][N];
//// 储存马移动的八个方向
//int dx[] = { -2,-1,1,2,2,1,-1,-2 };
//int dy[] = { -1,-2,-2,-1,1,2,2,1 };
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0), cout.tie(0);
//	cin >> m >> n;
//	cin >> x >> y;
//	m += 1, n += 1, x += 1, y += 1;
//	board[x][y] = 1;
//	for (int i = 0; i < 8; i++) 
//	{
//		int tx = x + dx[i], ty = y + dy[i];
//		if (tx >= 0 && tx <= m && ty >= 0 && ty <= n)
//		{
//			board[tx][ty] = 1;
//		}
//	}
//	if (board[1][1]) 
//	{
//		cout << 0;
//		return 0;
//	}
//	// 边界初始化
//	dp[1][1] = 1;
//	for (int i = 1; i <= m; i++) 
//	{
//		for (int j = 1; j <= n; j++) 
//		{
//			if (board[i][j])
//			{
//				continue;
//			}
//			else 
//			{
//				dp[i][j] = max(dp[i - 1][j] + dp[i][j - 1], dp[i][j]);
//			}
//
//		}
//	}
//	cout << dp[m][n];
//	return 0;
//}
