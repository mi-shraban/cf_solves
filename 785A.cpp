/*
Problem Link: https://codeforces.com/problemset/problem/785/A
Solve Link: https://codeforces.com/contest/785/submission/114453608
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	string s;
	int ans=0;
	
	while(n--)
	{
		cin>>s;
		
		if(s[0]=='T')	ans+=4;
		else if(s[0]=='C')	ans+=6;
		else if(s[0]=='O')	ans+=8;
		else if(s[0]=='D')	ans+=12;
		else if(s[0]=='I')	ans+=20;
	}
	cout<<ans;
	
	return 0;
}