/*
Problem Link: https://codeforces.com/problemset/problem/456/A
Solve Link: https://codeforces.com/contest/456/submission/118275527
*/

#include<bits/stdc++.h>
using namespace std;

#define endl '\n';

int main()
{
	unsigned int n;
	cin>>n;
	
	unsigned int a, b;
	
	while(n--)
	{
		cin>>a>>b;
		
		if(a!=b)
		{
			cout<<"Happy Alex";
			return 0;
		}
	}
	cout<<"Poor Alex";

	return 0;
}