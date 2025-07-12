/*
Problem Link: https://codeforces.com/problemset/problem/443/A
Solve Link: https://codeforces.com/contest/443/submission/112913806
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	sort(s.begin(), s.end());
	
	int i, x=0;
	
	for(i=0; i<s.size(); i++)
	{
		if((s[i]=='{') or (s[i]=='}') or (s[i]==',') or (s[i]==' '))
			continue;
		else if (s[i]!=s[i+1])
			x++;
	}
	cout<<x<<endl;
}