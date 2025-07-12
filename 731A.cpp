/*
Problem Link: https://codeforces.com/problemset/problem/731/A
Solve Link: https://codeforces.com/contest/731/submission/114463431
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	
	char start='a';
	int x, y, ans=0;
	
	for(int i=0; i<s.size(); i++)
	{
		x=start-s[i];
		y=s[i]-start;
		
		if(x<0)	x+=26;
		if(y<0) y+=26;
		
		ans+= min(x, y);
		start=s[i];		
	}
	cout<<ans;
	
	return 0;
}