/*
Problem Link: https://codeforces.com/problemset/problem/1409/A
Solve Link: https://codeforces.com/contest/1409/submission/115854049
*/

#include<bits/stdc++.h>
using namespace std;

#define endl '\n';

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int a, b;
		cin>>a>>b;
		
		int d=abs(a-b);
		
		cout<<(d+9)/10<<endl;
	}
	
	return 0;
}