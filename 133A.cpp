/*
Problem Link: https://codeforces.com/problemset/problem/133/A
Solve Link: https://codeforces.com/contest/133/submission/112465955
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,cv=0;
	string s;
	cin>>s;
	for(i=0; i<s.size(); i++)
	{
		if(s[i]=='H' or s[i]=='Q' or s[i]=='9')
			cv++;
	}
	if(cv>0)
		cout<<"YES";
	else cout<<"NO";
}