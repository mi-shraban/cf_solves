/*
Problem Link: https://codeforces.com/problemset/problem/262/A
Solve Link: https://codeforces.com/contest/262/submission/113122689
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, k, ans=0;
	cin>>n>>k;
	
	string s;
	while(n--)
	{
		int lucky=0;
		cin>>s;
		for(int i=0; i<s.size(); i++)
		{
			if(s[i]=='4' or s[i]=='7')
				lucky++;
		}
		if(lucky<=k)
			ans++;
	}
	cout<<ans;
	
	return 0;
}