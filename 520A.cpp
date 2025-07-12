/*
Problem Link: https://codeforces.com/problemset/problem/520/A
Solve Link: https://codeforces.com/contest/520/submission/112639096
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i, n, yeet=0;
	cin>>n;
	string s;
	cin>>s;
	
	for(i=0; i<n; i++)
	{
		s[i]=tolower(s[i]);
	}
	
	sort(s.begin(),s.end());
	
	for(i=0; i<n; i++)
	{
		if(s[i]!=s[i+1])
			yeet++;
	}
	if(yeet>=26)
		cout<<"YES";
	else cout<<"NO";
	
	return 0;
}