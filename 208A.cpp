/*
Problem Link: https://codeforces.com/problemset/problem/208/A
Solve Link: https://codeforces.com/contest/208/submission/112519608
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	for(int i=0; i<s.size(); i++)
	{
		if(s[i]=='W' and s[i+1]=='U' and s[i+2]=='B')
		{
			i+=2;
			cout<<" ";
		}
		else cout<<s[i];
	}
}