/*
Problem Link: https://codeforces.com/problemset/problem/1552/A
Solve Link: https://codeforces.com/contest/1552/submission/125317083
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		string s;
		cin>>n>>s;
		
		string s1=s;
		
		sort(s.begin(), s.end());
		
		int ans=0;
		
		for(int i=0; i<n; i++)
		{
			if(s[i]!=s1[i])
				ans++;
		}
		
		cout<<ans<<"\n";
	}
}