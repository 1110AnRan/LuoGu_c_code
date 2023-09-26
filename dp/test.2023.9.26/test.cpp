

//P1048 ≤À“©
//#include<bits/stdc++.h>
//using namespace std;
//int t, m;
//int times[1005], value[1005];
//int dp[105][1005];
//int main()
//{
//	cin >> t >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		cin >> times[i] >> value[i];
//	}
//	for (int i = 1; i <= m; i++)
//	{
//		for (int j = 1; j <= t; j++)
//		{
//			if (j < times[i])
//			{
//				dp[i][j] = dp[i - 1][j];
//			}
//			else
//			{
//				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - times[i]] + value[i]);
//			}
//		}
//	}
//	cout<<dp[m][t];
//	return 0;
//}


//P1049
//#include<bits/stdc++.h>
//using namespace std;
//int v, n;
//int V[35];
//int dp[20005][20005];
//int main()
//{
//	cin >> v >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> V[i];
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= v; j++)
//		{
//			if (j < V[i])
//			{
//				dp[i][j] = dp[i - 1][j];
//			}
//			else
//			{
//				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - V[i]] + V[i]);
//			}
//		}
//	}
//	cout << v - dp[n][v];
//	return 0;
//}