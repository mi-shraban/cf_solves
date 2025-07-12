/*
Problem Link: https://codeforces.com/problemset/problem/131/A
Solve Link: https://codeforces.com/contest/131/submission/112381273
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,a=0, b=0;
	string s;
	cin>>s;
	for(i=1; i<s.size(); i++)
	{
		if(islower(s[i]))
		a++;
	}
	for(i=0; i<s.size(); i++)
	{
		if(isupper(s[i]))
		b++;
	}
	if(islower(s[0]) and a==0)
	{
		s[0]=(toupper(s[0]));
		for(i=1; i<s.size(); i++)
		{
			s[i]=(tolower(s[i]));
		}
		cout<<s;
	}
	else if(b==s.size())
	{
		for(i=0; i<s.size(); i++)
		{
			s[i]=(tolower(s[i]));
		}
		cout<<s;
	}
	else cout<<s;
}