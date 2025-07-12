/*
Problem Link: https://codeforces.com/problemset/problem/136/A
Solve Link: https://codeforces.com/contest/136/submission/113476363
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int a[n+1];
	for(int i=1; i<n+1; i++)
	{
		cin>>a[i];
	}
	
	int x[n+1];
	for(int i=1; i<n+1; i++)
	{
		x[a[i]]=i;
	}
	
	for(int i=1; i<n+1; i++)
	{
		cout<<x[i]<<" ";
	}
}