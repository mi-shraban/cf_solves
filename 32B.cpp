/*
Problem Link: https://codeforces.com/problemset/problem/32/B
Solve Link: https://codeforces.com/contest/32/submission/113561423
 */

#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s,s1;
	cin>>s;
	
	for(int i=0; i<s.size(); i++)
	{
		if(s[i]=='.')
			s1+="0";
		else if (s[i]=='-' and s[i+1]=='.')
		{
			s1+="1";
			i++;
		}
		else if (s[i]=='-' and s[i+1]=='-')
		{
			s1+="2";
			i++;
		}
	}
	cout<<s1;
	
	return 0;
}