/*
Problem Link: https://codeforces.com/problemset/problem/978/B
Solve Link: https://codeforces.com/contest/978/submission/114493278
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	string s;
	cin>>s;
	int a=0;
	
	for(int i=0; i<n; i++)
	{
		if(s[i]=='x' and s[i+1]=='x' and s[i+2]=='x')
			a++;
	}
	cout<<a;
}