/*
Problem Link: https://codeforces.com/problemset/problem/61/A
Solve Link: https://codeforces.com/contest/61/submission/114274002
 */

#include<bits/stdc++.h>
using namespace std; 

int main()
{
	string s, s1;
	cin>>s>>s1;
	
	for(int i=s.size()-1; i>=0; i--)
	{
		if(s[i] == s1[i])
			s[i]='0';
		else
			s[i]='1';
	}
	cout<<s;
	
	return 0;
}