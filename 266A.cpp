/*
Problem Link: https://codeforces.com/problemset/problem/266/A
Solve Link: https://codeforces.com/contest/266/submission/112751687
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i, n, ans=0;
	cin>>n;
	string s;
	cin>>s;
	for(i=0; i<n; i++)
	{
		if(s[i]==s[i+1])
			ans++;
	}
	cout<<ans;
}