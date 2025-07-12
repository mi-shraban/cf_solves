/*
Problem Link: https://codeforces.com/problemset/problem/581/A
Solve Link: https://codeforces.com/contest/581/submission/113713560
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b;
	cin>>a>>b;
	
	int x=0, y=0;
	
	if(a>=b)
	{
		a-=b;
		a/=2;
		cout<<b<<' '<<a;
	}
	else
	{
		b-=a;
		b/=2;
		cout<<a<<' '<<b;
	}
	
	return 0;
}