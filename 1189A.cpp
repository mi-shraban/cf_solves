/*
Problem Link: https://codeforces.com/problemset/problem/1189/A
Solve Link: https://codeforces.com/contest/1189/submission/121949524
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	string s;
	cin>>s;
	
	n=s.size();
	
	int zero=0, one=0; 
	
	for(int i=0; i<n; i++)
	{
		if(s[i]=='1')
			one++;
		else
			zero++;
	}
	
	if(one!=zero)
	{
		cout<<1<<endl;
		cout<<s<<endl;
	}
	else
	{
		cout<<2<<endl;
		cout<<s[0]<<' ';
		for(int i=1; i<n; i++)
		{
			cout<<s[i];
		}
	}
	return 0;
}