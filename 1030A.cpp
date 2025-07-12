/*
Problem Link: https://codeforces.com/problemset/problem/1030/A
Solve Link: https://codeforces.com/contest/1030/submission/112490102
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,count=0;
	cin>>n;
	int a[n];
	for(i=0; i<n; i++)
	{
		cin>>a[i];
	}
	for(i=0; i<n; i++)
	{
		if(a[i]==1)
		count++;
	}
	if(count>0) cout<<"HARD";
	else cout<<"EASY";
}