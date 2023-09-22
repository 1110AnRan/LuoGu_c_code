

//B3635 硬币问题
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//const ll N = 1e6 + 5;
//ll dp[N];
//ll n;
//void _init()
//{
//	for (ll i = 1; i <= 4; i++)
//	{
//		dp[i] = i;
//	}
//	for (ll i = 5; i <= 9; i++)
//	{
//		dp[i] = i - 4;
//	}
//	dp[10] = 2;
//	dp[11] = 1;
//}
//int main()
//{
//	_init();
//	cin >> n;
//	for (ll i = 12; i <= n; i++)
//	{
//		ll _min = min(dp[i - 1], dp[i - 5]);
//		_min = min(dp[i - 11], _min);
//		dp[i] = _min + 1;
//	}
//	cout << dp[n];
//	return 0;
//}


//B3637 最长上升子序列
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//const ll N = 5005;
//ll dp[N], n, nums[N];
//int main()
//{
//	cin >> n;
//	for (ll i = 1; i <= n; i++)
//	{
//		cin >> nums[i];
//		dp[i] = 1;
//	}
//	for (ll i = 2; i <= n; i++)
//	{
//		for (ll j = 1; j < i; j++)
//		{
//			if (nums[j] < nums[i])
//			{
//				dp[i] = max(dp[i], dp[j] + 1);
//			}
//		}
//	}
//	ll ans = 0;
//	for (ll i = 1; i <= n; i++)
//	{
//		ans = max(ans, dp[i]);
//	}
//	cout << ans;
//	return 0;
//}