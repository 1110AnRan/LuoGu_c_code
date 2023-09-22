


// P1030 求先序排列
//#include<bits/stdc++.h>
//using namespace std;
//void dfs(string in, string after)
//{
//	if (in.size() > 0)
//	{
//		char ch = after[after.size() - 1];
//		cout << ch;
//		int index = in.find(ch);
//		dfs(in.substr(0, index), after.substr(0, index));
//		dfs(in.substr(index + 1), after.substr(index, in.size() - index - 1));
//	}
//}
//int main()
//{
//	string in, after;
//	cin >> in >> after;
//	dfs(in, after);
//	return 0;
//}


//B3621 枚举元组
//#include<bits/stdc++.h>
//using namespace std;
//int n, k;
//int num = 1;
//vector<int> v;
//int arr[5];
//void init()
//{
//	memset(arr, 0, sizeof(arr));
//	for (int i = 1; i <= k; i++)
//	{
//		arr[i] = i;
//	}
//}
//void dfs(int cur)
//{
//	if (cur == n)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			cout << v[i] << " ";
//		}
//		cout << endl;
//		return;
//	}
//	
//	if (arr[1] != 0)
//	{
//		v.push_back(arr[1]);
//		dfs(v.size());
//		v.pop_back();
//	}
//
//	if (arr[2] != 0)
//	{
//		v.push_back(arr[2]);
//		dfs(v.size());
//		v.pop_back();
//	}
//
//	if (arr[3] != 0)
//	{
//		v.push_back(arr[3]);
//		dfs(v.size());
//		v.pop_back();
//	}
//
//	if (arr[4] != 0)
//	{
//		v.push_back(arr[4]);
//		dfs(v.size());
//		v.pop_back();
//	}
//}
//int main()
//{
//	cin >> n >> k;
//	init();
//	dfs(0);
//	return 0;
//}


//B3623 枚举排列
//#include<bits/stdc++.h>
//using namespace std;
//int n, k;
//vector<bool> visited;
//vector<int> ans;
//void init()
//{
//	visited.resize(n + 1, false);
//}
//void dfs(int cur)
//{
//	if (cur == k)
//	{
//		for (auto e : ans)
//		{
//			cout << e << " ";
//		}
//		cout << endl;
//		return;
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		if (visited[i] == false)
//		{
//			visited[i] = true;
//			ans.push_back(i);
//			dfs(ans.size());
//			ans.pop_back();
//			visited[i] = false;
//		}
//	}
//}
//int main()
//{
//	cin >> n >> k;
//	init();
//	dfs(0);
//	return 0;
//}