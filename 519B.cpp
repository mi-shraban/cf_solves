/*
Problem Link: https://codeforces.com/problemset/problem/519/B
Solve Link: https://codeforces.com/contest/519/submission/117976356
*/

#include<bits/stdc++.h>
using namespace std;

#define endl '\n';

int main()
{
	int n, x;
	cin>>n;
	
	int a=0, b=0, c=0;
	
	for(int i=0; i<n; i++)
	{
		cin>>x;
		a+=x;
	}
	for(int i=0; i<n-1; i++)
	{
		cin>>x;
		b+=x;
	}
	for(int i=0; i<n-2; i++)
	{
		cin>>x;
		c+=x;
	}
	
	cout<<a-b<<endl;
	cout<<b-c<<endl;
	
	//LMAO tf why is this a B lul//


	return 0;
}