/*
Problem Link: https://codeforces.com/problemset/problem/556/A
Solve Link: https://codeforces.com/contest/556/submission/118274270
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	unsigned long long n;
	cin>>n;
	
	string s;
	cin>>s;
	
	unsigned long long one=0, zero=0;
	
	for(unsigned long long i=0; i<n; i++)
	{
		if(s[i]=='1')	one++;
		else zero++;
	}
	
	if(one>zero)
		cout<<one-zero;
	else
		cout<<zero-one;
}